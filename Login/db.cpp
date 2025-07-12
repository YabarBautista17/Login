#include "db.h"
#include "MyForm1.h"
db::db() {
	this->connectionString = "datasource = localhost; username=root; password=Y1r0J@v1dT3thh3?""; database = db-log; ";
	this->conn = gcnew MySqlConnection(this->connectionString);

}

void db::AbrirConeccion() {
	if (this->conn != nullptr && this->conn->State != ConnectionState::Open) {
		try {
			this->conn->Open();
		}
		catch (MySqlException^ ex) {
			// Optional: Log exception or handle as needed
			// For now, rethrow to make the caller aware.
			throw ex;
		}
	}
}

void db::CerrarConeccion() {
	if (this->conn != nullptr && this->conn->State == ConnectionState::Open) {
		try {
			this->conn->Close();
		}
		catch (MySqlException^ ex) {
			// Optional: Log exception or handle as needed
			throw ex;
		}
	}
}



DataTable^ db::getData() {
	// This method assumes the connection is managed (opened/closed) by the caller.
	// If it's not, it would need its own try/finally for Open/Close.
	String^ sql = "select * from user";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

void db::updateUser(String^ userId, String^ nombre, String^ pass, String^ userRol, String^ departamento) {
	String^ sql = "UPDATE user SET user = @user, clave = @clave, rol = @rol, departamento = @departamento WHERE id = @id";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	cursor->Parameters->AddWithValue("@id", userId);
	cursor->Parameters->AddWithValue("@user", nombre);
	cursor->Parameters->AddWithValue("@clave", pass);
	cursor->Parameters->AddWithValue("@rol", userRol);
	cursor->Parameters->AddWithValue("@departamento", departamento);
	cursor->ExecuteNonQuery();
}