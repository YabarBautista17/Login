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
	void updateUser(String^ userId, String^ nombre, String^ pass, String^ userRol, String^ departamento);
	MySqlConnection^ GetConnection() { return conn; } // Added GetConnection method
};

