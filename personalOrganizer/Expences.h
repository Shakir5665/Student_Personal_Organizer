#pragma once
#include "setBudget.h"
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
	/// Summary for Expences
	/// </summary>
	public ref class Expences : public System::Windows::Forms::Form
	{
	public:
		Expences(void)
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
		~Expences()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Head_Expences;
	private: System::Windows::Forms::Label^ lbDate;



	private: System::Windows::Forms::Label^ lbcategory;
	private: System::Windows::Forms::TextBox^ tbAmount;


	private: System::Windows::Forms::Label^ lbAmount;
	private: System::Windows::Forms::TextBox^ tbDescription;


	private: System::Windows::Forms::Label^ lbDescription;
	private: System::Windows::Forms::Button^ btSubmit;
	private: System::Windows::Forms::Button^ btClose;
	private: System::Windows::Forms::ListBox^ listBoxCategory;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Expences::typeid));
			this->Head_Expences = (gcnew System::Windows::Forms::Label());
			this->lbDate = (gcnew System::Windows::Forms::Label());
			this->lbcategory = (gcnew System::Windows::Forms::Label());
			this->tbAmount = (gcnew System::Windows::Forms::TextBox());
			this->lbAmount = (gcnew System::Windows::Forms::Label());
			this->tbDescription = (gcnew System::Windows::Forms::TextBox());
			this->lbDescription = (gcnew System::Windows::Forms::Label());
			this->btSubmit = (gcnew System::Windows::Forms::Button());
			this->btClose = (gcnew System::Windows::Forms::Button());
			this->listBoxCategory = (gcnew System::Windows::Forms::ListBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// Head_Expences
			// 
			this->Head_Expences->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->Head_Expences->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Head_Expences->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Head_Expences->Location = System::Drawing::Point(-8, -3);
			this->Head_Expences->Name = L"Head_Expences";
			this->Head_Expences->Size = System::Drawing::Size(1019, 90);
			this->Head_Expences->TabIndex = 0;
			this->Head_Expences->Text = L"Add Your Expence";
			this->Head_Expences->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbDate
			// 
			this->lbDate->AutoSize = true;
			this->lbDate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->lbDate->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDate->ForeColor = System::Drawing::SystemColors::Info;
			this->lbDate->Location = System::Drawing::Point(65, 145);
			this->lbDate->Name = L"lbDate";
			this->lbDate->Size = System::Drawing::Size(79, 38);
			this->lbDate->TabIndex = 1;
			this->lbDate->Text = L"Date";
			// 
			// lbcategory
			// 
			this->lbcategory->AutoSize = true;
			this->lbcategory->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->lbcategory->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbcategory->ForeColor = System::Drawing::SystemColors::Info;
			this->lbcategory->Location = System::Drawing::Point(65, 295);
			this->lbcategory->Name = L"lbcategory";
			this->lbcategory->Size = System::Drawing::Size(136, 38);
			this->lbcategory->TabIndex = 3;
			this->lbcategory->Text = L"Category";
			// 
			// tbAmount
			// 
			this->tbAmount->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->tbAmount->ForeColor = System::Drawing::SystemColors::Info;
			this->tbAmount->Location = System::Drawing::Point(271, 366);
			this->tbAmount->Name = L"tbAmount";
			this->tbAmount->Size = System::Drawing::Size(660, 43);
			this->tbAmount->TabIndex = 4;
			// 
			// lbAmount
			// 
			this->lbAmount->AutoSize = true;
			this->lbAmount->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->lbAmount->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAmount->ForeColor = System::Drawing::SystemColors::Info;
			this->lbAmount->Location = System::Drawing::Point(65, 371);
			this->lbAmount->Name = L"lbAmount";
			this->lbAmount->Size = System::Drawing::Size(122, 38);
			this->lbAmount->TabIndex = 5;
			this->lbAmount->Text = L"Amount";
			// 
			// tbDescription
			// 
			this->tbDescription->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->tbDescription->ForeColor = System::Drawing::SystemColors::Info;
			this->tbDescription->Location = System::Drawing::Point(271, 215);
			this->tbDescription->Name = L"tbDescription";
			this->tbDescription->Size = System::Drawing::Size(660, 43);
			this->tbDescription->TabIndex = 2;
			// 
			// lbDescription
			// 
			this->lbDescription->AutoSize = true;
			this->lbDescription->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->lbDescription->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDescription->ForeColor = System::Drawing::SystemColors::Info;
			this->lbDescription->Location = System::Drawing::Point(65, 218);
			this->lbDescription->Name = L"lbDescription";
			this->lbDescription->Size = System::Drawing::Size(169, 38);
			this->lbDescription->TabIndex = 7;
			this->lbDescription->Text = L"Description";
			// 
			// btSubmit
			// 
			this->btSubmit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btSubmit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btSubmit->ForeColor = System::Drawing::SystemColors::Info;
			this->btSubmit->Location = System::Drawing::Point(743, 435);
			this->btSubmit->Name = L"btSubmit";
			this->btSubmit->Size = System::Drawing::Size(91, 46);
			this->btSubmit->TabIndex = 5;
			this->btSubmit->Text = L"Submit";
			this->btSubmit->UseVisualStyleBackColor = false;
			this->btSubmit->Click += gcnew System::EventHandler(this, &Expences::btSubmit_Click);
			// 
			// btClose
			// 
			this->btClose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btClose->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btClose->ForeColor = System::Drawing::SystemColors::Info;
			this->btClose->Location = System::Drawing::Point(840, 435);
			this->btClose->Name = L"btClose";
			this->btClose->Size = System::Drawing::Size(91, 46);
			this->btClose->TabIndex = 10;
			this->btClose->Text = L"Close";
			this->btClose->UseVisualStyleBackColor = false;
			this->btClose->Click += gcnew System::EventHandler(this, &Expences::button1_Click);
			// 
			// listBoxCategory
			// 
			this->listBoxCategory->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->listBoxCategory->ForeColor = System::Drawing::SystemColors::Info;
			this->listBoxCategory->FormattingEnabled = true;
			this->listBoxCategory->ItemHeight = 37;
			this->listBoxCategory->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Food", L"Entertainment", L"Travelling",
					L"Clothing", L"Educational Fee", L"University Fee"
			});
			this->listBoxCategory->Location = System::Drawing::Point(271, 292);
			this->listBoxCategory->Name = L"listBoxCategory";
			this->listBoxCategory->Size = System::Drawing::Size(660, 41);
			this->listBoxCategory->TabIndex = 3;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(271, 145);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(220, 43);
			this->dateTimePicker1->TabIndex = 1;
			// 
			// Expences
			// 
			this->AcceptButton = this->btSubmit;
			this->AutoScaleDimensions = System::Drawing::SizeF(15, 37);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->CancelButton = this->btClose;
			this->ClientSize = System::Drawing::Size(999, 536);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->listBoxCategory);
			this->Controls->Add(this->btClose);
			this->Controls->Add(this->btSubmit);
			this->Controls->Add(this->tbDescription);
			this->Controls->Add(this->lbDescription);
			this->Controls->Add(this->tbAmount);
			this->Controls->Add(this->lbAmount);
			this->Controls->Add(this->lbcategory);
			this->Controls->Add(this->lbDate);
			this->Controls->Add(this->Head_Expences);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Expences";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Expences";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	String^ UID = personalOrganizer::loginForm::UID;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void btSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ date = dateTimePicker1->Text;
	String^ desc = tbDescription->Text;
	String^ category = listBoxCategory->Text;
	String^ amount = tbAmount->Text;

	if (date->Length == 0 || desc->Length == 0 || amount->Length == 0 || category->Length == 0)
	{
		MessageBox::Show("Please fill all credintials..!","Attention",MessageBoxButtons::OK);
	}
	else {
		try {
			String^ connString = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
			SqlConnection sqlconn(connString);
			sqlconn.Open();

			String^ sqlQuery = "INSERT INTO Expences" + "(UserID,Date, Description, Category, Amount)" + "VALUES(@uid,@dt, @dec, @ctgr, @amt);";
			SqlCommand command(sqlQuery, % sqlconn);

			command.Parameters->AddWithValue("@uid", UID); 
			command.Parameters->AddWithValue("@dt", date);
			command.Parameters->AddWithValue("@dec", desc);
			command.Parameters->AddWithValue("@ctgr", category);
			command.Parameters->AddWithValue("@amt", amount);

			command.ExecuteNonQuery();

			MessageBox::Show("Successful Update", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information); 
			this->Close();

		}

		catch (Exception^ exe)
		{
			MessageBox::Show("Error: " + exe->Message, "Error", MessageBoxButtons::OK);
		}
	}

	// Calculating total Expences and Updating Total Expence column in Financial_Report table.

	String^ connectionStringN = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
	SqlConnection sqlconnectionN(connectionStringN);
	sqlconnectionN.Open();
	String^ sqlTotalQueryN = "SELECT SUM(Amount) FROM Expences WHERE UserID = @uid;";
	SqlCommand TotalCommandN(sqlTotalQueryN, % sqlconnectionN);
	TotalCommandN.Parameters->AddWithValue("@uid", UID);  

	Object^ Tamount = TotalCommandN.ExecuteScalar();
	double totalExpenceN = (Tamount == System::DBNull::Value) ? 0.0 : Convert::ToDouble(Tamount);

	try {
		String^ ConnStringN = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
		SqlConnection SqlConnN(ConnStringN);
		SqlConnN.Open();

		String^ SqlQueryN = "UPDATE  Financial_Report SET [Total_Expence]=@tExpence WHERE [UserID]=@uid;";

		SqlCommand commandN(SqlQueryN, % SqlConnN);
		commandN.Parameters->AddWithValue("@uid",UID); 
		commandN.Parameters->AddWithValue("@tExpence", totalExpenceN); 
		commandN.ExecuteNonQuery();

	}
	catch (Exception^ ex) {
		MessageBox::Show("Error" + ex->Message), "Update failed..", MessageBoxButtons::OK, MessageBoxIcon::Error;

	}

	
	//Updating total expence for Food into Financial_Report

	String^ connString = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
	SqlConnection sqlconn(connString);
	sqlconn.Open();
	String^ sqlSumQuery = "SELECT SUM(Amount) FROM Expences WHERE Category = 'Food' AND UserID = @uid;";
	SqlCommand sumCommand(sqlSumQuery, % sqlconn);
	sumCommand.Parameters->AddWithValue("@uid", UID);
	Object^ result = sumCommand.ExecuteScalar();
	double foodSum = (result == System::DBNull::Value) ? 0.0 : Convert::ToDouble(result);
	

	//Updating total expence for Entertainment into Financial_Report

	String^ connString1 = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;"; 
	SqlConnection sqlconn1(connString1); 
	sqlconn1.Open(); 
	String^ sqlSumQuery1 = "SELECT SUM(Amount) FROM Expences WHERE Category = 'Entertainment' AND UserID = @uid;";  
	SqlCommand sumCommand1(sqlSumQuery1, % sqlconn1);
	sumCommand1.Parameters->AddWithValue("@uid",UID);
	Object^ result1 = sumCommand1.ExecuteScalar(); 
	double entertainmentSum = (result1 == System::DBNull::Value) ? 0.0 : Convert::ToDouble(result1);
	

	// Updating total expence for Travelling into Financial_Report

	String^ connString2 = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
	SqlConnection sqlconn2(connString2);
	sqlconn2.Open();
	String^ sqlSumQuery2 = "SELECT SUM(Amount) FROM Expences WHERE Category = 'Travelling' AND UserID = @uid;";
	SqlCommand sumCommand2(sqlSumQuery2, % sqlconn2);
	sumCommand2.Parameters->AddWithValue("@uid",UID);
	Object^ result2 = sumCommand2.ExecuteScalar();
	double travelingSum = (result2 == System::DBNull::Value) ? 0.0 : Convert::ToDouble(result2);
	

	// Updating total expence for Clothing into Financial_Report

	String^ connString3 = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
	SqlConnection sqlconn3(connString3);
	sqlconn3.Open(); 
	String^ sqlSumQuery3 = "SELECT SUM(Amount) FROM Expences WHERE Category = 'Clothing' AND UserID = @uid;"; 
	SqlCommand sumCommand3(sqlSumQuery3, % sqlconn3); 
	sumCommand3.Parameters->AddWithValue("@uid",UID);
	Object^ result3 = sumCommand3.ExecuteScalar(); 
	double clothingSum = (result3 == System::DBNull::Value) ? 0.0 : Convert::ToDouble(result3);
	
	//Updating total expence for Education Fee into Financial_Report

	String^ connString4 = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;"; 
	SqlConnection sqlconn4(connString4); 
	sqlconn4.Open(); 
	String^ sqlSumQuery4 = "SELECT SUM(Amount) FROM Expences WHERE Category = 'Educational Fee' AND UserID = @uid;"; 
	SqlCommand sumCommand4(sqlSumQuery4, % sqlconn4); 
	sumCommand4.Parameters->AddWithValue("@uid",UID);
	Object^ result4 = sumCommand4.ExecuteScalar(); 
	double educationSum = (result4 == System::DBNull::Value) ? 0.0 : Convert::ToDouble(result4); 

	 
	//Updating total expence for University Fee into Financial_Report

	String^ connString5 = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;"; 
	SqlConnection sqlconn5(connString5); 
	sqlconn5.Open();
	String^ sqlSumQuery5 = "SELECT SUM(Amount) FROM Expences WHERE Category = 'University Fee' AND UserID = @uid;";
	SqlCommand sumCommand5(sqlSumQuery5, % sqlconn5); 
	sumCommand5.Parameters->AddWithValue("@uid",UID);
	Object^ result5 = sumCommand5.ExecuteScalar(); 
	double universitySum = (result5 == System::DBNull::Value) ? 0.0 : Convert::ToDouble(result5);

	

	//BUDGET Comparison For Food

	String^ conString1 = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
	SqlConnection sqlcon1(conString1);
	sqlcon1.Open();
	String^ sqlBgdQuery1 = "SELECT [Budget Limit] FROM Budget WHERE Category = 'Food' AND userID = @uid;"; 
	SqlCommand bgdCommand1(sqlBgdQuery1, % sqlcon1); 
	bgdCommand1.Parameters->AddWithValue("uid",UID);
	Object^ amount1 = bgdCommand1.ExecuteScalar();  
	double foodBgd = (amount1 == System::DBNull::Value) ? 0.0 : Convert::ToDouble(amount1); 

	if (foodSum > foodBgd)
	{
		MessageBox::Show("Your Budget for Food is Exceeded !! " , "Alert" , MessageBoxButtons::OK , MessageBoxIcon::Warning);
	}


	//BUDGET Comparison For Entertainment

	String^ conString2 = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
	SqlConnection sqlcon2(conString2);
	sqlcon2.Open();
	String^ sqlBgdQuery2 = "SELECT [Budget Limit] FROM Budget WHERE Category = 'Entertainment' AND userID = @uid;";
	SqlCommand bgdCommand2(sqlBgdQuery2, % sqlcon2);
	bgdCommand2.Parameters->AddWithValue("uid", UID);
	Object^ amount2 = bgdCommand2.ExecuteScalar();
	double entertainmentBgd = (amount2 == System::DBNull::Value) ? 0.0 : Convert::ToDouble(amount2); 

	if (entertainmentSum > entertainmentBgd)
	{
		MessageBox::Show("Your Budget for Entertainment is Exceeded !! ", "Alert", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

	//BUDGET Comparison For Clothing

	String^ conString3 = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
	SqlConnection sqlcon3(conString3);
	sqlcon3.Open();
	String^ sqlBgdQuery3 = "SELECT [Budget Limit] FROM Budget WHERE Category = 'Clothing' AND userID = @uid;";
	SqlCommand bgdCommand3(sqlBgdQuery3, % sqlcon3);
	bgdCommand3.Parameters->AddWithValue("uid", UID); 
	Object^ amount3 = bgdCommand3.ExecuteScalar();
	double clothingBdg = (amount3 == System::DBNull::Value) ? 0.0 : Convert::ToDouble(amount3); 

	if (clothingSum > clothingBdg) 
	{
		MessageBox::Show("Your Budget for Clothing is Exceeded !! ", "Alert", MessageBoxButtons::OK, MessageBoxIcon::Warning); 
	}

	
	//BUDGET Comparison For Travelling

	String^ conString4 = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;"; 
	SqlConnection sqlcon4(conString4);  
	sqlcon4.Open();  
	String^ sqlBgdQuery4 = "SELECT [Budget Limit] FROM Budget WHERE Category = 'Travelling' AND userID = @uid;";    
	SqlCommand bgdCommand4(sqlBgdQuery4, % sqlcon4);    
	bgdCommand4.Parameters->AddWithValue("uid", UID);     
	Object^ amount4 = bgdCommand4.ExecuteScalar(); 
	double travellingBdg = (amount4 == System::DBNull::Value) ? 0.0 : Convert::ToDouble(amount4);     

	if (travelingSum > travellingBdg)  
	{
		MessageBox::Show("Your Budget for Travelling is Exceeded !! ", "Alert", MessageBoxButtons::OK, MessageBoxIcon::Warning); 
	}

	//BUDGET Comparison For Educational Fee

	String^ conString5 = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;"; 
	SqlConnection sqlcon5(conString5);  
	sqlcon5.Open(); 
	String^ sqlBgdQuery5 = "SELECT [Budget Limit] FROM Budget WHERE Category = 'Educational Fee' AND userID = @uid;"; 
	SqlCommand bgdCommand5(sqlBgdQuery5, % sqlcon5);   
	bgdCommand5.Parameters->AddWithValue("uid", UID);  
	Object^ amount5 = bgdCommand5.ExecuteScalar();  
	double educationBdg = (amount5 == System::DBNull::Value) ? 0.0 : Convert::ToDouble(amount5); 

	if (educationSum > educationBdg)
	{
		MessageBox::Show("Your Budget for Educational Fee is Exceeded !! ", "Alert", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

	//BUDGET Comparison For University Fee

	String^ conString6 = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
	SqlConnection sqlcon6(conString6);
	sqlcon6.Open();
	String^ sqlBgdQuery6 = "SELECT [Budget Limit] FROM Budget WHERE Category = 'University Fee' AND userID = @uid;";
	SqlCommand bgdCommand6(sqlBgdQuery6, % sqlcon6);
	bgdCommand6.Parameters->AddWithValue("uid", UID);
	Object^ amount6 = bgdCommand6.ExecuteScalar();
	double universityBgd = (amount6 == System::DBNull::Value) ? 0.0 : Convert::ToDouble(amount6); 

	if (universitySum > universityBgd) 
	{
		MessageBox::Show("Your Budget for University Fee is Exceeded !! ", "Alert", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}


	//Updating Total Expence of every category to graphTable.

	try {
		String^ ConnString1 = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
		SqlConnection SqlConn1(ConnString1);
		SqlConn1.Open();

		String^ SqlQuery1 = "UPDATE Graph_Table SET Expence=@Food WHERE Category = 'Food' AND UserID = @uid;";

		SqlCommand command(SqlQuery1,%SqlConn1);
		command.Parameters->AddWithValue("@uid",UID);
		command.Parameters->AddWithValue("@Food", foodSum);
		command.ExecuteNonQuery();

	}
	catch(Exception^ ex){
		MessageBox::Show("Error" +ex->Message),"Update failed..",MessageBoxButtons::OK, MessageBoxIcon::Error;
	
	}

	try {
		String^ ConnString2 = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
		SqlConnection SqlConn2(ConnString2); 
		SqlConn2.Open(); 

		String^ SqlQuery2 = "UPDATE Graph_Table SET Expence=@Ent WHERE Category = 'Entertainment' AND UserID = @uid;";

		SqlCommand command(SqlQuery2, % SqlConn2);  
		command.Parameters->AddWithValue("@uid", UID);   
		command.Parameters->AddWithValue("@Ent", entertainmentSum); 
		command.ExecuteNonQuery(); 

	}
	catch (Exception^ ex) {
		MessageBox::Show("Error" + ex->Message), "Update failed..", MessageBoxButtons::OK, MessageBoxIcon::Error;

	}

	try {
		String^ ConnString3 = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
		SqlConnection SqlConn3(ConnString3); 
		SqlConn3.Open();

		String^ SqlQuery3 = "UPDATE Graph_Table SET Expence=@clt WHERE Category = 'Clothing' AND UserID = @uid;";

		SqlCommand command(SqlQuery3, % SqlConn3);
		command.Parameters->AddWithValue("@uid", UID);
		command.Parameters->AddWithValue("@clt", clothingSum);
		command.ExecuteNonQuery();

	}
	catch (Exception^ ex) {
		MessageBox::Show("Error" + ex->Message), "Update failed..", MessageBoxButtons::OK, MessageBoxIcon::Error; 

	}


	try {
		String^ ConnString4 = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
		SqlConnection SqlConn4(ConnString4);
		SqlConn4.Open();

		String^ SqlQuery4 = "UPDATE Graph_Table SET Expence=@trv WHERE Category = 'Travelling' AND UserID = @uid;";

		SqlCommand command(SqlQuery4, % SqlConn4);
		command.Parameters->AddWithValue("@uid", UID);
		command.Parameters->AddWithValue("@trv", travelingSum);
		command.ExecuteNonQuery();

	}
	catch (Exception^ ex) {
		MessageBox::Show("Error" + ex->Message), "Update failed..", MessageBoxButtons::OK, MessageBoxIcon::Error; 

	}


	try {
		String^ ConnString5 = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
		SqlConnection SqlConn5(ConnString5);
		SqlConn5.Open();

		String^ SqlQuery5 = "UPDATE Graph_Table SET Expence=@edu WHERE Category = 'Educational Fee' AND UserID = @uid;";

		SqlCommand command(SqlQuery5, % SqlConn5);
		command.Parameters->AddWithValue("@uid", UID);
		command.Parameters->AddWithValue("@edu", educationSum);
		command.ExecuteNonQuery();

	}
	catch (Exception^ ex) {
		MessageBox::Show("Error" + ex->Message), "Update failed..", MessageBoxButtons::OK, MessageBoxIcon::Error;  

	}



	try {
		String^ ConnString5 = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
		SqlConnection SqlConn5(ConnString5);
		SqlConn5.Open();

		String^ SqlQuery5 = "UPDATE Graph_Table SET Expence=@uni WHERE Category = 'University Fee' AND UserID = @uid;";

		SqlCommand command(SqlQuery5, % SqlConn5);
		command.Parameters->AddWithValue("@uid", UID);
		command.Parameters->AddWithValue("@uni", universitySum);
		command.ExecuteNonQuery();

	}
	catch (Exception^ ex) {
		MessageBox::Show("Error" + ex->Message), "Update failed..", MessageBoxButtons::OK, MessageBoxIcon::Error; 

	}
	

// Updating savings to Monthly Report Table

String^ ConnectionString = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
SqlConnection sqlConnection(ConnectionString); 
sqlConnection.Open();
String^ sqlSavingsQuery = "SELECT [Total_Income] - [Total_Expence] FROM Financial_Report WHERE UserID = @uid;";
SqlCommand savingsCommand(sqlSavingsQuery, % sqlConnection);
savingsCommand.Parameters->AddWithValue("@uid", UID);
Object^ Samount = savingsCommand.ExecuteScalar();
double Savings = (Samount == System::DBNull::Value) ? 0.0 : Convert::ToDouble(Samount); 

try {
	String^ connString = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
	SqlConnection SqlConn1(connString);
	SqlConn1.Open();

	String^ SqlQuery1 = "UPDATE  Financial_Report SET [Current_Savings] =@tSavings WHERE UserID = @uid;";

	SqlCommand command(SqlQuery1, % SqlConn1);
	command.Parameters->AddWithValue("@uid", UID);
	command.Parameters->AddWithValue("@tSavings", Savings);
	command.ExecuteNonQuery();

}
catch (Exception^ ex) {
	MessageBox::Show("Error" + ex->Message), "Update failed..", MessageBoxButtons::OK, MessageBoxIcon::Error; 

}	

}
};
}
