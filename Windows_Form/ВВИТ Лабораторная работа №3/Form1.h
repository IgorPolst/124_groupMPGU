#pragma once
#include <math.h>

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
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Button^ btnResult;
	private: System::Windows::Forms::TextBox^ txtA;
	private: System::Windows::Forms::TextBox^ txtX1;


	private: System::Windows::Forms::TextBox^ txtC;

	private: System::Windows::Forms::TextBox^ txtB;
	private: System::Windows::Forms::TextBox^ txtX2;
	private: System::Windows::Forms::Label^ lblEasteregg;





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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnResult = (gcnew System::Windows::Forms::Button());
			this->txtA = (gcnew System::Windows::Forms::TextBox());
			this->txtX1 = (gcnew System::Windows::Forms::TextBox());
			this->txtC = (gcnew System::Windows::Forms::TextBox());
			this->txtB = (gcnew System::Windows::Forms::TextBox());
			this->txtX2 = (gcnew System::Windows::Forms::TextBox());
			this->lblEasteregg = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(28, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(194, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Коэфициенты уравнения";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(314, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Корни уравнения ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(28, 165);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"b = ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(28, 130);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"a = ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(28, 200);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"c = ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(245, 130);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"x1 = ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(409, 130);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(39, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"x2 = ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(245, 182);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 13);
			this->label8->TabIndex = 7;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(30, 280);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(90, 40);
			this->btnAdd->TabIndex = 8;
			this->btnAdd->Text = L"Сбросить";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &Form1::btnAdd_Click);
			// 
			// btnClose
			// 
			this->btnClose->Location = System::Drawing::Point(477, 279);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(90, 40);
			this->btnClose->TabIndex = 9;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &Form1::btnClose_Click);
			// 
			// btnResult
			// 
			this->btnResult->Location = System::Drawing::Point(261, 280);
			this->btnResult->Name = L"btnResult";
			this->btnResult->Size = System::Drawing::Size(90, 40);
			this->btnResult->TabIndex = 10;
			this->btnResult->Text = L"Решить";
			this->btnResult->UseVisualStyleBackColor = true;
			this->btnResult->Click += gcnew System::EventHandler(this, &Form1::btnResult_Click);
			// 
			// txtA
			// 
			this->txtA->Location = System::Drawing::Point(68, 130);
			this->txtA->Name = L"txtA";
			this->txtA->Size = System::Drawing::Size(100, 20);
			this->txtA->TabIndex = 11;
			this->txtA->Click += gcnew System::EventHandler(this, &Form1::txtA_Click);
			// 
			// txtX1
			// 
			this->txtX1->Location = System::Drawing::Point(290, 130);
			this->txtX1->Name = L"txtX1";
			this->txtX1->Size = System::Drawing::Size(100, 20);
			this->txtX1->TabIndex = 12;
			// 
			// txtC
			// 
			this->txtC->Location = System::Drawing::Point(68, 199);
			this->txtC->Name = L"txtC";
			this->txtC->Size = System::Drawing::Size(100, 20);
			this->txtC->TabIndex = 13;
			this->txtC->Click += gcnew System::EventHandler(this, &Form1::txtC_Click);
			// 
			// txtB
			// 
			this->txtB->Location = System::Drawing::Point(68, 165);
			this->txtB->Name = L"txtB";
			this->txtB->Size = System::Drawing::Size(100, 20);
			this->txtB->TabIndex = 14;
			this->txtB->Click += gcnew System::EventHandler(this, &Form1::txtB_Click);
			// 
			// txtX2
			// 
			this->txtX2->Location = System::Drawing::Point(454, 130);
			this->txtX2->Name = L"txtX2";
			this->txtX2->Size = System::Drawing::Size(100, 20);
			this->txtX2->TabIndex = 15;
			// 
			// lblEasteregg
			// 
			this->lblEasteregg->AutoSize = true;
			this->lblEasteregg->Location = System::Drawing::Point(258, 25);
			this->lblEasteregg->Name = L"lblEasteregg";
			this->lblEasteregg->Size = System::Drawing::Size(0, 13);
			this->lblEasteregg->TabIndex = 16;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(598, 344);
			this->Controls->Add(this->lblEasteregg);
			this->Controls->Add(this->txtX2);
			this->Controls->Add(this->txtB);
			this->Controls->Add(this->txtC);
			this->Controls->Add(this->txtX1);
			this->Controls->Add(this->txtA);
			this->Controls->Add(this->btnResult);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:Void Clean() {
		this->txtA->Text = L"";
		this->txtB->Text = L"";
		this->txtC->Text = L"";
		this->txtX1->Text = L"";
		this->txtX2->Text = L"";
	}
	private:Void SmallClean() {
		this->txtX1->Text = L"";
		this->txtX2->Text = L"";
	}
	private:Void Discriminant() {
		float a, b, c, D, x1, x2;
		bool test = true;
		int i;

		a = Convert::ToDouble(txtA->Text);
		b = Convert::ToDouble(txtB->Text);
		c = Convert::ToDouble(txtC->Text);
		if (a == 0 && b == 0 && c == 0) {
			this->lblEasteregg->Text = L"Программа Полстяного Игоря";
		}
		D = (b * b) - (4 * a * c);
		if (D > 0)
		{
			this->label8->Text = L"Дискриминант > 0. \nУравнение имеет 2 корня.";
			x1 = (-b + sqrt(D)) / (2 * a);
			this->txtX1->Text = Convert::ToString(x1);
			x2 = (-b - sqrt(D)) / (2 * a);
			this->txtX2->Text = Convert::ToString(x2);

		}
		else if (D == 0)
		{
			this->label8->Text = L"Дискриминант = 0. \nУравнение имеет 1 корень.";
			x1 = -b / (2 * a);
			this->txtX1->Text = Convert::ToString(x1);
		}
		else if (D < 0)
			this->label8->Text = L"Дискриминант < 0. \n Корней нет.";
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		txtX1->ReadOnly = true;
		txtX2->ReadOnly = true;
	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		Clean();
		this->label8->Text = L"";
	}
	private: System::Void btnResult_Click(System::Object^ sender, System::EventArgs^ e) {
		int indexA = 48, indexB = 48, indexC = 48;
		String^ s;
		if (txtA->Text != "" && txtB->Text != "" && txtC->Text) {
			s = txtA->Text;
			for (int i = 0; i < s->Length; i++)
			{
				if ((int(s[i]) > 58 || int(s[i]) < 48) && int(s[i]) != 44 && int(s[i]) != 45)
					indexA = s[i];
			}
			s = txtB->Text;
			for (int i = 0; i < s->Length; i++)
			{
				if ((int(s[i]) <= 47 || int(s[i]) >= 59) && int(s[i]) != 44 && int(s[i]) != 45)
					indexB = s[i];
			}
			s = txtC->Text;
			for (int i = 0; i < s->Length; i++)
			{
				if ((int(s[i]) <= 47 || int(s[i]) >= 59) && int(s[i]) != 44 && int(s[i]) != 45)
					indexC = s[i];
			}
			if ((indexA > 58 || indexA < 48) && indexA != 44 && indexA != 45)
			{
				this->lblEasteregg->Text = "Ошибка ввода данных!";
				SmallClean();
				this->txtA->Text = L"";
			}
			else if ((indexB > 58 || indexB < 48) && indexB != 44 && indexB != 45)
			{
				this->lblEasteregg->Text = "Ошибка ввода данных!";
				SmallClean();
				this->txtB->Text = L"";
			}
			else if ((indexC > 58 || indexC < 48) && indexC != 44 && indexC != 45)
			{
				this->lblEasteregg->Text = "Ошибка ввода данных!";
				SmallClean();
				this->txtC->Text = L"";
			}
			else {
				Discriminant();
			}
		}
		else {
			this->lblEasteregg->Text = "Ошибка ввода данных!";
			Clean();
		}
	}
	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void txtA_Click(System::Object^ sender, System::EventArgs^ e) {
		lblEasteregg->Text = "";
	}
	private: System::Void txtB_Click(System::Object^ sender, System::EventArgs^ e) {
		lblEasteregg->Text = "";
	}
	private: System::Void txtC_Click(System::Object^ sender, System::EventArgs^ e) {
		lblEasteregg->Text = "";
	}
};
}


