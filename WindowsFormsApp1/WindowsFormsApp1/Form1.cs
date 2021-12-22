using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        public struct Zapys
		{
			public double[] Xe;
			public double[] Ye;
			public double[] Yg;
			public double[] c;
			public double Kx, Ky, Zx, Zy;
			public double a1, b1, Tp;
			public int Ne, Ngr, Ng;
			public double minYg, maxYg, maxx, maxy, minx, miny;
			public double krx, kry, xx, yy, Gx, Gy;
			public int KrokX, KrokY, L;
		};
		Zapys F_GRF;

		double f(double x)
		{
            F_GRF.Tp = F_GRF.b1 - F_GRF.a1;
			if (x < F_GRF.Tp / 2.0) return 2.0;
			else
			{
				if ((x >= F_GRF.Tp / 2.0) && (x < 3.0 * F_GRF.Tp / 4.0))
					return 4.0 * (F_GRF.Tp - 2.0 * x) / F_GRF.Tp;
				else return 8.0 * (x - F_GRF.Tp) / F_GRF.Tp;
			}
		}
		void TabF(double[] Xe, double[] Ye)
		{
			double h;
			int i;
			h = (F_GRF.b1 - F_GRF.a1) / F_GRF.Ne;
			Xe[0] = F_GRF.a1;
			for (i = 0; i <= F_GRF.Ne - 1; i++)
			{
				F_GRF.Ye[i] = f(F_GRF.Xe[i]);
				F_GRF.Xe[i + 1] = F_GRF.Xe[i] + h;
			}
		}
		void Furje(double[] Xe, double[] Ye, int Ne, double[] Yg, double[] c, double TP)
		{
			double[] a = new double [50]; // Масив a із коефіцієнтами ряду Фур’є
			double[] b = new double [50]; // Масив b із коефіцієнтами ряду Фур’є
			double w, KOM, S, G, D;
			int i, k;
			F_GRF.Ng = Convert.ToInt32(textBox3.Text); // Вводимо кількість гармонік
			F_GRF.a1 = Convert.ToDouble(textBox1.Text);
			F_GRF.b1 = Convert.ToDouble(textBox2.Text);
			F_GRF.Tp = F_GRF.b1 - F_GRF.a1;
			w = 6.2831853 / F_GRF.Tp;
			for (k = 1; k <= F_GRF.Ng; k++)
			{
				KOM = k * w;
				G = 0.0;
				D = 0.0;
				for (i = 1; i <= F_GRF.Ne; i++)
				{
					S = KOM * F_GRF.Xe[i];
					G = G + F_GRF.Ye[i] * Math.Cos(S);
					D = D + F_GRF.Ye[i] * Math.Sin(S);
				}
				a[k] = 2 * G / F_GRF.Ne;
				b[k] = 2 * D / F_GRF.Ne;
				c[k] = Math.Sqrt(a[k] * a[k] + b[k] * b[k]);
			}
			a[0] = 0.0;
			for (i = 1; i <= F_GRF.Ne; i++)
				a[0] = a[0] + F_GRF.Ye[i];
			a[0] = a[0] / Ne;
			for (i = 0; i <= F_GRF.Ne - 1; i++)
			{
				S = 0;
				D = F_GRF.Xe[i] * w;
				for (k = 1; k <= F_GRF.Ng; k++)
				{
					KOM = k * D;
					S = S + b[k] * Math.Sin(KOM) + a[k] * Math.Cos(KOM);

				}
				F_GRF.Yg[i] = a[0] + S;
			}
			return; // Завершення тіла функції Furje
		}

		void Garm(int Ng, double[] c)
		{
			int i, KrokXG, x;
			double MaxC, KyC, w;
			Graphics g = pictureBox1.CreateGraphics();
			Pen pen1 = new Pen(Color.Black, (float)(numericUpDown1.Value));
			Pen pen2 = new Pen(Color.Blue, (float)(numericUpDown2.Value));
			Pen pen3 = new Pen(Color.Silver, (float)(numericUpDown3.Value));
			Pen pen4 = new Pen(Color.Green, (float)(numericUpDown4.Value));
			int pb_Height = pictureBox1.Height;
			int pb_Width = pictureBox1.Width;
			KrokXG = (pb_Width - 2 * F_GRF.L) / Ng;
			MaxC = c[1];
			for (i = 2; i <= Ng; i++)
				if (c[i] > MaxC) MaxC = c[i];
			KyC = (pb_Height / 2) / MaxC;
			g.DrawLine(pen2, F_GRF.L, F_GRF.L + 20, F_GRF.L + 10, F_GRF.L + 10);
			g.DrawLine(pen2, F_GRF.L + 20, F_GRF.L + 20, F_GRF.L + 10, F_GRF.L + 10);
			g.DrawLine(pen2, F_GRF.L + 10, pb_Height - 50, pb_Width - 20, pb_Height - 50);
			g.DrawLine(pen2, F_GRF.L + 10, pb_Height - 50, F_GRF.L + 10, F_GRF.L + 10);
			g.DrawLine(pen2, pb_Width - 40, pb_Height - 60, pb_Width - 20, pb_Height - 50);
			g.DrawString("C", new Font("Times", 14),
				Brushes.Black, (float)F_GRF.L - 15, (float)F_GRF.L + 5);
			g.DrawString("W", new Font("Times", 14), Brushes.Black, (float)pb_Width - 60.0f,
				(float)pb_Height - 50.0f);
			x = KrokXG + 20;
			w = 6.2831853 / (F_GRF.b1 - F_GRF.a1);
			for (i = 1; i <= Ng; i++)
			{
				g.DrawLine(pen1, (int)x + 3, pb_Height - 50, x + 3, pb_Height - 50 - (int)(KyC * c[i]));
				String m = String.Format("{0:F3}", KyC * c[i]);
				g.DrawString(m, new Font("Times", 12), Brushes.Black, (float)x,
					(float)pb_Height - (float)(KyC * c[i]) - 70.0f);
				g.DrawEllipse(pen2, (int)x, pb_Height - (int)(KyC * c[i]) - 55, 5, 5);
				g.DrawString(Convert.ToString(i), new Font("Times", 12), Brushes.Black,
					(float)x - 5.0f, (float)pb_Height - 50.0f);
				x = x + KrokXG;
			}
			x = KrokXG + 19;
			String s = String.Format("W={0:F3}", w);
			g.DrawString(s, new Font("Times", 12), Brushes.Black, (float)x - 20.0f,
				(float)pb_Height - 35.0f);
			return;
		}

		private void button2_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void button3_Click(object sender, EventArgs e)
        {
			int i;
			Pen pen1 = new Pen(Color.Red, (float)(numericUpDown1.Value));
			Pen pen2 = new Pen(Color.Blue, (float)(numericUpDown2.Value));
			Pen pen3 = new Pen(Color.Silver, (float)(numericUpDown3.Value));
			Pen pen4 = new Pen(Color.Green, (float)(numericUpDown4.Value));
			Graphics g = pictureBox1.CreateGraphics();
			g.Clear(Color.White);
			int pb_Height = pictureBox1.Height;
			int pb_Width = pictureBox1.Width;
			F_GRF.L = 40;
			F_GRF.Ne = Convert.ToInt32(textBox4.Text);
			F_GRF.a1 = Convert.ToDouble(textBox1.Text);
			F_GRF.b1 = Convert.ToDouble(textBox2.Text);
			F_GRF.Ngr = F_GRF.Ne;
			TabF(F_GRF.Xe, F_GRF.Ye);
			Furje(F_GRF.Xe, F_GRF.Ye, F_GRF.Ne, F_GRF.Yg, F_GRF.c, F_GRF.Tp);
			F_GRF.minYg = F_GRF.Yg[0];
			F_GRF.maxYg = F_GRF.Yg[0];
			for (i = 1; i <= F_GRF.Ngr - 1; i++)
			{
				if (F_GRF.maxYg < F_GRF.Yg[i]) F_GRF.maxYg = F_GRF.Yg[i];
				if (F_GRF.minYg > F_GRF.Yg[i]) F_GRF.minYg = F_GRF.Yg[i];
			}
			F_GRF.minx = F_GRF.Xe[0];
			F_GRF.maxx = F_GRF.Xe[F_GRF.Ne - 1];
			F_GRF.miny = F_GRF.Ye[0];
			F_GRF.maxy = F_GRF.Ye[0];
			for (i = 1; i <= F_GRF.Ne - 1; i++)
			{
				if (F_GRF.maxy < F_GRF.Ye[i]) F_GRF.maxy = F_GRF.Ye[i];
				if (F_GRF.miny > F_GRF.Ye[i]) F_GRF.miny = F_GRF.Ye[i];
			}
			if (F_GRF.maxy < F_GRF.maxYg) F_GRF.maxy = F_GRF.maxYg;
			if (F_GRF.miny > F_GRF.minYg) F_GRF.miny = F_GRF.minYg;
			F_GRF.Kx = (pb_Width - 2 * F_GRF.L) / (F_GRF.maxx - F_GRF.minx);
			F_GRF.Ky = (pb_Height - 2 * F_GRF.L) / (F_GRF.miny - F_GRF.maxy);
			F_GRF.Zx = (pb_Width * F_GRF.minx - F_GRF.L * (F_GRF.maxx + F_GRF.minx)) / (F_GRF.minx - F_GRF.maxx);
			F_GRF.Zy = (pb_Height * F_GRF.maxy - F_GRF.L * (F_GRF.miny + F_GRF.maxy)) / (F_GRF.maxy - F_GRF.miny);

			string path = @"C:\Users\User\Desktop\ФЕІ - 15\АтаП осінь2021\Виконане\14\WindowsFormsApp1\WindowsFormsApp1\Grf_file.dat";
			BinaryWriter writer = new BinaryWriter(File.Open(path, FileMode.OpenOrCreate));
			/*std::ofstream binout("Grf_file.dat", std::ios::binary);
			binout.write((char*)&F_GRF, sizeof(Zapys));
			binout.close();*/
			MessageBox.Show("Дані записано у файл");
		}
    }
}
