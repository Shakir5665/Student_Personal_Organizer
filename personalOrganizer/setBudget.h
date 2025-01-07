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
	/// Summary for setBudget
	/// </summary>
	public ref class setBudget : public System::Windows::Forms::Form
	{
	public:
		setBudget(void)
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
		~setBudget()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ headBudget;



	private: System::Windows::Forms::Button^ btSubmit;
	private: System::Windows::Forms::Button^ btClose;
	private: System::Windows::Forms::Label^ lbCategory;

	private: System::Windows::Forms::TextBox^ tbBudgetLimit;



	private: System::Windows::Forms::Label^ lbBudgetLimit;
	private: System::Windows::Forms::ListBox^ lstcategory;





































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(setBudget::typeid));
			this->headBudget = (gcnew System::Windows::Forms::Label());
			this->btSubmit = (gcnew System::Windows::Forms::Button());
			this->btClose = (gcnew System::Windows::Forms::Button());
			this->lbCategory = (gcnew System::Windows::Forms::Label());
			this->tbBudgetLimit = (gcnew System::Windows::Forms::TextBox());
			this->lbBudgetLimit = (gcnew System::Windows::Forms::Label());
			this->lstcategory = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// headBudget
			// 
			this->headBudget->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->headBudget->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->headBudget->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->headBudget->Location = System::Drawing::Point(-5, -4);
			this->headBudget->Name = L"headBudget";
			this->headBudget->Size = System::Drawing::Size(825, 80);
			this->headBudget->TabIndex = 1;
			this->headBudget->Text = L"Budget Allocation";
			this->headBudget->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btSubmit
			// 
			this->btSubmit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btSubmit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btSubmit->ForeColor = System::Drawing::Color::White;
			this->btSubmit->Location = System::Drawing::Point(554, 295);
			this->btSubmit->Name = L"btSubmit";
			this->btSubmit->Size = System::Drawing::Size(89, 42);
			this->btSubmit->TabIndex = 3;
			this->btSubmit->Text = L"Submit";
			this->btSubmit->UseVisualStyleBackColor = false;
			this->btSubmit->Click += gcnew System::EventHandler(this, &setBudget::btSubmit_Click);
			// 
			// btClose
			// 
			this->btClose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btClose->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btClose->ForeColor = System::Drawing::Color::White;
			this->btClose->Location = System::Drawing::Point(649, 295);
			this->btClose->Name = L"btClose";
			this->btClose->Size = System::Drawing::Size(97, 41);
			this->btClose->TabIndex = 6;
			this->btClose->Text = L"Close";
			this->btClose->UseVisualStyleBackColor = false;
			this->btClose->Click += gcnew System::EventHandler(this, &setBudget::btClose_Click);
			// 
			// lbCategory
			// 
			this->lbCategory->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->lbCategory->ForeColor = System::Drawing::SystemColors::Info;
			this->lbCategory->Location = System::Drawing::Point(30, 152);
			this->lbCategory->Name = L"lbCategory";
			this->lbCategory->Size = System::Drawing::Size(206, 38);
			this->lbCategory->TabIndex = 7;
			this->lbCategory->Text = L"Category";
			// 
			// tbBudgetLimit
			// 
			this->tbBudgetLimit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->tbBudgetLimit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbBudgetLimit->ForeColor = System::Drawing::SystemColors::Info;
			this->tbBudgetLimit->Location = System::Drawing::Point(284, 218);
			this->tbBudgetLimit->Name = L"tbBudgetLimit";
			this->tbBudgetLimit->Size = System::Drawing::Size(462, 43);
			this->tbBudgetLimit->TabIndex = 2;
			// 
			// lbBudgetLimit
			// 
			this->lbBudgetLimit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->lbBudgetLimit->ForeColor = System::Drawing::SystemColors::Info;
			this->lbBudgetLimit->Location = System::Drawing::Point(30, 221);
			this->lbBudgetLimit->Name = L"lbBudgetLimit";
			this->lbBudgetLimit->Size = System::Drawing::Size(207, 38);
			this->lbBudgetLimit->TabIndex = 9;
			this->lbBudgetLimit->Text = L"Budget Limit";
			// 
			// lstcategory
			// 
			this->lstcategory->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->lstcategory->ForeColor = System::Drawing::SystemColors::Info;
			this->lstcategory->FormattingEnabled = true;
			this->lstcategory->ItemHeight = 37;
			this->lstcategory->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Food", L"Entertainment", L"Clothing", L"Travelling",
					L"University Fee", L"Educational Fee"
			});
			this->lstcategory->Location = System::Drawing::Point(284, 152);
			this->lstcategory->Name = L"lstcategory";
			this->lstcategory->Size = System::Drawing::Size(462, 41);
			this->lstcategory->TabIndex = 1;
			// 
			// setBudget
			// 
			this->AcceptButton = this->btSubmit;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->CancelButton = this->btClose;
			this->ClientSize = System::Drawing::Size(815, 439);
			this->Controls->Add(this->lstcategory);
			this->Controls->Add(this->tbBudgetLimit);
			this->Controls->Add(this->lbBudgetLimit);
			this->Controls->Add(this->lbCategory);
			this->Controls->Add(this->btClose);
			this->Controls->Add(this->btSubmit);
			this->Controls->Add(this->headBudget);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"setBudget";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Set Budget";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		String^ UID = personalOrganizer::loginForm::UID;

	private: System::Void lbCategory_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void btSubmit_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ category = lstcategory->Text;
	String^ bLimit = tbBudgetLimit->Text;

	
	try {
		String^ connString = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
		SqlConnection sqlconn(connString);
		sqlconn.Open();

		String^ sqlQuery = "UPDATE Budget SET [Budget Limit] = @lmt WHERE UserID =@uid AND Category = @cat;";
		SqlCommand command(sqlQuery, % sqlconn); 
							
		command.Parameters->AddWithValue("@cat",category);  
		command.Parameters->AddWithValue("@lmt",bLimit); 
		command.Parameters->AddWithValue("@uid",UID); 
		
		command.ExecuteNonQuery();

		MessageBox::Show("Update Successful..!","Success",MessageBoxButtons::OK);
		this->Close(); 

	}
	catch (Exception^ exe) {
		MessageBox::Show("Error: " + exe->Message,"Error",MessageBoxButtons::OK);
	}   
	

}
};
}
