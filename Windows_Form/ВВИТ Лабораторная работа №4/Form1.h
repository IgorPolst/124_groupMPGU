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
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Button^ btnConvert;
	protected:

	protected:

	private: System::Windows::Forms::RadioButton^ btnRubl;
	private: System::Windows::Forms::RadioButton^ btnDollar;


	private: System::Windows::Forms::RadioButton^ btnRub2;

	private: System::Windows::Forms::RadioButton^ btnEuro;
	private: System::Windows::Forms::ComboBox^ ComboBox1;


	private: System::Windows::Forms::TextBox^ bxSum;
	private: System::Windows::Forms::TextBox^ bxConvert;


	private: System::Windows::Forms::TextBox^ bxSum2;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lblrub;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lbldollar;

	private: System::Windows::Forms::Label^ lblEasteregg;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox4;



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
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnConvert = (gcnew System::Windows::Forms::Button());
			this->btnRubl = (gcnew System::Windows::Forms::RadioButton());
			this->btnDollar = (gcnew System::Windows::Forms::RadioButton());
			this->btnRub2 = (gcnew System::Windows::Forms::RadioButton());
			this->btnEuro = (gcnew System::Windows::Forms::RadioButton());
			this->bxSum = (gcnew System::Windows::Forms::TextBox());
			this->bxConvert = (gcnew System::Windows::Forms::TextBox());
			this->bxSum2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblrub = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lbldollar = (gcnew System::Windows::Forms::Label());
			this->lblEasteregg = (gcnew System::Windows::Forms::Label());
			this->ComboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// btnClose
			// 
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClose->Location = System::Drawing::Point(417, 304);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(75, 23);
			this->btnClose->TabIndex = 0;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &Form1::btnClose_Click);
			// 
			// btnConvert
			// 
			this->btnConvert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnConvert->Location = System::Drawing::Point(255, 304);
			this->btnConvert->Name = L"btnConvert";
			this->btnConvert->Size = System::Drawing::Size(124, 23);
			this->btnConvert->TabIndex = 1;
			this->btnConvert->Text = L"Конвертировать";
			this->btnConvert->UseVisualStyleBackColor = true;
			this->btnConvert->Click += gcnew System::EventHandler(this, &Form1::btnConvert_Click);
			// 
			// btnRubl
			// 
			this->btnRubl->AutoSize = true;
			this->btnRubl->Checked = true;
			this->btnRubl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnRubl->Location = System::Drawing::Point(360, 46);
			this->btnRubl->Name = L"btnRubl";
			this->btnRubl->Size = System::Drawing::Size(142, 20);
			this->btnRubl->TabIndex = 2;
			this->btnRubl->TabStop = true;
			this->btnRubl->Text = L"Рубль в доллар";
			this->btnRubl->UseVisualStyleBackColor = true;
			this->btnRubl->CheckedChanged += gcnew System::EventHandler(this, &Form1::btnRubl_CheckedChanged);
			this->btnRubl->Click += gcnew System::EventHandler(this, &Form1::btnRubl_Click);
			// 
			// btnDollar
			// 
			this->btnDollar->AutoSize = true;
			this->btnDollar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDollar->Location = System::Drawing::Point(360, 69);
			this->btnDollar->Name = L"btnDollar";
			this->btnDollar->Size = System::Drawing::Size(142, 20);
			this->btnDollar->TabIndex = 3;
			this->btnDollar->Text = L"Доллар в рубль";
			this->btnDollar->UseVisualStyleBackColor = true;
			this->btnDollar->Click += gcnew System::EventHandler(this, &Form1::btnDollar_Click);
			// 
			// btnRub2
			// 
			this->btnRub2->AutoSize = true;
			this->btnRub2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnRub2->Location = System::Drawing::Point(360, 113);
			this->btnRub2->Name = L"btnRub2";
			this->btnRub2->Size = System::Drawing::Size(125, 20);
			this->btnRub2->TabIndex = 4;
			this->btnRub2->Text = L"Рубли в евро";
			this->btnRub2->UseVisualStyleBackColor = true;
			this->btnRub2->Click += gcnew System::EventHandler(this, &Form1::btnRub2_Click);
			// 
			// btnEuro
			// 
			this->btnEuro->AutoSize = true;
			this->btnEuro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnEuro->Location = System::Drawing::Point(360, 136);
			this->btnEuro->Name = L"btnEuro";
			this->btnEuro->Size = System::Drawing::Size(127, 20);
			this->btnEuro->TabIndex = 5;
			this->btnEuro->Text = L"Евро в рубли";
			this->btnEuro->UseVisualStyleBackColor = true;
			this->btnEuro->Click += gcnew System::EventHandler(this, &Form1::btnEuro_Click);
			// 
			// bxSum
			// 
			this->bxSum->Location = System::Drawing::Point(213, 52);
			this->bxSum->Name = L"bxSum";
			this->bxSum->Size = System::Drawing::Size(100, 20);
			this->bxSum->TabIndex = 7;
			// 
			// bxConvert
			// 
			this->bxConvert->Location = System::Drawing::Point(242, 248);
			this->bxConvert->Name = L"bxConvert";
			this->bxConvert->Size = System::Drawing::Size(100, 20);
			this->bxConvert->TabIndex = 8;
			// 
			// bxSum2
			// 
			this->bxSum2->Location = System::Drawing::Point(23, 248);
			this->bxSum2->Name = L"bxSum2";
			this->bxSum2->Size = System::Drawing::Size(100, 20);
			this->bxSum2->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(20, 123);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 16);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Курс обмена";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(20, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(187, 16);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Сумма для конвертации";
			// 
			// lblrub
			// 
			this->lblrub->AutoSize = true;
			this->lblrub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblrub->Location = System::Drawing::Point(129, 249);
			this->lblrub->Name = L"lblrub";
			this->lblrub->Size = System::Drawing::Size(39, 16);
			this->lblrub->TabIndex = 12;
			this->lblrub->Text = L"руб.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(220, 249);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(16, 16);
			this->label4->TabIndex = 13;
			this->label4->Text = L"=";
			// 
			// lbldollar
			// 
			this->lbldollar->AutoSize = true;
			this->lbldollar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbldollar->Location = System::Drawing::Point(348, 249);
			this->lbldollar->Name = L"lbldollar";
			this->lbldollar->Size = System::Drawing::Size(16, 16);
			this->lbldollar->TabIndex = 14;
			this->lbldollar->Text = L"$";
			// 
			// lblEasteregg
			// 
			this->lblEasteregg->AutoSize = true;
			this->lblEasteregg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblEasteregg->Location = System::Drawing::Point(156, 172);
			this->lblEasteregg->Name = L"lblEasteregg";
			this->lblEasteregg->Size = System::Drawing::Size(0, 16);
			this->lblEasteregg->TabIndex = 15;
			// 
			// ComboBox1
			// 
			this->ComboBox1->FormattingEnabled = true;
			this->ComboBox1->Location = System::Drawing::Point(213, 117);
			this->ComboBox1->Name = L"ComboBox1";
			this->ComboBox1->Size = System::Drawing::Size(100, 21);
			this->ComboBox1->TabIndex = 16;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(213, 117);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(100, 21);
			this->comboBox2->TabIndex = 17;
			this->comboBox2->Visible = false;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(213, 117);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(100, 21);
			this->comboBox3->TabIndex = 18;
			this->comboBox3->Visible = false;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(213, 117);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(100, 21);
			this->comboBox4->TabIndex = 19;
			this->comboBox4->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(524, 381);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->ComboBox1);
			this->Controls->Add(this->lblEasteregg);
			this->Controls->Add(this->lbldollar);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lblrub);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bxSum2);
			this->Controls->Add(this->bxConvert);
			this->Controls->Add(this->bxSum);
			this->Controls->Add(this->btnEuro);
			this->Controls->Add(this->btnRub2);
			this->Controls->Add(this->btnDollar);
			this->Controls->Add(this->btnRubl);
			this->Controls->Add(this->btnConvert);
			this->Controls->Add(this->btnClose);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:Void SmallClean()
	{
		this->bxConvert->Text = L"";
		this->bxSum2->Text = L"";
	}
	private:Void Clean() {
		bxConvert->Text = L"";
		bxSum->Text = L"";
		bxSum2->Text = L"";
		ComboBox1->Text = L"";
		comboBox2->Text = L"";
		comboBox3->Text = L"";
		comboBox4->Text = L"";
		lblEasteregg->Text = L"";
	}
	private: System::Void btnConvert_Click(System::Object^ sender, System::EventArgs^ e) {
		
		float vsnos, curs, result;
		int index = 48, index2 = 48;
		String^ s;
		if ((ComboBox1->Text != "" || comboBox2->Text != ""|| comboBox3->Text != ""|| comboBox4->Text != "")&& bxSum->Text != "") {
			s = bxSum->Text;
			for (int i = 0; i < s->Length; i++)
			{
				if ((int(s[i]) > 58 || int(s[i]) < 48) && int(s[i]) != 44)
					index = s[i];
			}

			if (ComboBox1->Visible == true)
				s = ComboBox1->Text;
			else if (comboBox2->Visible == true)
				s = comboBox2->Text;
			else if (comboBox3->Visible == true)
				s = comboBox3->Text;
			else if (comboBox4->Visible == true)
				s = comboBox4->Text;
			for (int i = 0; i < s->Length; i++)
			{
				if ((int(s[i]) <= 47 || int(s[i]) >= 59) && int(s[i]) != 44)
					index2 = s[i];
			}
			if ((index > 58 || index < 48) && index != 44)
			{
				this->lblEasteregg->Text = "Ошибка ввода данных!";
				this->bxSum->Text = L"";
				SmallClean();
			}
			else if ((index2 > 58 || index2 < 48) && index2 != 44)
			{
				this->lblEasteregg->Text = "Ошибка ввода данных!";
				ComboBox1->Text = L"";
				comboBox2->Text = L"";
				comboBox3->Text = L"";
				comboBox4->Text = L"";
				SmallClean();
			}
			else
			{
				this->lblEasteregg->Text = "";
				vsnos = Convert::ToDouble(bxSum->Text);
				if (ComboBox1->Visible == true)
					curs = Convert::ToDouble(ComboBox1->Text);
				else if (comboBox2->Visible == true)
					curs = Convert::ToDouble(comboBox2->Text);
				else if (comboBox3->Visible == true)
					curs = Convert::ToDouble(comboBox3->Text);
				else if (comboBox4->Visible == true)
					curs = Convert::ToDouble(comboBox4->Text);
				if (vsnos == 19062002)
					this->lblEasteregg->Text = L"Полстяной И.С.";
				result = Math::Round(vsnos * curs * 100) / 100;
				this->bxSum2->Text = bxSum->Text;
				this->bxConvert->Text = Convert::ToString(result);


				if (ComboBox1->Visible == true) {
					ComboBox1->BeginUpdate();
					ComboBox1->Items->Add(Convert::ToString(curs));
					ComboBox1->EndUpdate();
	
				}
				else if (comboBox2->Visible == true)
				{
					comboBox2->BeginUpdate();
					comboBox2->Items->Add(Convert::ToString(curs));
					comboBox2->EndUpdate();
					
				}
				else if (comboBox3->Visible == true)
				{
					comboBox3->BeginUpdate();	
					comboBox3->Items->Add(Convert::ToString(curs));
					comboBox3->EndUpdate();
					
				}
				else if (comboBox4->Visible == true)
				{
					comboBox4->BeginUpdate();					
					comboBox4->Items->Add(Convert::ToString(curs));
					comboBox4->EndUpdate();
				}
			}
		}
		else {
			this->lblEasteregg->Text = "Ошибка ввода данных!";
			this->bxSum->Text = L"";
			this->ComboBox1->Text = L"";
			SmallClean();
		}
	}
	private: System::Void btnRubl_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lbldollar->Text = L"$";
		this->lblrub->Text = L"руб.";
		Clean();
		ComboBox1->Visible = true;
		comboBox2->Visible = false;
		comboBox3->Visible = false;
		comboBox4->Visible= false;
	}
	private: System::Void btnDollar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lbldollar->Text = L"руб.";
		this->lblrub->Text = L"$";
		Clean();

		ComboBox1->Visible = false;
		comboBox2->Visible = true;
		comboBox3->Visible = false;
		comboBox4->Visible = false;
	}
	private: System::Void btnRub2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lbldollar->Text = L"Euro";
		this->lblrub->Text = L"руб.";
		Clean();
		ComboBox1->Visible = false;
		comboBox2->Visible = false;
		comboBox3->Visible = true;
		comboBox4->Visible = false;
	}
	private: System::Void btnEuro_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lbldollar->Text = L"руб.";
		this->lblrub->Text = L"Euro";
		Clean();
		ComboBox1->Visible = false;
		comboBox2->Visible = false;
		comboBox3->Visible = false;
		comboBox4->Visible = true;
	}
	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnRubl_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		btnDollar;
		btnEuro;
		btnRub2;
	}

};
}