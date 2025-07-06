#include "db.h"
#include "MyForm1.h"
db::db() {
	this->connectionString = "datasource = localhost; username=root; password=Y1r0J@v1dT3thh3?""; database = db-log; ";
	this->conn = gcnew MySqlConnection(this->connectionString);

}

void db::AbrirConeccion() {
	this->conn->Open();
}

void db::CerrarConeccion() {
	this->conn->Close();
}



DataTable^ db::getData() {
	String^ sql = "select * from user";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}