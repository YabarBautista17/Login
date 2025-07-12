#pragma once
#include "db.h"

namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->data = gcnew db();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Tabla;
	private: System::Windows::Forms::TextBox^ Pass;

	private: System::Windows::Forms::TextBox^ Nombre;
	private: System::Windows::Forms::TextBox^ dep;


	private: System::Windows::Forms::TextBox^ rol;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ datasss;
	private:db^ data;







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
			this->Tabla = (gcnew System::Windows::Forms::Label());
			this->Pass = (gcnew System::Windows::Forms::TextBox());
			this->Nombre = (gcnew System::Windows::Forms::TextBox());
			this->dep = (gcnew System::Windows::Forms::TextBox());
			this->rol = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->datasss = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datasss))->BeginInit();
			this->SuspendLayout();
			// 
			// Tabla
			// 
			this->Tabla->AutoSize = true;
			this->Tabla->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tabla->Location = System::Drawing::Point(39, 13);
			this->Tabla->Name = L"Tabla";
			this->Tabla->Size = System::Drawing::Size(248, 34);
			this->Tabla->TabIndex = 0;
			this->Tabla->Text = L"Tabla de creacion de users";
			// 
			// Pass
			// 
			this->Pass->Location = System::Drawing::Point(447, 105);
			this->Pass->Multiline = true;
			this->Pass->Name = L"Pass";
			this->Pass->Size = System::Drawing::Size(238, 41);
			this->Pass->TabIndex = 3;
			// 
			// Nombre
			// 
			this->Nombre->Location = System::Drawing::Point(447, 29);
			this->Nombre->Multiline = true;
			this->Nombre->Name = L"Nombre";
			this->Nombre->Size = System::Drawing::Size(238, 41);
			this->Nombre->TabIndex = 4;
			// 
			// dep
			// 
			this->dep->Location = System::Drawing::Point(447, 247);
			this->dep->Multiline = true;
			this->dep->Name = L"dep";
			this->dep->Size = System::Drawing::Size(238, 41);
			this->dep->TabIndex = 5;
			// 
			// rol
			// 
			this->rol->Location = System::Drawing::Point(447, 176);
			this->rol->Multiline = true;
			this->rol->Name = L"rol";
			this->rol->Size = System::Drawing::Size(238, 41);
			this->rol->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(355, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 34);
			this->label1->TabIndex = 7;
			this->label1->Text = L"nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(355, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 34);
			this->label2->TabIndex = 8;
			this->label2->Text = L"clave";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(355, 183);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 34);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Rol";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(297, 254);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(144, 34);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Departamento";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(438, 304);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(247, 47);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button3
			//
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button3->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(438, 400);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(247, 47);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Modificar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			//
			// datasss
			//
			this->datasss->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->datasss->Location = System::Drawing::Point(25, 50);
			this->datasss->Name = L"datasss";
			this->datasss->Size = System::Drawing::Size(266, 274);
			this->datasss->TabIndex = 12;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(734, 358);
			this->Controls->Add(this->datasss);
			this->Controls->Add(this->Tabla);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Pass);
			this->Controls->Add(this->rol);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Nombre);
			this->Controls->Add(this->dep);
			this->Controls->Add(this->label3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datasss))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Retrieve data from textboxes
		String^ nombre = Nombre->Text;
		String^ pass = Pass->Text;
		String^ userRol = rol->Text; // Changed variable name to avoid conflict
		String^ departamento = dep->Text;

		// Basic validation: Check if fields are empty
		if (String::IsNullOrWhiteSpace(nombre) || String::IsNullOrWhiteSpace(pass) || String::IsNullOrWhiteSpace(userRol) || String::IsNullOrWhiteSpace(departamento)) {
			MessageBox::Show("Por favor, llene todos los campos.", "Error de entrada", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (button1->Text == "Guardar")
		{
			try {
				this->data->AbrirConeccion(); // Opens connection
				// Using parameterized queries to prevent SQL injection.
				String^ query = "INSERT INTO user (user, clave, rol, departamento) VALUES (@user, @clave, @rol, @departamento)";
				MySql::Data::MySqlClient::MySqlCommand^ cmd = gcnew MySql::Data::MySqlClient::MySqlCommand(query, this->data->GetConnection());
				cmd->Parameters->AddWithValue("@user", nombre);
				cmd->Parameters->AddWithValue("@clave", pass);
				cmd->Parameters->AddWithValue("@rol", userRol);
				cmd->Parameters->AddWithValue("@departamento", departamento);

				int result = cmd->ExecuteNonQuery();

				if (result > 0) {
					MessageBox::Show("Usuario agregado exitosamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
					// Clear fields after successful insertion
					Nombre->Clear();
					Pass->Clear();
					rol->Clear();
					dep->Clear();
					// Refresh DataGridView
					Consulta();
				}
				else {
					MessageBox::Show("No se pudo agregar el usuario.", "Error de base de datos", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			catch (MySql::Data::MySqlClient::MySqlException^ ex) {
				MessageBox::Show("Error de base de datos: " + ex->Message, "Error de base de datos", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Ocurrió un error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally {
				if (this->data != nullptr) {
					this->data->CerrarConeccion(); // Closes connection after insert attempt
				}
			}
		}
		else // button1->Text == "Actualizar"
		{
			try {
				this->data->AbrirConeccion(); // Opens connection
				// Using parameterized queries to prevent SQL injection.
				String^ userId = datasss->SelectedRows[0]->Cells[0]->Value->ToString();
				this->data->updateUser(userId, nombre, pass, userRol, departamento);

				MessageBox::Show("Usuario actualizado exitosamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
				// Clear fields after successful insertion
				Nombre->Clear();
				Pass->Clear();
				rol->Clear();
				dep->Clear();
				// Refresh DataGridView
				Consulta();
				// Change the button text back to "Guardar"
				button1->Text = "Guardar";
			}
			catch (MySql::Data::MySqlClient::MySqlException^ ex) {
				MessageBox::Show("Error de base de datos: " + ex->Message, "Error de base de datos", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Ocurrió un error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally {
				if (this->data != nullptr) {
					this->data->CerrarConeccion(); // Closes connection after insert attempt
				}
			}
		}
	}
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		// Load data when the form loads
		Consulta();
	}
	public: void Consulta() {
		try {
			this->data->AbrirConeccion(); // Opens connection
			this->datasss->DataSource = this->data->getData(); // getData presumably uses the open connection
		}
		catch (Exception^ ex) {
			// If error occurs here, connection might remain open if CerrarConeccion is not called in finally by getData or similar
			MessageBox::Show("Error al cargar datos: " + ex->Message, "Error de carga de datos", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			if (this->data != nullptr) {
				this->data->CerrarConeccion(); // Closes connection after fetching data
			}
		}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (datasss->SelectedRows->Count > 0)
		{
			// Get the data from the selected row
			String^ nombre = datasss->SelectedRows[0]->Cells[1]->Value->ToString();
			String^ pass = datasss->SelectedRows[0]->Cells[2]->Value->ToString();
			String^ userRol = datasss->SelectedRows[0]->Cells[3]->Value->ToString();
			String^ departamento = datasss->SelectedRows[0]->Cells[4]->Value->ToString();

			// Populate the text boxes with the data
			Nombre->Text = nombre;
			Pass->Text = pass;
			rol->Text = userRol;
			dep->Text = departamento;

			// Change the "Guardar" button's text to "Actualizar"
			button1->Text = "Actualizar";
		}
		else
		{
			MessageBox::Show("Please select a user to modify.", "No user selected", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
};
}
