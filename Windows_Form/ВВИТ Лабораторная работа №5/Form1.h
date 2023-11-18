#pragma once
namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lblBaseline;




	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ lblAccuracy;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ lblNumberOfValues;
	private: System::Windows::Forms::Label^ lblSeriesSum;



	private: System::Windows::Forms::Label^ lblAccuracyValue;


	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ btnClose;

	private: System::Windows::Forms::Button^ Result_exp;
	private: System::Windows::Forms::TextBox^ txtInput_exp;

	private: System::Windows::Forms::RadioButton^ rbtTen;
	private: System::Windows::Forms::RadioButton^ rbtHundred;
	private: System::Windows::Forms::RadioButton^ rbtThousand;
	private: System::Windows::Forms::RadioButton^ rbtTenThousand;
	private: System::Windows::Forms::RadioButton^ rbtHoudredThousand;
	private: System::Windows::Forms::RadioButton^ rbtMillion;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;



	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblBaseline = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lblAccuracy = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->lblNumberOfValues = (gcnew System::Windows::Forms::Label());
			this->lblSeriesSum = (gcnew System::Windows::Forms::Label());
			this->lblAccuracyValue = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->Result_exp = (gcnew System::Windows::Forms::Button());
			this->txtInput_exp = (gcnew System::Windows::Forms::TextBox());
			this->rbtTen = (gcnew System::Windows::Forms::RadioButton());
			this->rbtHundred = (gcnew System::Windows::Forms::RadioButton());
			this->rbtThousand = (gcnew System::Windows::Forms::RadioButton());
			this->rbtTenThousand = (gcnew System::Windows::Forms::RadioButton());
			this->rbtHoudredThousand = (gcnew System::Windows::Forms::RadioButton());
			this->rbtMillion = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(100, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(213, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"exp(x) = 1 + x/1! + x^2/2! + x^3/3! + ...";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"x = ";
			// 
			// lblBaseline
			// 
			this->lblBaseline->AutoSize = true;
			this->lblBaseline->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblBaseline->Location = System::Drawing::Point(229, 251);
			this->lblBaseline->Name = L"lblBaseline";
			this->lblBaseline->Size = System::Drawing::Size(15, 16);
			this->lblBaseline->TabIndex = 2;
			this->lblBaseline->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(28, 251);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Исходное значение  =";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(28, 280);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Точность = ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(28, 307);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(176, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Точное значение exp(x) = ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(28, 335);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(133, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Число слагаемых = ";
			// 
			// lblAccuracy
			// 
			this->lblAccuracy->AutoSize = true;
			this->lblAccuracy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblAccuracy->Location = System::Drawing::Point(229, 280);
			this->lblAccuracy->Name = L"lblAccuracy";
			this->lblAccuracy->Size = System::Drawing::Size(25, 16);
			this->lblAccuracy->TabIndex = 7;
			this->lblAccuracy->Text = L"0.1";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(28, 364);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(137, 16);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Сумма ряда exp(x) = ";
			// 
			// lblNumberOfValues
			// 
			this->lblNumberOfValues->AutoSize = true;
			this->lblNumberOfValues->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->lblNumberOfValues->Location = System::Drawing::Point(229, 335);
			this->lblNumberOfValues->Name = L"lblNumberOfValues";
			this->lblNumberOfValues->Size = System::Drawing::Size(0, 16);
			this->lblNumberOfValues->TabIndex = 9;
			// 
			// lblSeriesSum
			// 
			this->lblSeriesSum->AutoSize = true;
			this->lblSeriesSum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblSeriesSum->Location = System::Drawing::Point(229, 364);
			this->lblSeriesSum->Name = L"lblSeriesSum";
			this->lblSeriesSum->Size = System::Drawing::Size(0, 16);
			this->lblSeriesSum->TabIndex = 10;
			// 
			// lblAccuracyValue
			// 
			this->lblAccuracyValue->AutoSize = true;
			this->lblAccuracyValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->lblAccuracyValue->Location = System::Drawing::Point(229, 307);
			this->lblAccuracyValue->Name = L"lblAccuracyValue";
			this->lblAccuracyValue->Size = System::Drawing::Size(0, 16);
			this->lblAccuracyValue->TabIndex = 11;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(99, 220);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(184, 20);
			this->label13->TabIndex = 12;
			this->label13->Text = L"Результаты расчёта";
			// 
			// btnClose
			// 
			this->btnClose->Location = System::Drawing::Point(283, 405);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(75, 23);
			this->btnClose->TabIndex = 13;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &Form1::btnClose_Click);
			// 
			// Result_exp
			// 
			this->Result_exp->Location = System::Drawing::Point(12, 194);
			this->Result_exp->Name = L"Result_exp";
			this->Result_exp->Size = System::Drawing::Size(357, 23);
			this->Result_exp->TabIndex = 14;
			this->Result_exp->Text = L"Расчёт exp(x) ";
			this->Result_exp->UseVisualStyleBackColor = true;
			this->Result_exp->Click += gcnew System::EventHandler(this, &Form1::Result_exp_Click);
			// 
			// txtInput_exp
			// 
			this->txtInput_exp->Location = System::Drawing::Point(38, 21);
			this->txtInput_exp->Name = L"txtInput_exp";
			this->txtInput_exp->Size = System::Drawing::Size(308, 20);
			this->txtInput_exp->TabIndex = 15;
			this->txtInput_exp->Text = L"1";
			this->txtInput_exp->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// rbtTen
			// 
			this->rbtTen->AutoSize = true;
			this->rbtTen->Checked = true;
			this->rbtTen->Location = System::Drawing::Point(15, 19);
			this->rbtTen->Name = L"rbtTen";
			this->rbtTen->Size = System::Drawing::Size(40, 17);
			this->rbtTen->TabIndex = 16;
			this->rbtTen->TabStop = true;
			this->rbtTen->Text = L"0.1";
			this->rbtTen->UseVisualStyleBackColor = true;
			this->rbtTen->CheckedChanged += gcnew System::EventHandler(this, &Form1::rbtTen_CheckedChanged);
			// 
			// rbtHundred
			// 
			this->rbtHundred->AutoSize = true;
			this->rbtHundred->Location = System::Drawing::Point(15, 46);
			this->rbtHundred->Name = L"rbtHundred";
			this->rbtHundred->Size = System::Drawing::Size(46, 17);
			this->rbtHundred->TabIndex = 17;
			this->rbtHundred->Text = L"0.01";
			this->rbtHundred->UseVisualStyleBackColor = true;
			this->rbtHundred->Click += gcnew System::EventHandler(this, &Form1::rbtHundred_Click);
			// 
			// rbtThousand
			// 
			this->rbtThousand->AutoSize = true;
			this->rbtThousand->Location = System::Drawing::Point(121, 19);
			this->rbtThousand->Name = L"rbtThousand";
			this->rbtThousand->Size = System::Drawing::Size(52, 17);
			this->rbtThousand->TabIndex = 18;
			this->rbtThousand->Text = L"0.001";
			this->rbtThousand->UseVisualStyleBackColor = true;
			this->rbtThousand->Click += gcnew System::EventHandler(this, &Form1::rbtThousand_Click);
			// 
			// rbtTenThousand
			// 
			this->rbtTenThousand->AutoSize = true;
			this->rbtTenThousand->Location = System::Drawing::Point(121, 46);
			this->rbtTenThousand->Name = L"rbtTenThousand";
			this->rbtTenThousand->Size = System::Drawing::Size(58, 17);
			this->rbtTenThousand->TabIndex = 19;
			this->rbtTenThousand->Text = L"0.0001";
			this->rbtTenThousand->UseVisualStyleBackColor = true;
			this->rbtTenThousand->Click += gcnew System::EventHandler(this, &Form1::rbtTenThousand_Click);
			// 
			// rbtHoudredThousand
			// 
			this->rbtHoudredThousand->AutoSize = true;
			this->rbtHoudredThousand->Location = System::Drawing::Point(213, 19);
			this->rbtHoudredThousand->Name = L"rbtHoudredThousand";
			this->rbtHoudredThousand->Size = System::Drawing::Size(64, 17);
			this->rbtHoudredThousand->TabIndex = 20;
			this->rbtHoudredThousand->Text = L"0.00001";
			this->rbtHoudredThousand->UseVisualStyleBackColor = true;
			this->rbtHoudredThousand->Click += gcnew System::EventHandler(this, &Form1::rbtHoudredThousand_Click);
			// 
			// rbtMillion
			// 
			this->rbtMillion->AutoSize = true;
			this->rbtMillion->Location = System::Drawing::Point(213, 46);
			this->rbtMillion->Name = L"rbtMillion";
			this->rbtMillion->Size = System::Drawing::Size(70, 17);
			this->rbtMillion->TabIndex = 21;
			this->rbtMillion->Text = L"0.000001";
			this->rbtMillion->UseVisualStyleBackColor = true;
			this->rbtMillion->Click += gcnew System::EventHandler(this, &Form1::rbtMillion_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rbtTen);
			this->groupBox1->Controls->Add(this->rbtHoudredThousand);
			this->groupBox1->Controls->Add(this->rbtMillion);
			this->groupBox1->Controls->Add(this->rbtHundred);
			this->groupBox1->Controls->Add(this->rbtThousand);
			this->groupBox1->Controls->Add(this->rbtTenThousand);
			this->groupBox1->Location = System::Drawing::Point(40, 119);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(294, 69);
			this->groupBox1->TabIndex = 22;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Выбор точности ";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->txtInput_exp);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Location = System::Drawing::Point(12, 63);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(357, 50);
			this->groupBox2->TabIndex = 23;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Ввод значения X (-13 <= X <= 20)";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 441);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Result_exp);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->lblAccuracyValue);
			this->Controls->Add(this->lblSeriesSum);
			this->Controls->Add(this->lblNumberOfValues);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->lblAccuracy);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lblBaseline);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Расчёт exp(x)";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void rbtHundred_Click(System::Object^ sender, System::EventArgs^ e) {
		lblAccuracy->Text = L"0.01";
	}
	private: System::Void rbtThousand_Click(System::Object^ sender, System::EventArgs^ e) {
	lblAccuracy->Text = L"0.001";
	}
	private: System::Void rbtTenThousand_Click(System::Object^ sender, System::EventArgs^ e) {
	lblAccuracy->Text = L"0.0001";
	}
	private: System::Void rbtHoudredThousand_Click(System::Object^ sender, System::EventArgs^ e) {
	lblAccuracy->Text = L"0.00001";
	}
	private: System::Void rbtMillion_Click(System::Object^ sender, System::EventArgs^ e) {
	lblAccuracy->Text = L"0.000001";
	}
	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	public: System::Void Result_exp_Click(System::Object^ sender, System::EventArgs^ e) {
		double result = 1, a = 1, accuracy_resalt, x, eps;
		x = Convert::ToDouble(txtInput_exp->Text);
		for (int n = 1; a > eps; n++)
		{
			a *= x / n;
			result += a;
		}

		if (rbtTen->Checked == true) 
			result = Math::Round(result*10)/10;
		if (rbtHundred->Checked == true)
			result = Math::Round(result*100)/100;
		if (rbtThousand->Checked == true)
			result = Math::Round(result*1000)/1000;
		if (rbtTenThousand->Checked == true)
			result = Math::Round(result*10000)/10000;
		if (rbtHoudredThousand->Checked == true)
			result = Math::Round(result*100000)/100000;
		if (rbtMillion->Checked == true)
			result = Math::Round(result*1000000)/1000000;

		lblSeriesSum->Text = Convert::ToString(result);
		lblBaseline->Text = txtInput_exp->Text;
		lblNumberOfValues->Text = L"30";
		accuracy_resalt = Math::Exp(x);
		lblAccuracyValue->Text = Convert::ToString(accuracy_resalt);
	}
	private: System::Void rbtTen_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		lblAccuracy->Text = rbtTen->Text;
		rbtHundred;
		rbtTenThousand;
		rbtThousand;
		rbtHoudredThousand;
		rbtMillion;
	}
};
}
