#include <cmath>
#include <fstream>
#include <msclr/marshal_cppstd.h>
#pragma once

namespace Project1 {

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtForce;
	private: System::Windows::Forms::TextBox^ txtCharges;






	private: System::Windows::Forms::Button^ btnCalculate;
	private: System::Windows::Forms::DataGridView^ dataGridView1;






	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;





















	private: System::ComponentModel::IContainer^ components;










	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtForce = (gcnew System::Windows::Forms::TextBox());
			this->txtCharges = (gcnew System::Windows::Forms::TextBox());
			this->btnCalculate = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 22);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Значення F:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 52);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Значення q:";
			// 
			// txtForce
			// 
			this->txtForce->Location = System::Drawing::Point(211, 16);
			this->txtForce->Margin = System::Windows::Forms::Padding(4);
			this->txtForce->Name = L"txtForce";
			this->txtForce->Size = System::Drawing::Size(257, 22);
			this->txtForce->TabIndex = 2;
			// 
			// txtCharges
			// 
			this->txtCharges->Location = System::Drawing::Point(211, 46);
			this->txtCharges->Margin = System::Windows::Forms::Padding(4);
			this->txtCharges->Name = L"txtCharges";
			this->txtCharges->Size = System::Drawing::Size(257, 22);
			this->txtCharges->TabIndex = 3;
			// 
			// btnCalculate
			// 
			this->btnCalculate->Location = System::Drawing::Point(35, 82);
			this->btnCalculate->Margin = System::Windows::Forms::Padding(4);
			this->btnCalculate->Name = L"btnCalculate";
			this->btnCalculate->Size = System::Drawing::Size(433, 54);
			this->btnCalculate->TabIndex = 4;
			this->btnCalculate->Text = L"Обчислити";
			this->btnCalculate->UseVisualStyleBackColor = true;
			this->btnCalculate->Click += gcnew System::EventHandler(this, &MyForm::btnCalculate_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(496, 16);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(197, 182);
			this->dataGridView1->TabIndex = 5;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"q";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 50;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"E";
			this->Column2->Name = L"Column2";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(35, 144);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(433, 54);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Вихід";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(731, 226);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnCalculate);
			this->Controls->Add(this->txtCharges);
			this->Controls->Add(this->txtForce);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Марков Тимур ІПЗ-23-1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCalculate_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			double F = Convert::ToDouble(txtForce->Text);

			String^ qValues = txtCharges->Text;
			array<String^>^ qArray = qValues->Split(' ');

			dataGridView1->Rows->Clear();

			for each (String ^ qStr in qArray) {
				double q = Convert::ToDouble(qStr->Trim());

				if (q != 0) {
					double E = F / q;

					int rowIndex = dataGridView1->Rows->Add();
					dataGridView1->Rows[rowIndex]->Cells[0]->Value = q;
					dataGridView1->Rows[rowIndex]->Cells[1]->Value = E;
				}
				else {
					MessageBox::Show("Значення заряда не може бути рівно нулю.", "Помилка введення", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}
		catch (FormatException^) {
			MessageBox::Show("Введіть правильні числові значення.", "Помилка введення", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
};
