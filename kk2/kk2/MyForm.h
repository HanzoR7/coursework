#pragma once
#include <cmath>
#include <ctype.h>

namespace kk2 {

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
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
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
	private: System::Windows::Forms::TextBox^ AtextBox;
	private: System::Windows::Forms::TextBox^ BtextBox;
	private: System::Windows::Forms::TextBox^ CtextBox;
	protected:



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ X1textBox;
	private: System::Windows::Forms::TextBox^ X2textBox;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->AtextBox = (gcnew System::Windows::Forms::TextBox());
			this->BtextBox = (gcnew System::Windows::Forms::TextBox());
			this->CtextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->X1textBox = (gcnew System::Windows::Forms::TextBox());
			this->X2textBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// AtextBox
			// 
			this->AtextBox->Location = System::Drawing::Point(21, 83);
			this->AtextBox->Name = L"AtextBox";
			this->AtextBox->Size = System::Drawing::Size(100, 22);
			this->AtextBox->TabIndex = 0;
			this->AtextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::AtextBox_KeyPress);
			// 
			// BtextBox
			// 
			this->BtextBox->Location = System::Drawing::Point(21, 120);
			this->BtextBox->Name = L"BtextBox";
			this->BtextBox->Size = System::Drawing::Size(100, 22);
			this->BtextBox->TabIndex = 1;
			this->BtextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::BtextBox_KeyPress);
			// 
			// CtextBox
			// 
			this->CtextBox->Location = System::Drawing::Point(21, 158);
			this->CtextBox->Name = L"CtextBox";
			this->CtextBox->Size = System::Drawing::Size(100, 22);
			this->CtextBox->TabIndex = 2;
			this->CtextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::CtextBox_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(127, 89);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"A";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(127, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(15, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"B";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(127, 164);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"C";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(245, 216);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 39);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Решить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// X1textBox
			// 
			this->X1textBox->Location = System::Drawing::Point(245, 84);
			this->X1textBox->Name = L"X1textBox";
			this->X1textBox->ReadOnly = true;
			this->X1textBox->Size = System::Drawing::Size(100, 22);
			this->X1textBox->TabIndex = 7;
			// 
			// X2textBox
			// 
			this->X2textBox->Location = System::Drawing::Point(245, 124);
			this->X2textBox->Name = L"X2textBox";
			this->X2textBox->ReadOnly = true;
			this->X2textBox->Size = System::Drawing::Size(100, 22);
			this->X2textBox->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(219, 89);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"x1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(219, 129);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"x2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(20, 54);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 17);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Коэффиценты";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(242, 54);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 17);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Корни";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(362, 267);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->X2textBox);
			this->Controls->Add(this->X1textBox);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->CtextBox);
			this->Controls->Add(this->BtextBox);
			this->Controls->Add(this->AtextBox);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// Допуск писать в текстбоксах только цифры и нажимать backspace
	private: System::Void AtextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		int number = e->KeyChar;
		if (!(number >= 48 && number <= 57) && number != 8 && number != 45) {
			e->Handled = true;
		}
	}
	private: System::Void BtextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		int number = e->KeyChar;
		if (!(number >= 48 && number <= 57) && number != 8 && number != 45) {
			e->Handled = true;
		}
	}
	private: System::Void CtextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		int number = e->KeyChar;
		if (!(number >= 48 && number <= 57) && number != 8 && number != 45) {
			e->Handled = true;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//Проверка на пустые поля
		if (AtextBox->Text == "" || BtextBox->Text == "" || CtextBox->Text == "") {
			MessageBox::Show("Введите все коэффиценты");
		}
		else {
			// Проверка на полноту квадратного уравнения
			if (AtextBox->Text == "0" || BtextBox->Text == "0" || CtextBox->Text == "0") {
				MessageBox::Show("Это неполное квадратное уравнение");
			}
			else {
				int a = Convert::ToInt32(AtextBox->Text);
				int b = Convert::ToInt32(BtextBox->Text);
				int c = Convert::ToInt32(CtextBox->Text);
				double D = b * b - 4 * a * c;
				if (D > 0) {
					double x1 = round((-b + Math::Sqrt(D)) / (2 * a) * 100) / 100;
					double x2 = round((-b - Math::Sqrt(D)) / (2 * a) * 100) / 100;
					X1textBox->Text = Convert::ToString(x1);
					X2textBox->Text = Convert::ToString(x2);
				}
				if (D == 0) {
					double x = round((-b / (2 * a)) * 100) / 100;
					X1textBox->Text = Convert::ToString(x);
					X2textBox->Text = Convert::ToString("D = 0");
				}
				if (D < 0) {
					X1textBox->Text = Convert::ToString("");
					X2textBox->Text = Convert::ToString("");
					MessageBox::Show("Нет корней");
				}
			}
		}
	};
	};
}