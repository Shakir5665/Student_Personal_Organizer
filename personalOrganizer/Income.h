#pragma once
#include "loginForm.h"
namespace personalOrganizer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Income
	/// </summary>
	public ref class Income : public System::Windows::Forms::Form
	{
	public:
		Income(void)
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
		~Income()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbIncome;
	private: System::Windows::Forms::Label^ lbDate;
	private: System::Windows::Forms::Label^ lbSource;
	private: System::Windows::Forms::Label^ lbAmount;
	private: System::Windows::Forms::TextBox^ tbAmount;
	private: System::Windows::Forms::TextBox^ tbSource;

	private: System::Windows::Forms::Button^ btSubmit;
	private: System::Windows::Forms::Button^ btClose;
	private: System::Windows::Forms::DateTimePicker^ datePicker1;




	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Income::typeid));
			this->lbIncome = (gcnew System::Windows::Forms::Label());
			this->lbDate = (gcnew System::Windows::Forms::Label());
			this->lbSource = (gcnew System::Windows::Forms::Label());
			this->lbAmount = (gcnew System::Windows::Forms::Label());
			this->tbAmount = (gcnew System::Windows::Forms::TextBox());
			this->tbSource = (gcnew System::Windows::Forms::TextBox());
			this->btSubmit = (gcnew System::Windows::Forms::Button());
			this->btClose = (gcnew System::Windows::Forms::Button());
			this->datePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// lbIncome
			// 
			this->lbIncome->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->lbIncome->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbIncome->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbIncome->Location = System::Drawing::Point(3, -1);
			this->lbIncome->Name = L"lbIncome";
			this->lbIncome->Size = System::Drawing::Size(870, 68);
			this->lbIncome->TabIndex = 0;
			this->lbIncome->Text = L"Add Your Income";
			this->lbIncome->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbDate
			// 
			this->lbDate->AutoSize = true;
			this->lbDate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->lbDate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDate->ForeColor = System::Drawing::SystemColors::Info;
			this->lbDate->Location = System::Drawing::Point(30, 138);
			this->lbDate->Name = L"lbDate";
			this->lbDate->Size = System::Drawing::Size(79, 38);
			this->lbDate->TabIndex = 1;
			this->lbDate->Text = L"Date";
			// 
			// lbSource
			// 
			this->lbSource->AutoSize = true;
			this->lbSource->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->lbSource->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSource->ForeColor = System::Drawing::SystemColors::Info;
			this->lbSource->Location = System::Drawing::Point(30, 215);
			this->lbSource->Name = L"lbSource";
			this->lbSource->Size = System::Drawing::Size(106, 38);
			this->lbSource->TabIndex = 2;
			this->lbSource->Text = L"Source";
			// 
			// lbAmount
			// 
			this->lbAmount->AutoSize = true;
			this->lbAmount->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->lbAmount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAmount->ForeColor = System::Drawing::SystemColors::Info;
			this->lbAmount->Location = System::Drawing::Point(30, 300);
			this->lbAmount->Name = L"lbAmount";
			this->lbAmount->Size = System::Drawing::Size(125, 38);
			this->lbAmount->TabIndex = 4;
			this->lbAmount->Text = L"Amount";
			// 
			// tbAmount
			// 
			this->tbAmount->BackColor = System::Drawing::SystemColors::MenuText;
			this->tbAmount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbAmount->ForeColor = System::Drawing::SystemColors::Info;
			this->tbAmount->Location = System::Drawing::Point(199, 297);
			this->tbAmount->Name = L"tbAmount";
			this->tbAmount->Size = System::Drawing::Size(587, 43);
			this->tbAmount->TabIndex = 3;
			// 
			// tbSource
			// 
			this->tbSource->BackColor = System::Drawing::SystemColors::MenuText;
			this->tbSource->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbSource->ForeColor = System::Drawing::SystemColors::Info;
			this->tbSource->Location = System::Drawing::Point(199, 212);
			this->tbSource->Name = L"tbSource";
			this->tbSource->Size = System::Drawing::Size(587, 43);
			this->tbSource->TabIndex = 2;
			// 
			// btSubmit
			// 
			this->btSubmit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btSubmit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btSubmit->ForeColor = System::Drawing::Color::White;
			this->btSubmit->Location = System::Drawing::Point(583, 372);
			this->btSubmit->Name = L"btSubmit";
			this->btSubmit->Size = System::Drawing::Size(101, 42);
			this->btSubmit->TabIndex = 4;
			this->btSubmit->Text = L"Submit";
			this->btSubmit->UseVisualStyleBackColor = false;
			this->btSubmit->Click += gcnew System::EventHandler(this, &Income::btSubmit_Click);
			// 
			// btClose
			// 
			this->btClose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btClose->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btClose->ForeColor = System::Drawing::Color::White;
			this->btClose->Location = System::Drawing::Point(690, 372);
			this->btClose->Name = L"btClose";
			this->btClose->Size = System::Drawing::Size(96, 42);
			this->btClose->TabIndex = 9;
			this->btClose->Text = L"Close";
			this->btClose->UseVisualStyleBackColor = false;
			this->btClose->Click += gcnew System::EventHandler(this, &Income::btClose_Click);
			// 
			// datePicker1
			// 
			this->datePicker1->CalendarForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->datePicker1->CalendarMonthBackground = System::Drawing::SystemColors::HighlightText;
			this->datePicker1->CalendarTitleBackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->datePicker1->CalendarTitleForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->datePicker1->CalendarTrailingForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->datePicker1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->datePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->datePicker1->Location = System::Drawing::Point(199, 133);
			this->datePicker1->Name = L"datePicker1";
			this->datePicker1->Size = System::Drawing::Size(237, 43);
			this->datePicker1->TabIndex = 1;
			// 
			// Income
			// 
			this->AcceptButton = this->btSubmit;
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->CancelButton = this->btClose;
			this->ClientSize = System::Drawing::Size(872, 515);
			this->Controls->Add(this->datePicker1);
			this->Controls->Add(this->btClose);
			this->Controls->Add(this->btSubmit);
			this->Controls->Add(this->tbSource);
			this->Controls->Add(this->tbAmount);
			this->Controls->Add(this->lbAmount);
			this->Controls->Add(this->lbSource);
			this->Controls->Add(this->lbDate);
			this->Controls->Add(this->lbIncome);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Income";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" Income Source";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	String^ UID = personalOrganizer::loginForm::UID;

	private: System::Void btClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void btSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ date = datePicker1->Text;
	String^ src = tbSource->Text;
	String^ amount = tbAmount->Text;

	if (date->Length == 0 || src->Length == 0 || amount->Length == 0)
	{
		MessageBox::Show("Please fill all credintials..","Incomplete",MessageBoxButtons::OK);
	}

	try {
		String^ connString = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
		SqlConnection sqlconn(connString);
		sqlconn.Open();

		String^ sqlQuery = "INSERT INTO Income" + "(UserID,Date,Source,Amount)" + "VALUES (@uid,@dt,@src,@amnt);";
		SqlCommand command(sqlQuery, % sqlconn);

		command.Parameters->AddWithValue("@uid",UID); 
		command.Parameters->AddWithValue("@dt",date);
		command.Parameters->AddWithValue("@src",src);
		command.Parameters->AddWithValue("@amnt",amount);

		command.ExecuteNonQuery(); 

		MessageBox::Show("Successful Update", "Success", MessageBoxButtons::OK);
		this->Close();
	}

	catch (Exception^ exe) {
		MessageBox::Show("Error: " + exe->Message,"Update error",MessageBoxButtons::OK);
	}

	// Calculating total Income and Updating Total income column in Financial_Report table.

	String^ connectionString = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
	SqlConnection sqlconnection(connectionString);
	sqlconnection.Open();
	String^ sqlTotalQuery1 = "SELECT SUM(Amount) FROM Income WHERE UserID = @uid;";
	SqlCommand TotalCommand1(sqlTotalQuery1, % sqlconnection);
	TotalCommand1.Parameters->AddWithValue("@uid",UID);

	Object^ Tamount = TotalCommand1.ExecuteScalar();
	double totalIncome = (Tamount == nullptr) ? 0.00 : Convert::ToDouble(Tamount);

	try {
		String^ ConnString = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
		SqlConnection SqlConn(ConnString);
		SqlConn.Open();

		String^ SqlQuery = "UPDATE  Financial_Report SET [Total_Income]=@tIncome;";

		SqlCommand command(SqlQuery, % SqlConn);

		command.Parameters->AddWithValue("@tIncome",totalIncome);
		command.ExecuteNonQuery();

	}
	catch (Exception^ ex) {
		MessageBox::Show("Error" + ex->Message), "Update failed..", MessageBoxButtons::OK;

	}

	
	// Updating savings to Monthly Report Table

	String^ ConnectionString = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
	SqlConnection sqlConnection(ConnectionString);
	sqlConnection.Open();
	String^ sqlSavingsQuery = "SELECT [Total_Income] - [Total_Expence] FROM Financial_Report WHERE UserID = @uid;";
	SqlCommand savingsCommand(sqlSavingsQuery, % sqlConnection);
	savingsCommand.Parameters->AddWithValue("@uid",UID);
	Object^ Samount = savingsCommand.ExecuteScalar();
	double Savings = (Samount == System::DBNull::Value) ? 0.0 : Convert::ToDouble(Samount);  

	try {
		String^ connString = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
		SqlConnection SqlConn1(connString);
		SqlConn1.Open();

		String^ SqlQuery1 = "UPDATE  Financial_Report SET [Current_Savings] = @tSavings WHERE UserID = @uid;";

		SqlCommand command(SqlQuery1, % SqlConn1);
		command.Parameters->AddWithValue("@uid",UID);
		command.Parameters->AddWithValue("@tSavings", Savings);
		command.ExecuteNonQuery();

	}
	catch (Exception^ ex) {
		MessageBox::Show("Error" + ex->Message), "Update failed..", MessageBoxButtons::OK;

	} 
	


}
};
}
