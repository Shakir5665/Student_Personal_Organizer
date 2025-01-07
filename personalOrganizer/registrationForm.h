#pragma once
#include "User.h"

namespace personalOrganizer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for registrationForm
	/// </summary>
	public ref class registrationForm : public System::Windows::Forms::Form
	{
	public:
		registrationForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~registrationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbRegistration;
	private: System::Windows::Forms::Label^ lbName;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::Label^ lbPassword;

	private: System::Windows::Forms::TextBox^ tbUsername;

	private: System::Windows::Forms::Label^ lbUsername;
	private: System::Windows::Forms::TextBox^ tbConfirmPswd;
	private: System::Windows::Forms::Label^ lbconfirmPswd;
	private: System::Windows::Forms::Button^ btnSubmit;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::LinkLabel^ lbLogin;
	private: System::Windows::Forms::Label^ lbLoginAsk;
	private: System::Windows::Forms::TextBox^ tbUserID;
	private: System::Windows::Forms::Label^ lbUserID;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(registrationForm::typeid));
			this->lbRegistration = (gcnew System::Windows::Forms::Label());
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->lbPassword = (gcnew System::Windows::Forms::Label());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->lbUsername = (gcnew System::Windows::Forms::Label());
			this->tbConfirmPswd = (gcnew System::Windows::Forms::TextBox());
			this->lbconfirmPswd = (gcnew System::Windows::Forms::Label());
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->lbLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->lbLoginAsk = (gcnew System::Windows::Forms::Label());
			this->tbUserID = (gcnew System::Windows::Forms::TextBox());
			this->lbUserID = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbRegistration
			// 
			this->lbRegistration->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbRegistration->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->lbRegistration->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbRegistration->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbRegistration->Location = System::Drawing::Point(-6, -2);
			this->lbRegistration->Name = L"lbRegistration";
			this->lbRegistration->Size = System::Drawing::Size(1299, 72);
			this->lbRegistration->TabIndex = 0;
			this->lbRegistration->Text = L"Register Here";
			this->lbRegistration->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbName
			// 
			this->lbName->AutoSize = true;
			this->lbName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->lbName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbName->ForeColor = System::Drawing::SystemColors::Info;
			this->lbName->Location = System::Drawing::Point(12, 196);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(103, 38);
			this->lbName->TabIndex = 1;
			this->lbName->Text = L"Name ";
			// 
			// tbName
			// 
			this->tbName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbName->BackColor = System::Drawing::SystemColors::WindowText;
			this->tbName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbName->ForeColor = System::Drawing::SystemColors::Info;
			this->tbName->Location = System::Drawing::Point(289, 196);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(984, 43);
			this->tbName->TabIndex = 2;
			// 
			// tbPassword
			// 
			this->tbPassword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbPassword->BackColor = System::Drawing::SystemColors::WindowText;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPassword->ForeColor = System::Drawing::SystemColors::Info;
			this->tbPassword->Location = System::Drawing::Point(289, 342);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(984, 43);
			this->tbPassword->TabIndex = 4;
			// 
			// lbPassword
			// 
			this->lbPassword->AutoSize = true;
			this->lbPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->lbPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPassword->ForeColor = System::Drawing::SystemColors::Info;
			this->lbPassword->Location = System::Drawing::Point(12, 342);
			this->lbPassword->Name = L"lbPassword";
			this->lbPassword->Size = System::Drawing::Size(139, 38);
			this->lbPassword->TabIndex = 3;
			this->lbPassword->Text = L"Password";
			// 
			// tbUsername
			// 
			this->tbUsername->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbUsername->BackColor = System::Drawing::SystemColors::WindowText;
			this->tbUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbUsername->ForeColor = System::Drawing::SystemColors::Info;
			this->tbUsername->Location = System::Drawing::Point(289, 268);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(984, 43);
			this->tbUsername->TabIndex = 3;
			// 
			// lbUsername
			// 
			this->lbUsername->AutoSize = true;
			this->lbUsername->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->lbUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUsername->ForeColor = System::Drawing::SystemColors::Info;
			this->lbUsername->Location = System::Drawing::Point(12, 268);
			this->lbUsername->Name = L"lbUsername";
			this->lbUsername->Size = System::Drawing::Size(156, 38);
			this->lbUsername->TabIndex = 5;
			this->lbUsername->Text = L"Username ";
			// 
			// tbConfirmPswd
			// 
			this->tbConfirmPswd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbConfirmPswd->BackColor = System::Drawing::SystemColors::WindowText;
			this->tbConfirmPswd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbConfirmPswd->ForeColor = System::Drawing::SystemColors::Info;
			this->tbConfirmPswd->Location = System::Drawing::Point(289, 418);
			this->tbConfirmPswd->Name = L"tbConfirmPswd";
			this->tbConfirmPswd->PasswordChar = '*';
			this->tbConfirmPswd->Size = System::Drawing::Size(984, 43);
			this->tbConfirmPswd->TabIndex = 5;
			// 
			// lbconfirmPswd
			// 
			this->lbconfirmPswd->AutoSize = true;
			this->lbconfirmPswd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->lbconfirmPswd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbconfirmPswd->ForeColor = System::Drawing::SystemColors::Info;
			this->lbconfirmPswd->Location = System::Drawing::Point(12, 421);
			this->lbconfirmPswd->Name = L"lbconfirmPswd";
			this->lbconfirmPswd->Size = System::Drawing::Size(254, 38);
			this->lbconfirmPswd->TabIndex = 7;
			this->lbconfirmPswd->Text = L"Confirm Password";
			// 
			// btnSubmit
			// 
			this->btnSubmit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnSubmit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubmit->ForeColor = System::Drawing::SystemColors::Control;
			this->btnSubmit->Location = System::Drawing::Point(1064, 608);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(104, 48);
			this->btnSubmit->TabIndex = 6;
			this->btnSubmit->Text = L"Submit";
			this->btnSubmit->UseVisualStyleBackColor = false;
			this->btnSubmit->Click += gcnew System::EventHandler(this, &registrationForm::btnSubmit_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->ForeColor = System::Drawing::SystemColors::Control;
			this->btnCancel->Location = System::Drawing::Point(1174, 608);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(99, 48);
			this->btnCancel->TabIndex = 10;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &registrationForm::btnCancel_Click);
			// 
			// lbLogin
			// 
			this->lbLogin->AutoSize = true;
			this->lbLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->lbLogin->LinkColor = System::Drawing::Color::Cyan;
			this->lbLogin->Location = System::Drawing::Point(107, 555);
			this->lbLogin->Name = L"lbLogin";
			this->lbLogin->Size = System::Drawing::Size(249, 32);
			this->lbLogin->TabIndex = 11;
			this->lbLogin->TabStop = true;
			this->lbLogin->Text = L"Click here to Login";
			this->lbLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &registrationForm::lbLogin_LinkClicked);
			// 
			// lbLoginAsk
			// 
			this->lbLoginAsk->AutoSize = true;
			this->lbLoginAsk->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->lbLoginAsk->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbLoginAsk->ForeColor = System::Drawing::SystemColors::Info;
			this->lbLoginAsk->Location = System::Drawing::Point(12, 503);
			this->lbLoginAsk->Name = L"lbLoginAsk";
			this->lbLoginAsk->Size = System::Drawing::Size(344, 38);
			this->lbLoginAsk->TabIndex = 12;
			this->lbLoginAsk->Text = L"Do you have an account\?";
			// 
			// tbUserID
			// 
			this->tbUserID->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbUserID->BackColor = System::Drawing::SystemColors::WindowText;
			this->tbUserID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbUserID->ForeColor = System::Drawing::SystemColors::Info;
			this->tbUserID->Location = System::Drawing::Point(289, 121);
			this->tbUserID->Name = L"tbUserID";
			this->tbUserID->Size = System::Drawing::Size(984, 43);
			this->tbUserID->TabIndex = 1;
			// 
			// lbUserID
			// 
			this->lbUserID->AutoSize = true;
			this->lbUserID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->lbUserID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUserID->ForeColor = System::Drawing::SystemColors::Info;
			this->lbUserID->Location = System::Drawing::Point(12, 121);
			this->lbUserID->Name = L"lbUserID";
			this->lbUserID->Size = System::Drawing::Size(113, 38);
			this->lbUserID->TabIndex = 13;
			this->lbUserID->Text = L"User ID";
			// 
			// registrationForm
			// 
			this->AcceptButton = this->btnSubmit;
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->CancelButton = this->btnCancel;
			this->ClientSize = System::Drawing::Size(1285, 691);
			this->Controls->Add(this->tbUserID);
			this->Controls->Add(this->lbUserID);
			this->Controls->Add(this->lbLoginAsk);
			this->Controls->Add(this->lbLogin);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSubmit);
			this->Controls->Add(this->tbConfirmPswd);
			this->Controls->Add(this->lbconfirmPswd);
			this->Controls->Add(this->tbUsername);
			this->Controls->Add(this->lbUsername);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->lbPassword);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->lbName);
			this->Controls->Add(this->lbRegistration);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(6);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"registrationForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"registrationForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: String^ UID;

	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

public: bool switchToLogin = false;
public: User1^ user = nullptr;

private: System::Void lbLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToLogin = true;
	this->Close();
}
	private: System::Void btnSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ userID = tbUserID->Text;
		String^ name = tbName->Text;
		String^ username = tbUsername->Text;
		String^ password = tbPassword->Text;
		String^ confirmPassword = tbConfirmPswd->Text;

		if (name->Length == 0 || username->Length == 0 || password->Length == 0 || confirmPassword->Length == 0) {
			MessageBox::Show("Please Enter Details for all Fields","Attentioin",MessageBoxButtons::OK);
			return;
		}
		if (String::Compare(password, confirmPassword) != 0) {
			MessageBox::Show("Password and Confirm Password is not matched","password Error",MessageBoxButtons::OK);
			return;
		}

		try {

			String^ connString = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
			SqlConnection sqlconn(connString);
			sqlconn.Open();

			String^ sqlQuery = "INSERT INTO Users" + "(UserID,Name, Username, Password)" + "VALUES(@uid,@n, @Un, @Pd);";

			SqlCommand command(sqlQuery,% sqlconn);
			command.Parameters->AddWithValue("@uid", userID);
			command.Parameters->AddWithValue("@n",name);
			command.Parameters->AddWithValue("@Un",username);
			command.Parameters->AddWithValue("@Pd",password);
			
			command.ExecuteNonQuery();
			user = gcnew User1;
			user->name = name;
			user->username = username;
			user->password = password;

			UID = userID; 

			this-> Close();

		}
		catch(Exception^ ex){
			MessageBox::Show("Error: " + ex->Message,"Register Failure",MessageBoxButtons::OK);
		}

	// Intializing UserID value in Budget table for SQL Query update purpose.

		try {
			String^ connString = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
			SqlConnection sqlconn(connString);
			sqlconn.Open();

			String^ sqlQuery = "INSERT INTO Budget (UserID,Category) VALUES (@uid,'Food')" 
								"INSERT INTO Budget (UserID,Category) VALUES (@uid,'Entertainment')"
								"INSERT INTO Budget (UserID,Category) VALUES (@uid,'Clothing')"
								"INSERT INTO Budget (UserID,Category) VALUES (@uid,'Travelling')"
								"INSERT INTO Budget (UserID,Category) VALUES (@uid,'Educational Fee')"
								"INSERT INTO Budget (UserID,Category) VALUES (@uid,'University Fee')";

			SqlCommand command(sqlQuery, % sqlconn);

			command.Parameters->AddWithValue("@uid", UID);
			command.ExecuteNonQuery();

		}

		catch (Exception^ exe)
		{
			MessageBox::Show("Error: " + exe->Message, "Error", MessageBoxButtons::OK);
		}


		// Intializing UserID value in Financial_report table table for SQL Query update purpose.

		try {
			String^ conString = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
			SqlConnection sqlconn(conString);
			sqlconn.Open();

			String^ sqlQuery = "INSERT INTO Financial_Report (UserID) VALUES (@uid);";
		
			SqlCommand command(sqlQuery, % sqlconn);

			command.Parameters->AddWithValue("@uid", UID);
			command.ExecuteNonQuery();

		}

		catch (Exception^ exe)
		{
			MessageBox::Show("Error: " + exe->Message, "Error", MessageBoxButtons::OK);
		}

		// Intializing UserID value in Graph_Table table for SQL Query update purpose.

		try {
			String^ connString = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
			SqlConnection sqlconn(connString);
			sqlconn.Open();

			String^ sqlQuery = "INSERT INTO Graph_Table (UserID,Category) VALUES (@uid,'Food')"
				"INSERT INTO Graph_Table (UserID,Category) VALUES (@uid,'Entertainment')"
				"INSERT INTO Graph_Table (UserID,Category) VALUES (@uid,'Clothing')"
				"INSERT INTO Graph_Table (UserID,Category) VALUES (@uid,'Travelling')"
				"INSERT INTO Graph_Table (UserID,Category) VALUES (@uid,'Educational Fee')"
				"INSERT INTO Graph_Table (UserID,Category) VALUES (@uid,'University Fee')";

			SqlCommand command(sqlQuery, % sqlconn);

			command.Parameters->AddWithValue("@uid", UID); 
			command.ExecuteNonQuery(); 

		}

		catch (Exception^ exe)
		{
			MessageBox::Show("Error: " + exe->Message, "Error", MessageBoxButtons::OK); 
		}



		// Intializing UserID value in Time_Table table for SQL Query update purpose.

		try {
			String^ connString = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
			SqlConnection sqlconn(connString);
			sqlconn.Open();

			String^ sqlQuery = "INSERT INTO Time_Table (UserID,Time) VALUES (@uid,'8.00 am')"
				"INSERT INTO Time_Table (UserID,Time) VALUES (@uid,'9.00 am')"
				"INSERT INTO Time_Table (UserID,Time) VALUES (@uid,'10.00 am')"
				"INSERT INTO Time_Table (UserID,Time) VALUES (@uid,'11.00 am')"
				"INSERT INTO Time_Table (UserID,Time) VALUES (@uid,'12.00 pm')"
				"INSERT INTO Time_Table (UserID,Time) VALUES (@uid,'1.00 pm')"
				"INSERT INTO Time_Table (UserID,Time) VALUES (@uid,'2.00 pm')"
				"INSERT INTO Time_Table (UserID,Time) VALUES (@uid,'3.00 pm')"
				"INSERT INTO Time_Table (UserID,Time) VALUES (@uid,'4.00 pm')"
				"INSERT INTO Time_Table (UserID,Time) VALUES (@uid,'5.00 pm')"
				"INSERT INTO Time_Table (UserID,Time) VALUES (@uid,'6.00 pm')";
				

			SqlCommand command(sqlQuery, % sqlconn);

			command.Parameters->AddWithValue("@uid", UID);
			command.ExecuteNonQuery();

		}

		catch (Exception^ exe)
		{
			MessageBox::Show("Error: " + exe->Message, "Error", MessageBoxButtons::OK);
		}
}
};
}
