#include <cmath>
#include <algorithm>
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
	private: System::Windows::Forms::Button^ btnSort;









	private: System::Windows::Forms::DataGridView^ dataGridView1;






	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::NumericUpDown^ numRows;
	private: System::Windows::Forms::NumericUpDown^ numCols;


	private: System::Windows::Forms::Button^ btnGenerate;
	private: int** matrix;























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
			this->btnSort = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numRows = (gcnew System::Windows::Forms::NumericUpDown());
			this->numCols = (gcnew System::Windows::Forms::NumericUpDown());
			this->btnGenerate = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numRows))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCols))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 22);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Кількість рядків:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 52);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Кількість стовпців:";
			// 
			// btnSort
			// 
			this->btnSort->Location = System::Drawing::Point(37, 141);
			this->btnSort->Margin = System::Windows::Forms::Padding(4);
			this->btnSort->Name = L"btnSort";
			this->btnSort->Size = System::Drawing::Size(194, 54);
			this->btnSort->TabIndex = 4;
			this->btnSort->Text = L"Відсортувати за збільшенням";
			this->btnSort->UseVisualStyleBackColor = true;
			this->btnSort->Click += gcnew System::EventHandler(this, &MyForm::btnSort_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(252, 16);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(321, 317);
			this->dataGridView1->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(37, 279);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(194, 54);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Вихід";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// numRows
			// 
			this->numRows->Location = System::Drawing::Point(190, 22);
			this->numRows->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numRows->Name = L"numRows";
			this->numRows->Size = System::Drawing::Size(41, 22);
			this->numRows->TabIndex = 7;
			this->numRows->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numCols
			// 
			this->numCols->Location = System::Drawing::Point(190, 50);
			this->numCols->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numCols->Name = L"numCols";
			this->numCols->Size = System::Drawing::Size(41, 22);
			this->numCols->TabIndex = 8;
			this->numCols->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// btnGenerate
			// 
			this->btnGenerate->Location = System::Drawing::Point(37, 79);
			this->btnGenerate->Margin = System::Windows::Forms::Padding(4);
			this->btnGenerate->Name = L"btnGenerate";
			this->btnGenerate->Size = System::Drawing::Size(194, 54);
			this->btnGenerate->TabIndex = 9;
			this->btnGenerate->Text = L"Згенерувати матрицю";
			this->btnGenerate->UseVisualStyleBackColor = true;
			this->btnGenerate->Click += gcnew System::EventHandler(this, &MyForm::btnGenerate_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(606, 348);
			this->Controls->Add(this->btnGenerate);
			this->Controls->Add(this->numCols);
			this->Controls->Add(this->numRows);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnSort);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Марков Тимур ІПЗ-23-1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numRows))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCols))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void btnGenerate_Click(System::Object^ sender, System::EventArgs^ e) {
	int rows = (int)this->numRows->Value;
	int cols = (int)this->numCols->Value;

	matrix = new int* [rows];
	for (int i = 0; i < rows; ++i) {
		matrix[i] = new int[cols];
	}

	dataGridView1->ColumnCount = cols;
	dataGridView1->RowCount = rows;

	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			matrix[i][j] = rand() % 100; 
			dataGridView1->Rows[i]->Cells[j]->Value = matrix[i][j];
		}
	}
}
private: System::Void btnSort_Click(System::Object^ sender, System::EventArgs^ e) {
	int rows = (int)this->numRows->Value;
	int cols = (int)this->numCols->Value;

	for (int j = 0; j < cols; ++j) {
		int* column = new int[rows];
		for (int i = 0; i < rows; ++i) {
			column[i] = matrix[i][j];
		}

		std::sort(column, column + rows);

		for (int i = 0; i < rows; ++i) {
			matrix[i][j] = column[i];
			dataGridView1->Rows[i]->Cells[j]->Value = matrix[i][j];
		}

		delete[] column;
	}
}
};
};
