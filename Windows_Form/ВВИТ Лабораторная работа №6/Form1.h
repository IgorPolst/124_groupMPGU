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

	protected:

	private: System::Windows::Forms::Button^ btnrun;

	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::RadioButton^ rbtSumm;
	private: System::Windows::Forms::RadioButton^ rbtAverage;
	private: System::Windows::Forms::RadioButton^ rbtMinValue;
	private: System::Windows::Forms::RadioButton^ rbtMaxValue;
	private: System::Windows::Forms::RadioButton^ rbtDescending;
	private: System::Windows::Forms::RadioButton^ rbtAscending;
	private: System::Windows::Forms::RadioButton^ rbtOdd_elements;
	private: System::Windows::Forms::RadioButton^ rbtEvene_elements;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtMax_elements;

	private: System::Windows::Forms::TextBox^ txtMin_elements;


	private: System::Windows::Forms::TextBox^ txtNumber_elements;



	private: System::Windows::Forms::TextBox^ txtStart_Arr;
	private: System::Windows::Forms::TextBox^ txtResult;








	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ lblError;
	private: System::Windows::Forms::Button^ btnGeneration;




	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnrun = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->rbtSumm = (gcnew System::Windows::Forms::RadioButton());
			this->rbtAverage = (gcnew System::Windows::Forms::RadioButton());
			this->rbtMinValue = (gcnew System::Windows::Forms::RadioButton());
			this->rbtMaxValue = (gcnew System::Windows::Forms::RadioButton());
			this->rbtDescending = (gcnew System::Windows::Forms::RadioButton());
			this->rbtAscending = (gcnew System::Windows::Forms::RadioButton());
			this->rbtOdd_elements = (gcnew System::Windows::Forms::RadioButton());
			this->rbtEvene_elements = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->lblError = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtMax_elements = (gcnew System::Windows::Forms::TextBox());
			this->txtMin_elements = (gcnew System::Windows::Forms::TextBox());
			this->txtNumber_elements = (gcnew System::Windows::Forms::TextBox());
			this->txtStart_Arr = (gcnew System::Windows::Forms::TextBox());
			this->txtResult = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnGeneration = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnrun
			// 
			this->btnrun->Enabled = false;
			this->btnrun->Location = System::Drawing::Point(435, 248);
			this->btnrun->Name = L"btnrun";
			this->btnrun->Size = System::Drawing::Size(123, 24);
			this->btnrun->TabIndex = 2;
			this->btnrun->Text = L"Выполнить";
			this->btnrun->UseVisualStyleBackColor = true;
			this->btnrun->Click += gcnew System::EventHandler(this, &Form1::btnrun_Click);
			// 
			// btnClose
			// 
			this->btnClose->Location = System::Drawing::Point(435, 437);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(123, 24);
			this->btnClose->TabIndex = 4;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &Form1::btnClose_Click);
			// 
			// rbtSumm
			// 
			this->rbtSumm->AutoSize = true;
			this->rbtSumm->Location = System::Drawing::Point(12, 23);
			this->rbtSumm->Name = L"rbtSumm";
			this->rbtSumm->Size = System::Drawing::Size(117, 17);
			this->rbtSumm->TabIndex = 5;
			this->rbtSumm->Text = L"Сумма элементов";
			this->rbtSumm->UseVisualStyleBackColor = true;
			this->rbtSumm->CheckedChanged += gcnew System::EventHandler(this, &Form1::rbtSumm_CheckedChanged);
			this->rbtSumm->Click += gcnew System::EventHandler(this, &Form1::rbtSumm_Click);
			// 
			// rbtAverage
			// 
			this->rbtAverage->AutoSize = true;
			this->rbtAverage->Location = System::Drawing::Point(12, 63);
			this->rbtAverage->Name = L"rbtAverage";
			this->rbtAverage->Size = System::Drawing::Size(118, 17);
			this->rbtAverage->TabIndex = 6;
			this->rbtAverage->Text = L"Среднее значение";
			this->rbtAverage->UseVisualStyleBackColor = true;
			this->rbtAverage->CheckedChanged += gcnew System::EventHandler(this, &Form1::rbtAverage_Click);
			// 
			// rbtMinValue
			// 
			this->rbtMinValue->AutoSize = true;
			this->rbtMinValue->Location = System::Drawing::Point(12, 103);
			this->rbtMinValue->Name = L"rbtMinValue";
			this->rbtMinValue->Size = System::Drawing::Size(146, 17);
			this->rbtMinValue->TabIndex = 7;
			this->rbtMinValue->Text = L"Минимально езначение";
			this->rbtMinValue->UseVisualStyleBackColor = true;
			this->rbtMinValue->CheckedChanged += gcnew System::EventHandler(this, &Form1::rbtMinValue_Click);
			this->rbtMinValue->Click += gcnew System::EventHandler(this, &Form1::rbtMinValue_Click);
			// 
			// rbtMaxValue
			// 
			this->rbtMaxValue->AutoSize = true;
			this->rbtMaxValue->Location = System::Drawing::Point(12, 143);
			this->rbtMaxValue->Name = L"rbtMaxValue";
			this->rbtMaxValue->Size = System::Drawing::Size(146, 17);
			this->rbtMaxValue->TabIndex = 8;
			this->rbtMaxValue->Text = L"Максимальное значени";
			this->rbtMaxValue->UseVisualStyleBackColor = true;
			this->rbtMaxValue->Click += gcnew System::EventHandler(this, &Form1::rbtMaxValue_Click);
			// 
			// rbtDescending
			// 
			this->rbtDescending->AutoSize = true;
			this->rbtDescending->Location = System::Drawing::Point(217, 143);
			this->rbtDescending->Name = L"rbtDescending";
			this->rbtDescending->Size = System::Drawing::Size(154, 17);
			this->rbtDescending->TabIndex = 12;
			this->rbtDescending->Text = L"Сортировка по убыванию";
			this->rbtDescending->UseVisualStyleBackColor = true;
			this->rbtDescending->Click += gcnew System::EventHandler(this, &Form1::rbtDescending_Click);
			// 
			// rbtAscending
			// 
			this->rbtAscending->AutoSize = true;
			this->rbtAscending->Location = System::Drawing::Point(217, 103);
			this->rbtAscending->Name = L"rbtAscending";
			this->rbtAscending->Size = System::Drawing::Size(170, 17);
			this->rbtAscending->TabIndex = 11;
			this->rbtAscending->Text = L"Сортировка по возрастанию";
			this->rbtAscending->UseVisualStyleBackColor = true;
			this->rbtAscending->Click += gcnew System::EventHandler(this, &Form1::rbtAscending_Click);
			// 
			// rbtOdd_elements
			// 
			this->rbtOdd_elements->AutoSize = true;
			this->rbtOdd_elements->Location = System::Drawing::Point(217, 63);
			this->rbtOdd_elements->Name = L"rbtOdd_elements";
			this->rbtOdd_elements->Size = System::Drawing::Size(132, 17);
			this->rbtOdd_elements->TabIndex = 10;
			this->rbtOdd_elements->Text = L"Нечётные элементы ";
			this->rbtOdd_elements->UseVisualStyleBackColor = true;
			this->rbtOdd_elements->Click += gcnew System::EventHandler(this, &Form1::rbtOdd_elements_Click);
			// 
			// rbtEvene_elements
			// 
			this->rbtEvene_elements->AutoSize = true;
			this->rbtEvene_elements->Location = System::Drawing::Point(217, 23);
			this->rbtEvene_elements->Name = L"rbtEvene_elements";
			this->rbtEvene_elements->Size = System::Drawing::Size(118, 17);
			this->rbtEvene_elements->TabIndex = 9;
			this->rbtEvene_elements->Text = L"Чётные элементы";
			this->rbtEvene_elements->UseVisualStyleBackColor = true;
			this->rbtEvene_elements->Click += gcnew System::EventHandler(this, &Form1::rbtEvene_elements_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rbtAscending);
			this->groupBox1->Controls->Add(this->rbtDescending);
			this->groupBox1->Controls->Add(this->rbtSumm);
			this->groupBox1->Controls->Add(this->rbtAverage);
			this->groupBox1->Controls->Add(this->rbtOdd_elements);
			this->groupBox1->Controls->Add(this->rbtMinValue);
			this->groupBox1->Controls->Add(this->rbtEvene_elements);
			this->groupBox1->Controls->Add(this->rbtMaxValue);
			this->groupBox1->Enabled = false;
			this->groupBox1->Location = System::Drawing::Point(12, 219);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(405, 180);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Операции с массивом";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->lblError);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->txtMax_elements);
			this->groupBox2->Controls->Add(this->txtMin_elements);
			this->groupBox2->Controls->Add(this->txtNumber_elements);
			this->groupBox2->Location = System::Drawing::Point(12, 34);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(405, 113);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Исходные данные ";
			// 
			// lblError
			// 
			this->lblError->AutoSize = true;
			this->lblError->Location = System::Drawing::Point(15, 92);
			this->lblError->Name = L"lblError";
			this->lblError->Size = System::Drawing::Size(0, 13);
			this->lblError->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 75);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(194, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Максимальное значение диапазона:\r\n";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(188, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Минимальное значение диапазона:\r\n";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Колличетво эллементов массива:\r\n";
			// 
			// txtMax_elements
			// 
			this->txtMax_elements->Location = System::Drawing::Point(262, 72);
			this->txtMax_elements->Name = L"txtMax_elements";
			this->txtMax_elements->Size = System::Drawing::Size(125, 20);
			this->txtMax_elements->TabIndex = 2;
			this->txtMax_elements->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtMin_elements
			// 
			this->txtMin_elements->Location = System::Drawing::Point(262, 46);
			this->txtMin_elements->Name = L"txtMin_elements";
			this->txtMin_elements->Size = System::Drawing::Size(125, 20);
			this->txtMin_elements->TabIndex = 1;
			this->txtMin_elements->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtNumber_elements
			// 
			this->txtNumber_elements->Location = System::Drawing::Point(262, 20);
			this->txtNumber_elements->Name = L"txtNumber_elements";
			this->txtNumber_elements->Size = System::Drawing::Size(125, 20);
			this->txtNumber_elements->TabIndex = 0;
			this->txtNumber_elements->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtStart_Arr
			// 
			this->txtStart_Arr->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->txtStart_Arr->Location = System::Drawing::Point(15, 177);
			this->txtStart_Arr->Name = L"txtStart_Arr";
			this->txtStart_Arr->Size = System::Drawing::Size(405, 20);
			this->txtStart_Arr->TabIndex = 16;
			this->txtStart_Arr->Click += gcnew System::EventHandler(this, &Form1::txtStart_Arr_Click);
			this->txtStart_Arr->TextChanged += gcnew System::EventHandler(this, &Form1::txtStart_Arr_TextChanged);
			this->txtStart_Arr->Leave += gcnew System::EventHandler(this, &Form1::txtStart_Arr_Leave);
			// 
			// txtResult
			// 
			this->txtResult->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->txtResult->Location = System::Drawing::Point(12, 437);
			this->txtResult->Name = L"txtResult";
			this->txtResult->ReadOnly = true;
			this->txtResult->Size = System::Drawing::Size(405, 20);
			this->txtResult->TabIndex = 17;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(15, 161);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 13);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Исходный массив:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 421);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 13);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Результат операции:\r\n";
			// 
			// btnGeneration
			// 
			this->btnGeneration->Location = System::Drawing::Point(435, 34);
			this->btnGeneration->Name = L"btnGeneration";
			this->btnGeneration->Size = System::Drawing::Size(123, 24);
			this->btnGeneration->TabIndex = 0;
			this->btnGeneration->Text = L"Генерация массива";
			this->btnGeneration->UseVisualStyleBackColor = true;
			this->btnGeneration->Click += gcnew System::EventHandler(this, &Form1::btnGeneration_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(579, 479);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtResult);
			this->Controls->Add(this->txtStart_Arr);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnrun);
			this->Controls->Add(this->btnGeneration);
			this->Name = L"Form1";
			this->Text = L"Обработка массива";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int* mass = new int[Number_elements];
		int Number_elements = 0, Numbersort_elements;
		int* sorting_mass = new int[Numbersort_elements];
		double Result;
	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void rbtSumm_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		rbtAscending;
		rbtAverage;
		rbtDescending;
		rbtEvene_elements;
		rbtMaxValue;
		rbtMinValue;
		rbtOdd_elements;
	}
	public: System::Void btnGeneration_Click(System::Object^ sender, System::EventArgs^ e) {
		int index = 48, index2 = 48, index3 = 48;
		String^ s;
		if (txtNumber_elements->Text != "" && txtMax_elements->Text != "" && txtMin_elements->Text != "") {
			s = txtNumber_elements->Text;
			for (int i = 0; i < s->Length; i++)
			{
				if (int(s[i]) > 58 || int(s[i]) < 48)
					index = s[i];
			}

			s = txtMax_elements->Text;
			for (int i = 0; i < s->Length; i++)
			{
				if ((int(s[i]) > 58 || int(s[i]) < 48) && int(s[i]) != 45)
					index2 = s[i];
			}

			s = txtMin_elements->Text;
			for (int i = 0; i < s->Length; i++)
			{
				if ((int(s[i]) <= 47 || int(s[i]) >= 59) && int(s[i]) != 45)
					index3 = s[i];
			}

			if (index > 58 || index < 48)
			{
				this->lblError->Text = "Ошибка ввода данных!";
				this->txtNumber_elements->Text = L"";

			}
			else if ((index2 > 58 || index2 < 48) && index2 != 45)
			{
				this->lblError->Text = "Ошибка ввода данных!";
				this->txtMax_elements->Text = L"";
			}
			else if ((index3 > 58 || index3 < 48) && index3 != 45)
			{
				this->lblError->Text = "Ошибка ввода данных!";
				this->txtMin_elements->Text = L"";
			}
			else {
				int Max_element, Min_element;
				Random^ rnd1 = gcnew Random();
				Number_elements = Convert::ToInt64(txtNumber_elements->Text);
				Max_element = Convert::ToInt64(txtMax_elements->Text);
				Min_element = Convert::ToInt64(txtMin_elements->Text);

				for (int i = 0; i < Number_elements; i++)
				{
					mass[i] = rnd1->Next(Min_element, Max_element);
					txtStart_Arr->Text += Convert::ToString(mass[i]) + L" ";
				}
				btnGeneration->Enabled = false;

				this->lblError->Text = L"";
			}
		}
		else {
			this->lblError->Text = "Ошибка ввода данных!";
			this->txtMax_elements->Text = L"";
			this->txtMin_elements->Text = L"";
			this->txtNumber_elements->Text = L"";
		}
	}
	private: System::Void rbtSumm_Click(System::Object^ sender, System::EventArgs^ e) {
		int Summ = 0;
		for (int i = 0; i < Number_elements; i++)
			Summ += mass[i];
		Result = Summ;
		btnrun->Enabled = true;
	}
	private: System::Void btnrun_Click(System::Object^ sender, System::EventArgs^ e) {

		if (rbtEvene_elements->Checked == true || rbtOdd_elements->Checked == true) {
			for (int i = 0; i < Numbersort_elements; i++) {
				txtResult->Text += Convert::ToString(sorting_mass[i]) + L" ";
			}
		}
		else if (rbtAscending->Checked == true || (rbtDescending->Checked == true)) {
			for (int i = 0; i < Number_elements; i++) {
				txtResult->Text += Convert::ToString(sorting_mass[i]) + L" ";
			}
		}
		else
			txtResult->Text = Convert::ToString(Result);
		Numbersort_elements = 0;
		btnrun->Enabled = false;
	}
	private: System::Void rbtAverage_Click(System::Object^ sender, System::EventArgs^ e) {
		int Summ = 0;
		double  a = Number_elements;
		for (int i = 0; i < Number_elements; i++)
			Summ += mass[i];
		Result = Math::Round(Summ / a * 100) / 100;
		txtResult->Clear();
	}
	private: System::Void rbtMinValue_Click(System::Object^ sender, System::EventArgs^ e) {
		int min = mass[0];
		for (int i = 1; i < Number_elements; i++)
			min = Math::Min(min, mass[i]);
		Result = min;
		txtResult->Clear();
		btnrun->Enabled = true;
	}
	private: System::Void rbtMaxValue_Click(System::Object^ sender, System::EventArgs^ e) {
		int max = mass[0];
		for (int i = 0; i < Number_elements; i++)
			max = Math::Max(mass[i], max);
		Result = max;
		txtResult->Clear();
		btnrun->Enabled = true;
	}
	private: System::Void rbtEvene_elements_Click(System::Object^ sender, System::EventArgs^ e) {
		int minus = 0;
		for (int i = 0; i < Number_elements; i++)
			if (mass[i] % 2 == 0)
				Numbersort_elements++;
		for (int i = 0; i < Numbersort_elements; i++)
			for (int j = minus; j < Number_elements; j++)
				if (mass[j] % 2 == 0) {
					sorting_mass[i] = mass[j];
					minus = j + 1;
					j = Number_elements;
				}
		txtResult->Clear();
		btnrun->Enabled = true;
	}
	public: System::Void rbtOdd_elements_Click(System::Object^ sender, System::EventArgs^ e) {
		int minus = 0;
		for (int i = 0; i < Number_elements; i++)
			if (mass[i] % 2 == 1)
				Numbersort_elements++;
		for (int i = 0; i < Numbersort_elements; i++)
			for (int j = minus; j < Number_elements; j++)
				if (mass[j] % 2 == 1) {
					sorting_mass[i] = mass[j];
					minus = j + 1;
					j = Number_elements;
				}

		txtResult->Clear();
		btnrun->Enabled = true;
	}

	private: System::Void txtStart_Arr_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		groupBox1->Enabled = true;
	}
	private: System::Void rbtAscending_Click(System::Object^ sender, System::EventArgs^ e) {
		Numbersort_elements = Number_elements;
		int bufer;
		for (int i = 0; i < Number_elements; i++) {
			sorting_mass[i] = mass[i];
		}
		for (int i = 0; i < Number_elements - 1; i++)
			for (int j = i + 1; j < Number_elements; j++) {
				if (sorting_mass[i] >= sorting_mass[j])
				{
					bufer = sorting_mass[j];
					sorting_mass[j] = sorting_mass[i];
					sorting_mass[i] = bufer;
				}
			}
		txtResult->Clear();
		btnrun->Enabled = true;
	}
	private: System::Void rbtDescending_Click(System::Object^ sender, System::EventArgs^ e) {
		Numbersort_elements = Number_elements;
		int bufer;
		for (int i = 0; i < Number_elements; i++) {
			sorting_mass[i] = mass[i];
		}
		for (int i = 0; i < Number_elements - 1; i++)
			for (int j = i + 1; j < Number_elements; j++) {
				if (sorting_mass[i] <= sorting_mass[j])
				{
					bufer = sorting_mass[j];
					sorting_mass[j] = sorting_mass[i];
					sorting_mass[i] = bufer;
				}
			}
		txtResult->Clear();
		btnrun->Enabled = true;
	}
	private: System::Void txtStart_Arr_Click(System::Object^ sender, System::EventArgs^ e) {
		txtMax_elements->Enabled = false;
		txtMin_elements->Enabled = false;
		txtNumber_elements->Enabled = false;

	}
	private: System::Void txtStart_Arr_Leave(System::Object^ sender, System::EventArgs^ e) {
		groupBox1->Enabled = true;
	}
		   
};
};

