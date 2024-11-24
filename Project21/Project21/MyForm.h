#include "SaveData.h"
#pragma once

namespace Project21 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:Project21::SavedDataForm^ savedDataForm;
	public:
		String^ str; // containey for text form
		ListBox^ listBoxChild;
		System::ComponentModel::BindingList<String^>^ dataList;

		MyForm(void)
		{
			InitializeComponent();
			dataList = gcnew System::ComponentModel::BindingList<String^>();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox1->Location = System::Drawing::Point(187, 13);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox1->Size = System::Drawing::Size(741, 75);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Здравствуйте, впишите своё ФИО\r\n и укажите, имеются ли у вас льготы.";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button1->Cursor = System::Windows::Forms::Cursors::Cross;
			this->button1->DialogResult = System::Windows::Forms::DialogResult::Yes;
			this->button1->Location = System::Drawing::Point(253, 401);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(220, 86);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Добавить в базу данных";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button2->DialogResult = System::Windows::Forms::DialogResult::Abort;
			this->button2->Location = System::Drawing::Point(638, 401);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(220, 86);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Показать Данные";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(187, 329);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(40, 18);
			this->checkBox1->TabIndex = 3;
			this->checkBox1->Text = L"Да";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(253, 329);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(45, 18);
			this->checkBox2->TabIndex = 4;
			this->checkBox2->Text = L"Нет";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(149, 176);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(36, 15);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"Имя:";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(188, 175);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(739, 20);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(115, 215);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(70, 15);
			this->textBox4->TabIndex = 7;
			this->textBox4->Text = L"Фамилия:";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(187, 215);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(739, 20);
			this->textBox5->TabIndex = 8;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(31, 252);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(154, 15);
			this->textBox6->TabIndex = 9;
			this->textBox6->Text = L"Отчество(при наличии):";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(187, 252);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(739, 20);
			this->textBox7->TabIndex = 10;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(188, 293);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(374, 15);
			this->textBox8->TabIndex = 11;
			this->textBox8->Text = L"Имеются ли у вас какие-либо льготы\?";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->ClientSize = System::Drawing::Size(1108, 646);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name = L"MyForm";
			this->Text = L"Hello";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
int k = 0;
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	k = 0;
	if (checkBox2->Checked == true) {
		checkBox2->Checked = false;
	}
	k += 1;
}

private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	k = 0;
	if (checkBox1->Checked == true) {
		checkBox1->Checked = false;
	}
}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (k == 0) {
			str = textBox3->Text + " " + textBox5->Text + " " + textBox7->Text + " Наличие льготы: " + checkBox2->Text;

		}
		else {
			str = textBox3->Text + " " + textBox5->Text + " " + textBox7->Text + " Наличие льготы: " + checkBox1->Text;
		}
		if (!String::IsNullOrWhiteSpace(textBox3->Text)) {
			dataList->Add(str);
		}
		str = "";
		textBox3->Clear();
		textBox5->Clear();
		textBox7->Clear();
		checkBox1->Checked = false;
		checkBox2->Checked = false;

	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (savedDataForm == nullptr) {
		savedDataForm = gcnew SavedDataForm(dataList);
	}
	savedDataForm->Show();

}
};
}
