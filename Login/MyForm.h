#pragma once
#include "MyForm1.h"

namespace Login {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::UserControl
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
	private: String^ connectionString = "datasource=localhost; username=root; password=Y1r0J@v1dT3thh3?"";database=db-log";
	private: MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_name;
	private: System::Windows::Forms::TextBox^ txt_pass;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_name = (gcnew System::Windows::Forms::TextBox());
			this->txt_pass = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(122, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 48);
			this->label1->TabIndex = 0;
			this->label1->Text = L"User";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(47, 143);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(153, 51);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password";
			// 
			// txt_name
			// 
			this->txt_name->Location = System::Drawing::Point(220, 32);
			this->txt_name->Multiline = true;
			this->txt_name->Name = L"txt_name";
			this->txt_name->Size = System::Drawing::Size(279, 41);
			this->txt_name->TabIndex = 2;
			// 
			// txt_pass
			// 
			this->txt_pass->Location = System::Drawing::Point(220, 153);
			this->txt_pass->Multiline = true;
			this->txt_pass->Name = L"txt_pass";
			this->txt_pass->Size = System::Drawing::Size(279, 41);
			this->txt_pass->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(220, 223);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(262, 75);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Loging";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->txt_pass);
			this->panel1->Controls->Add(this->txt_name);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(734, 358);
			this->panel1->TabIndex = 5;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(734, 358);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	public:
		Form^ actual;

	void abrirforma(Form^ hijo) {
		if (this->actual != nullptr) {
			this->actual->Close();

		}
		this->actual = hijo;
		hijo->Dock = DockStyle::Fill;
		panel1->Controls->Add(hijo);
		panel1->Tag = hijo;
		hijo->Show();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ sql = "select * from user where user = '" + txt_name->Text + "' and clave = '" + txt_pass->Text + "'";
		MySqlCommand^ cursor = gcnew MySqlCommand(sql, conn);
		MySqlDataReader^ dataReader;
		try {
			this->conn->Open();
			dataReader = cursor->ExecuteReader();

			if (dataReader->Read()) {
				this->conn->Close();
				this->abrirforma(gcnew Login::MyForm1());
			}
			else {
				this->conn->Close();
				MessageBox::Show(L"Usuario no valido");
			}
		}
		catch (Exception^ x) {
			MessageBox::Show(x ->Message);
		}
	}

};
}
