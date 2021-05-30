#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;

[STAThread]
int main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	ExampleCPP::MyForm form;
	Application::Run(% form);
}

System::Void ExampleCPP::MyForm::ExitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void ExampleCPP::MyForm::AboutProgramToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("This program shows simple work of Windows Forms c++ and ACCESS.", "Warning!");

	return System::Void();
}

System::Void ExampleCPP::MyForm::button_download_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "SELECT * FROM Table1";
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);
	OleDbDataReader^ dbReader = dbComand->ExecuteReader();

	if (dbReader->HasRows == false) {
		MessageBox::Show("Error in reading the DB!", "Error!");
	}
	else {
		while (dbReader->Read()) {
			dataGridView1->Rows->Add(dbReader["Surname"], dbReader["Name"], dbReader["Fathername"], dbReader["Group"], dbReader["Math"], dbReader["English"], dbReader["SoftDev"]);
		}
	}

	dbReader->Close();
	dbConnection->Close();

	return System::Void();
}

System::Void ExampleCPP::MyForm::button_add_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView1->SelectedRows->Count != 1) {
		MessageBox::Show("Choose one string for addition!", "Warning!");
		return;
	}

	int index = dataGridView1->SelectedRows[0]->Index;

	if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[3]->Value == nullptr) {
		MessageBox::Show("Not all data entered!", "Warning!");
		return;
	}

	String^ surname = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
	String^ name = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
	String^ fathername = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
	String^ group = dataGridView1->Rows[index]->Cells[3]->Value->ToString();
	String^ math = dataGridView1->Rows[index]->Cells[4]->Value->ToString();
	String^ english = dataGridView1->Rows[index]->Cells[5]->Value->ToString();
	String^ softdev = dataGridView1->Rows[index]->Cells[6]->Value->ToString();

	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "INSERT INTO Table1 VALUES ('" + surname + "', '" + name + "', '" + fathername + "', '" + group + "', '" + math + "', '" + english + "', '" + softdev + "')";
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);

	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Error in request execution!", "Error!");
	else
		MessageBox::Show("Data is added!", "Done!");

	dbConnection->Close();

	return System::Void();
}

System::Void ExampleCPP::MyForm::button_update_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView1->SelectedRows->Count != 1) {
		MessageBox::Show("Choose one string for addition!", "Warning!");
		return;
	}

	int index = dataGridView1->SelectedRows[0]->Index;

	if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[3]->Value == nullptr) {
		MessageBox::Show("Not all data entered!", "Warning!");
		return;
	}

	String^ surname = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
	String^ name = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
	String^ fathername = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
	String^ group = dataGridView1->Rows[index]->Cells[3]->Value->ToString();
	String^ math = dataGridView1->Rows[index]->Cells[4]->Value->ToString();
	String^ english = dataGridView1->Rows[index]->Cells[5]->Value->ToString();
	String^ softdev = dataGridView1->Rows[index]->Cells[6]->Value->ToString();

	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "UPDATE Table1 SET Surname='" + surname + "', Name = '" + name + "', Group='" + group + "', Math='" + math +
					"', English='" + english + "', SoftDev='" + softdev + "' WHERE surname = '" + surname + "'";
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);

	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Error in request execution!", "Error!");
	else
		MessageBox::Show("Data is changed!", "Done!");

	dbConnection->Close();

	return System::Void();
}

System::Void ExampleCPP::MyForm::button_delete_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView1->SelectedRows->Count != 1) {
		MessageBox::Show("Choose one string for addition!", "Warning!");
		return;
	}

	int index = dataGridView1->SelectedRows[0]->Index;

	if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr)
	{
		MessageBox::Show("Not all data entered!", "Warning!");
		return;
	}

	String^ surname = dataGridView1->Rows[index]->Cells[0]->Value->ToString();

	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "DELETE FROM Table1 WHERE surname = " + surname;
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);

	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Error in request execution!", "Error!");
	else {
		MessageBox::Show("Data is deleted!", "Done!");
		dataGridView1->Rows->RemoveAt(index);
	}

	dbConnection->Close();

	return System::Void();
}