#pragma once
#include <iostream>
#include <fstream>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	struct Zapys
	{
		double Xe[1000];
		double Ye[1000];
		double Yg[1000];
		double c[50];
		double Kx, Ky, Zx, Zy;
		double a1, b1, Tp;
		int Ne, Ngr, Ng;
		double minYg, maxYg, maxx, maxy, minx, miny;
		double krx, kry, xx, yy, Gx, Gy;
		int KrokX, KrokY, L;
	};
	Zapys F_GRF;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(13, 13);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1074, 413);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->numericUpDown4);
			this->groupBox1->Controls->Add(this->numericUpDown3);
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(13, 434);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(1074, 218);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметри графіків";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(800, 18);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(159, 53);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Записати у файл";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(800, 157);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(159, 53);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Вихід";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(800, 89);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 53);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Побудувати графіки";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(588, 186);
			this->numericUpDown4->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(41, 22);
			this->numericUpDown4->TabIndex = 18;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(588, 142);
			this->numericUpDown3->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(41, 22);
			this->numericUpDown3->TabIndex = 17;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(588, 96);
			this->numericUpDown2->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(41, 22);
			this->numericUpDown2->TabIndex = 16;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(588, 52);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(41, 22);
			this->numericUpDown1->TabIndex = 15;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(60, 171);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(43, 22);
			this->textBox4->TabIndex = 14;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(209, 92);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(32, 22);
			this->textBox3->TabIndex = 13;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(155, 54);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(25, 22);
			this->textBox2->TabIndex = 12;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(52, 54);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(25, 22);
			this->textBox1->TabIndex = 11;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label11->Location = System::Drawing::Point(403, 20);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(246, 17);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Оберіть, при потребі, інші значення";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(16, 175);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(34, 17);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Ne=";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(16, 96);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(177, 17);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Введіть к-ть гармонік Ng=";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(372, 186);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(208, 17);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Товщ. лінії графіка суми ряду=";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(447, 144);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(136, 17);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Товщ. ліній гратки=";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(419, 99);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(164, 17);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Товщ. осей координат=";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(411, 54);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(172, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Товщ. лінії графіка ф-ції=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 140);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(294, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Введіть кількість експериментальних точок";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(119, 57);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"bl=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 57);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"al=";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label1->Location = System::Drawing::Point(16, 20);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(200, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введіть межі зміни аргументу";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1100, 665);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L" Розкладення періодичної  функції в ряд Фур\'є";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion

		double f(double x)
		{
			F_GRF.Tp = F_GRF.b1 - F_GRF.a1;
			if (x < F_GRF.Tp / 2.0)return 2.0;
			else {
				if ((x >= F_GRF.Tp / 2.0) && (x < 3.0 * F_GRF.Tp / 4.0))
					return 4.0 * (F_GRF.Tp - 2.0 * x) / F_GRF.Tp;
				else return 8.0 * (x - F_GRF.Tp) / F_GRF.Tp;
			}
		}
		void TabF(double Xe[1000], double Ye[1000])
		{
			double h;
			int i;
			h = (F_GRF.b1 - F_GRF.a1) / F_GRF.Ne;
			Xe[0] = F_GRF.a1;
			for (i = 0; i <= F_GRF.Ne - 1; i++) {
				F_GRF.Ye[i] = f(F_GRF.Xe[i]);
				F_GRF.Xe[i + 1] = F_GRF.Xe[i] + h;
			}
		}
		void Furje(double  Xe[1000], double Ye[1000], int Ne, double Yg[1000], double c[50], double TP)
		{
			double a[50]; // Масив a із коефіцієнтами ряду Фур’є
			double b[50]; // Масив b із коефіцієнтами ряду Фур’є
			double w, KOM, S, G, D;
			int i, k;
			F_GRF.Ng = Convert::ToInt32(textBox3->Text); // Вводимо кількість гармонік
			F_GRF.a1 = Convert::ToDouble(textBox1->Text);
			F_GRF.b1 = Convert::ToDouble(textBox2->Text);
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
					G = G + F_GRF.Ye[i] * Math::Cos(S);
					D = D + F_GRF.Ye[i] * Math::Sin(S);
				}
				a[k] = 2 * G / F_GRF.Ne;
				b[k] = 2 * D / F_GRF.Ne;
				c[k] = Math::Sqrt(a[k] * a[k] + b[k] * b[k]);
			}
			a[0] = 0.0;
			for (i = 1; i <= F_GRF.Ne; i++)
				a[0] = a[0] + F_GRF.Ye[i];
			a[0] = a[0] / Ne;//
			for (i = 0; i <= F_GRF.Ne - 1; i++) {
				S = 0;
				D = F_GRF.Xe[i] * w;
				for (k = 1; k <= F_GRF.Ng; k++) {
					KOM = k * D;
					S = S + b[k] * Math::Sin(KOM) + a[k] * Math::Cos(KOM);

				}
				F_GRF.Yg[i] = a[0] + S;
			}
			return; // Завершення тіла функції Furje
		}
		void Garm(int Ng, double c[50])
		{
			int i, KrokXG, x;
			double MaxC, KyC, w;
			Graphics^ g = pictureBox1->CreateGraphics();
			Pen^ pen1 = gcnew Pen(Color::Black, (float)(numericUpDown1->Value));
			Pen^ pen2 = gcnew Pen(Color::Blue, (float)(numericUpDown2->Value));
			Pen^ pen3 = gcnew Pen(Color::Silver, (float)(numericUpDown3->Value));
			Pen^ pen4 = gcnew Pen(Color::Green, (float)(numericUpDown4->Value));
			int pb_Height = pictureBox1->Height;
			int pb_Width = pictureBox1->Width;
			KrokXG = (pb_Width - 2 * F_GRF.L) / Ng;
			MaxC = c[1];
			for (i = 2; i <= Ng; i++)
				if (c[i] > MaxC) MaxC = c[i];
			KyC = (pb_Height / 2) / MaxC;
			g->DrawLine(pen2, F_GRF.L, F_GRF.L + 20, F_GRF.L + 10, F_GRF.L + 10);
			g->DrawLine(pen2, F_GRF.L + 20, F_GRF.L + 20, F_GRF.L + 10, F_GRF.L + 10);
			g->DrawLine(pen2, F_GRF.L + 10, pb_Height - 50, pb_Width - 20, pb_Height - 50);
			g->DrawLine(pen2, F_GRF.L + 10, pb_Height - 50, F_GRF.L + 10, F_GRF.L + 10);
			g->DrawLine(pen2, pb_Width - 40, pb_Height - 60, pb_Width - 20, pb_Height - 50);
			g->DrawString("C", gcnew Drawing::Font("Times", 14),
				Brushes::Black, (float)F_GRF.L - 15, (float)F_GRF.L + 5);
			g->DrawString("W", gcnew Drawing::Font("Times", 14), Brushes::Black, (float)pb_Width - 60.0f,
				(float)pb_Height - 50.0f);
			x = KrokXG + 20;
			w = 6.2831853 / (F_GRF.b1 - F_GRF.a1);
			for (i = 1; i <= Ng; i++)
			{
				g->DrawLine(pen1, (int)x + 3, pb_Height - 50, x + 3, pb_Height - 50 - (int)(KyC * c[i]));
				String^ s = String::Format("{0:F3}", KyC * c[i]);
				g->DrawString(s, gcnew  Drawing::Font("Times", 12), Brushes::Black, (float)x,
					(float)pb_Height - (float)(KyC * c[i]) - 70.0f);
				g->DrawEllipse(pen2, (int)x, pb_Height - (int)(KyC * c[i]) - 55, 5, 5);
				g->DrawString(Convert::ToString(i), gcnew Drawing::Font("Times", 12), Brushes::Black,
					(float)x - 5.0f, (float)pb_Height - 50.0f);
				x = x + KrokXG;
			}
			x = KrokXG + 19;
			String^ s = String::Format("W={0:F3}", w);
			g->DrawString(s, gcnew Drawing::Font("Times", 12), Brushes::Black, (float)x - 20.0f,
				(float)pb_Height - 35.0f);
			return;
		}



	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int i;
		Pen^ pen1 = gcnew Pen(Color::Red, (float)(numericUpDown1->Value));
		Pen^ pen2 = gcnew Pen(Color::Blue, (float)(numericUpDown2->Value));
		Pen^ pen3 = gcnew Pen(Color::Silver, (float)(numericUpDown3->Value));
		Pen^ pen4 = gcnew Pen(Color::Green, (float)(numericUpDown4->Value));
		Graphics^ g = pictureBox1->CreateGraphics();
		g->Clear(Color::White);
		int pb_Height = pictureBox1->Height;
		int pb_Width = pictureBox1->Width;
		F_GRF.L = 40;
		F_GRF.Ne = Convert::ToInt32(textBox4->Text);
		F_GRF.a1 = Convert::ToDouble(textBox1->Text);
		F_GRF.b1 = Convert::ToDouble(textBox2->Text);
		F_GRF.Ngr = F_GRF.Ne;
		TabF(F_GRF.Xe, F_GRF.Ye);
		Furje(F_GRF.Xe, F_GRF.Ye, F_GRF.Ne, F_GRF.Yg, F_GRF.c, F_GRF.Tp);
		F_GRF.minYg = F_GRF.Yg[0];
		F_GRF.maxYg = F_GRF.Yg[0];
		for (i = 1; i <= F_GRF.Ngr - 1; i++) {
			if (F_GRF.maxYg < F_GRF.Yg[i])F_GRF.maxYg = F_GRF.Yg[i];
			if (F_GRF.minYg > F_GRF.Yg[i])F_GRF.minYg = F_GRF.Yg[i];
		}
		F_GRF.minx = F_GRF.Xe[0];
		F_GRF.maxx = F_GRF.Xe[F_GRF.Ne - 1];
		F_GRF.miny = F_GRF.Ye[0];
		F_GRF.maxy = F_GRF.Ye[0];
		for (i = 1; i <= F_GRF.Ne - 1; i++) {
			if (F_GRF.maxy < F_GRF.Ye[i])F_GRF.maxy = F_GRF.Ye[i];
			if (F_GRF.miny > F_GRF.Ye[i])F_GRF.miny = F_GRF.Ye[i];
		}
		if (F_GRF.maxy < F_GRF.maxYg)F_GRF.maxy = F_GRF.maxYg;
		if (F_GRF.miny > F_GRF.minYg)F_GRF.miny = F_GRF.minYg;
		F_GRF.Kx = (pb_Width - 2 * F_GRF.L) / (F_GRF.maxx - F_GRF.minx);
		F_GRF.Ky = (pb_Height - 2 * F_GRF.L) / (F_GRF.miny - F_GRF.maxy);
		F_GRF.Zx = (pb_Width * F_GRF.minx - F_GRF.L * (F_GRF.maxx + F_GRF.minx)) / (F_GRF.minx - F_GRF.maxx);
		F_GRF.Zy = (pb_Height * F_GRF.maxy - F_GRF.L * (F_GRF.miny + F_GRF.maxy)) / (F_GRF.maxy - F_GRF.miny);

		std::ofstream binout("Grf_file.dat", std::ios::binary);
		binout.write((char*)&F_GRF, sizeof(Zapys));
		binout.close();
		MessageBox::Show("Дані записано у файл");
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int i;
		Pen^ pen1 = gcnew Pen(Color::Red, (float)(numericUpDown1->Value));
		Pen^ pen2 = gcnew Pen(Color::Blue, (float)(numericUpDown2->Value));
		Pen^ pen3 = gcnew Pen(Color::Silver, (float)(numericUpDown3->Value));
		Pen^ pen4 = gcnew Pen(Color::Green, (float)(numericUpDown4->Value));
		Graphics^ g = pictureBox1->CreateGraphics();
		g->Clear(Color::White);
		int pb_Height = pictureBox1->Height;
		int pb_Width = pictureBox1->Width;
		std::ifstream bincin("Grf_file.dat", std::ios::binary);
		bincin.read((char*)&F_GRF, sizeof(Zapys));
		bincin.close();
		if (F_GRF.minx * F_GRF.maxx <= 0.0)F_GRF.Gx = 0.0;
		if (F_GRF.minx * F_GRF.maxx > 0.0)F_GRF.Gx = F_GRF.minx;
		if (F_GRF.minx * F_GRF.maxx > 0.0 && F_GRF.minx < 0.0)F_GRF.Gx = F_GRF.maxx;
		if (F_GRF.miny * F_GRF.maxy <= 0.0)F_GRF.Gy = 0.0;
		if (F_GRF.miny * F_GRF.maxy > 0.0 && F_GRF.miny > 0.0)F_GRF.Gy = F_GRF.miny;
		if (F_GRF.miny * F_GRF.maxy > 0.0 && F_GRF.miny < 0.0)F_GRF.Gy = F_GRF.maxy;
		F_GRF.KrokX = (pb_Width - 2 * F_GRF.L) / 10;
		F_GRF.KrokY = (pb_Height - 2 * F_GRF.L) / 10;
		for (i = 1; i <= 7; i++) {
			g->DrawLine(pen3, F_GRF.L, Math::Round(F_GRF.Ky * F_GRF.Gy + F_GRF.Zy, 4) + i * F_GRF.KrokY, pb_Width - F_GRF.L,
				Math::Round(F_GRF.Ky * F_GRF.Gy + F_GRF.Zy, 4) + i * F_GRF.KrokY);
			g->DrawLine(pen3, F_GRF.L, Math::Round(F_GRF.Ky * F_GRF.Gy + F_GRF.Zy, 4) - i * F_GRF.KrokY, pb_Width - F_GRF.L,
				Math::Round(F_GRF.Ky * F_GRF.Gy + F_GRF.Zy, 4) - i * F_GRF.KrokY);
		}
		for (i = 1; i <= 10; i++) {
			g->DrawLine(pen3, Math::Round(F_GRF.Kx * F_GRF.Gx + F_GRF.Zx, 4) + i * F_GRF.KrokX, F_GRF.L - 15,
				Math::Round(F_GRF.Kx * F_GRF.Gx + F_GRF.Zx, 4) + i * F_GRF.KrokX, pb_Height - F_GRF.L + 6);
			g->DrawLine(pen3, Math::Round(F_GRF.Kx * F_GRF.Gx + F_GRF.Zx, 4) - i * F_GRF.KrokX, F_GRF.L,
				Math::Round(F_GRF.Kx * F_GRF.Gx + F_GRF.Zx, 4) - i * F_GRF.KrokX, pb_Height - F_GRF.L);

		}
		F_GRF.xx = F_GRF.minx;
		F_GRF.yy = F_GRF.maxy;
		F_GRF.krx = (F_GRF.maxx - F_GRF.minx) / 10.0;
		F_GRF.kry = (F_GRF.maxy - F_GRF.miny) / 11.0;
		for (i = 0; i < 12; i++) {
			g->DrawString(Convert::ToString(Math::Round(F_GRF.xx, 1)), gcnew Drawing::Font("Times", 8),
				Brushes::Black, F_GRF.L + 4 + i * F_GRF.KrokX,
				Math::Round(F_GRF.Ky * F_GRF.Gy + F_GRF.Zy, 4) - F_GRF.L + 43.0f);
			g->DrawString(Convert::ToString(Math::Round(F_GRF.yy, 1)), gcnew Drawing::Font("Times", 8),
				Brushes::Black, Math::Round(F_GRF.Kx * F_GRF.Gx + F_GRF.Zx, 4) - F_GRF.L + 10.0f,
				(float)(F_GRF.L + i * F_GRF.KrokY) - 5.0f);
			F_GRF.xx = F_GRF.xx + F_GRF.krx;
			F_GRF.yy = F_GRF.yy - F_GRF.kry;


		}
		g->DrawLine(pen2, F_GRF.L, Math::Round(F_GRF.Ky * F_GRF.Gy + F_GRF.Zy, 4), Math::Round(pb_Width - 10, 4),
			Math::Round(F_GRF.Ky * F_GRF.Gy + F_GRF.Zy, 4));
		g->DrawLine(pen2, Math::Round(F_GRF.Kx * F_GRF.Gx + F_GRF.Zx, 4), 10, Math::Round(F_GRF.Kx * F_GRF.Gx + F_GRF.Zx, 4),
			Math::Round(pb_Height - 10, 4));
		for (i = 1; i <= F_GRF.Ne - 1; i++) {
			g->DrawLine(pen4, Math::Round(F_GRF.Kx * (F_GRF.Xe[i - 1]) + F_GRF.Zx, 4), Math::Round(F_GRF.Ky * (F_GRF.Yg[i - 1]) + F_GRF.Zy, 4),
				Math::Round(F_GRF.Kx * (F_GRF.Xe[i]) + F_GRF.Zx, 4), Convert::ToInt32(Math::Round(F_GRF.Ky * (F_GRF.Yg[i]) + F_GRF.Zy, 4)));
			g->DrawLine(pen1, Math::Round(F_GRF.Kx * F_GRF.Xe[i - 1] + F_GRF.Zx, 4), Math::Round(F_GRF.Ky * F_GRF.Ye[i - 1] + F_GRF.Zy, 4),
				Math::Round(F_GRF.Kx * F_GRF.Xe[i] + F_GRF.Zx, 4), Convert::ToInt32(Math::Round(F_GRF.Ky * F_GRF.Ye[i] + F_GRF.Zy, 4)));
		}
		MessageBox::Show("Показати гармоніки");
		g->Clear(Color::White);
		Garm(F_GRF.Ng, F_GRF.c);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	};
}
