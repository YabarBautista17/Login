#pragma once
using namespace std;
using namespace System::Data;
using namespace System;
using namespace MySql::Data::MySqlClient;

ref class db
{
private:
	String^ connectionString;
	MySqlConnection^ conn;
public:
	db();
	DataTable^ getData();
	void AbrirConeccion();
	void CerrarConeccion();
	void deleteUser(String^ userId);
	void updateUser(String^ userId, String^ nombre, String^ clave, String^ rol, String^ departamento);
	MySqlConnection^ GetConnection() { return conn; } // Added GetConnection method
};

