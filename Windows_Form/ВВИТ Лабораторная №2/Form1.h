#pragma once
#include <cmath>
namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
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
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Label^ LblOper;
	private: System::Windows::Forms::Label^ Lbl1;
	private: System::Windows::Forms::Label^ Lbl2;
	private: System::Windows::Forms::Label^ Lbl3;
	private: System::Windows::Forms::TextBox^ txt1;
	private: System::Windows::Forms::TextBox^ txt2;
	private: System::Windows::Forms::TextBox^ txtResult;
	private: System::Windows::Forms::Button^ btnMinus;
	private: System::Windows::Forms::Button^ btnDivided;
	private: System::Windows::Forms::Button^ btnMultiply;
	private: System::Windows::Forms::Button^ btnRadical;
	private: System::Windows::Forms::Button^ btnDegree;






	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->LblOper = (gcnew System::Windows::Forms::Label());
			this->Lbl1 = (gcnew System::Windows::Forms::Label());
			this->Lbl2 = (gcnew System::Windows::Forms::Label());
			this->Lbl3 = (gcnew System::Windows::Forms::Label());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->txtResult = (gcnew System::Windows::Forms::TextBox());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->btnDivided = (gcnew System::Windows::Forms::Button());
			this->btnMultiply = (gcnew System::Windows::Forms::Button());
			this->btnRadical = (gcnew System::Windows::Forms::Button());
			this->btnDegree = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnClose
			// 
			this->btnClose->Location = System::Drawing::Point(10, 185);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(100, 30);
			this->btnClose->TabIndex = 0;
			this->btnClose->Text = L"Çàêðûòü";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &Form1::btnClose_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(240, 10);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(100, 30);
			this->btnAdd->TabIndex = 1;
			this->btnAdd->Text = L"Ñëîæèòü";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &Form1::btnAdd_Click);
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(10, 150);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(100, 30);
			this->btnReset->TabIndex = 2;
			this->btnReset->Text = L"Ñáðîñ";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &Form1::btnReset_Click);
			// 
			// LblOper
			// 
			this->LblOper->AutoSize = true;
			this->LblOper->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LblOper->Location = System::Drawing::Point(110, 10);
			this->LblOper->Name = L"LblOper";
			this->LblOper->Size = System::Drawing::Size(0, 16);
			this->LblOper->TabIndex = 3;
			this->LblOper->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Lbl1
			// 
			this->Lbl1->AutoSize = true;
			this->Lbl1->Location = System::Drawing::Point(10, 60);
			this->Lbl1->Name = L"Lbl1";
			this->Lbl1->Size = System::Drawing::Size(77, 13);
			this->Lbl1->TabIndex = 4;
			this->Lbl1->Text = L"Ïåðâîå ÷èñëî";
			// 
			// Lbl2
			// 
			this->Lbl2->AutoSize = true;
			this->Lbl2->Location = System::Drawing::Point(10, 90);
			this->Lbl2->Name = L"Lbl2";
			this->Lbl2->Size = System::Drawing::Size(75, 13);
			this->Lbl2->TabIndex = 5;
			this->Lbl2->Text = L"Âòîðîå ÷èñëî";
			// 
			// Lbl3
			// 
			this->Lbl3->AutoSize = true;
			this->Lbl3->Location = System::Drawing::Point(10, 120);
			this->Lbl3->Name = L"Lbl3";
			this->Lbl3->Size = System::Drawing::Size(59, 13);
			this->Lbl3->TabIndex = 6;
			this->Lbl3->Text = L"Ðåçóëüòàò";
			// 
			// txt1
			// 
			this->txt1->Location = System::Drawing::Point(110, 60);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(90, 20);
			this->txt1->TabIndex = 7;
			this->txt1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txt2
			// 
			this->txt2->Location = System::Drawing::Point(110, 90);
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(90, 20);
			this->txt2->TabIndex = 8;
			this->txt2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtResult
			// 
			this->txtResult->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->txtResult->Location = System::Drawing::Point(110, 120);
			this->txtResult->Name = L"txtResult";
			this->txtResult->ReadOnly = true;
			this->txtResult->Size = System::Drawing::Size(90, 20);
			this->txtResult->TabIndex = 9;
			this->txtResult->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnMinus
			// 
			this->btnMinus->Location = System::Drawing::Point(240, 45);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(100, 30);
			this->btnMinus->TabIndex = 10;
			this->btnMinus->Text = L"Âû÷åñòü";
			this->btnMinus->UseVisualStyleBackColor = true;
			this->btnMinus->Click += gcnew System::EventHandler(this, &Form1::btnMinus_Click);
			// 
			// btnDivided
			// 
			this->btnDivided->Location = System::Drawing::Point(240, 115);
			this->btnDivided->Name = L"btnDivided";
			this->btnDivided->Size = System::Drawing::Size(100, 30);
			this->btnDivided->TabIndex = 11;
			this->btnDivided->Text = L"Ðàçäåëèòü";
			this->btnDivided->UseVisualStyleBackColor = true;
			this->btnDivided->Click += gcnew System::EventHandler(this, &Form1::btnDivided_Click);
			// 
			// btnMultiply
			// 
			this->btnMultiply->Location = System::Drawing::Point(240, 80);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size(100, 30);
			this->btnMultiply->TabIndex = 12;
			this->btnMultiply->Text = L"Óìíîæèòü";
			this->btnMultiply->UseVisualStyleBackColor = true;
			this->btnMultiply->Click += gcnew System::EventHandler(this, &Form1::btnMultiply_Click);
			// 
			// btnRadical
			// 
			this->btnRadical->Location = System::Drawing::Point(240, 185);
			this->btnRadical->Name = L"btnRadical";
			this->btnRadical->Size = System::Drawing::Size(100, 30);
			this->btnRadical->TabIndex = 13;
			this->btnRadical->Text = L"sqrt";
			this->btnRadical->UseVisualStyleBackColor = true;
			this->btnRadical->Click += gcnew System::EventHandler(this, &Form1::btnRadical_Click);
			// 
			// btnDegree
			// 
			this->btnDegree->Location = System::Drawing::Point(240, 151);
			this->btnDegree->Name = L"btnDegree";
			this->btnDegree->Size = System::Drawing::Size(100, 30);
			this->btnDegree->TabIndex = 14;
			this->btnDegree->Text = L"X^2";
			this->btnDegree->UseVisualStyleBackColor = true;
			this->btnDegree->Click += gcnew System::EventHandler(this, &Form1::btnDegree_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(344, 221);
			this->Controls->Add(this->btnDegree);
			this->Controls->Add(this->btnRadical);
			this->Controls->Add(this->btnMultiply);
			this->Controls->Add(this->btnDivided);
			this->Controls->Add(this->btnMinus);
			this->Controls->Add(this->txtResult);
			this->Controls->Add(this->txt2);
			this->Controls->Add(this->txt1);
			this->Controls->Add(this->Lbl3);
			this->Controls->Add(this->Lbl2);
			this->Controls->Add(this->Lbl1);
			this->Controls->Add(this->LblOper);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnClose);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Calc";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	
	
	}
	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
	
		this->Close();
	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	
		float i1, i2, i3;
		this->LblOper->Text = L"Ñëîæåíèå";

		i1 = Convert::ToDouble(txt1->Text);
		i2 = Convert::ToDouble(txt2->Text);
		i3 = i1 + i2;
		this->txtResult->Text = Convert::ToString(i3);
	}
	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
	
		this->LblOper->Text = L"";
		this->txt1->Text = L"";
		this->txt2->Text = L"";
		this->txtResult->Text = L"";
		this->txt2->ReadOnly = false;
		
	}
	private: System::Void btnMinus_Click(System::Object^ sender, System::EventArgs^ e) {
		float i1, i2, i3;
		this->LblOper->Text = L"Âû÷èòàíèå";

		i1 = Convert::ToDouble(txt1->Text);
		i2 = Convert::ToDouble(txt2->Text);
		i3 = i1 - i2;
		this->txtResult->Text = Convert::ToString(i3);
	}
	private: System::Void btnMultiply_Click(System::Object^ sender, System::EventArgs^ e) {
	
		float i1, i2, i3;
		this->LblOper->Text = L"Óìíîæåíèå";

		i1 = Convert::ToDouble(txt1->Text);
		i2 = Convert::ToDouble(txt2->Text);
		i3 = i1 * i2;
		this->txtResult->Text = Convert::ToString(i3);
	}


	private: System::Void btnDivided_Click(System::Object^ sender, System::EventArgs^ e) {
	
		float i1, i2, i3;
		this->LblOper->Text = L"Äåëåíèå";

		i1 = Convert::ToDouble(txt1->Text);
		i2 = Convert::ToDouble(txt2->Text);
		i3 = i1 / i2;
		this->txtResult->Text = Convert::ToString(i3);
	}
	private: System::Void btnDegree_Click(System::Object^ sender, System::EventArgs^ e) {
	
		float i1,i3;
		this->LblOper->Text = L"X^2";

		i1 = Convert::ToDouble(txt1->Text);
		txt2->ReadOnly = true;
		i3 = i1 * i1;
		this->txtResult->Text = Convert::ToString(i3);
	}
	private: System::Void btnRadical_Click(System::Object^ sender, System::EventArgs^ e) {
		
		float i1, i3;
		this->LblOper->Text = L"sqrt(X)";

		i1 = Convert::ToDouble(txt1->Text);
		txt2->ReadOnly = true;
		i3 = sqrt(i1);
		this->txtResult->Text = Convert::ToString(i3);
	}
};
}
