#pragma once
#include "loginForm.h"
namespace personalOrganizer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Accademicschedule
	/// </summary>
	public ref class Accademicschedule : public System::Windows::Forms::Form
	{
	public:
		Accademicschedule(void)
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
		~Accademicschedule()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ toTime;
	protected:


	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::ListBox^ fromTime;


	private: System::Windows::Forms::DataGridView^ importantEventsTable;
	private: System::Windows::Forms::DataGridView^ timeTableGrid;

	private: System::Windows::Forms::Button^ btnSubmit;
	private: System::Windows::Forms::ListBox^ lstBoxDay;
	private: System::Windows::Forms::TextBox^ tbSubject;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lbCourse;
	private: System::Windows::Forms::Label^ lbhead;
	private: System::Windows::Forms::Label^ lbTimeEvent;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbDateEvent;
	private: System::Windows::Forms::DateTimePicker^ tbTimeEvent;
	private: System::Windows::Forms::TextBox^ tbEvent;
	private: System::Windows::Forms::Button^ btnSetEvent;
	private: System::Windows::Forms::DateTimePicker^ tbDateEvent;
	private: System::Windows::Forms::Button^ loadTimeTable;
	private: System::Windows::Forms::Button^ btnImportantEvents;
	private: System::Windows::Forms::Button^ button1;



	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->toTime = (gcnew System::Windows::Forms::ListBox());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->fromTime = (gcnew System::Windows::Forms::ListBox());
			this->importantEventsTable = (gcnew System::Windows::Forms::DataGridView());
			this->timeTableGrid = (gcnew System::Windows::Forms::DataGridView());
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			this->lstBoxDay = (gcnew System::Windows::Forms::ListBox());
			this->tbSubject = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbCourse = (gcnew System::Windows::Forms::Label());
			this->lbhead = (gcnew System::Windows::Forms::Label());
			this->lbTimeEvent = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbDateEvent = (gcnew System::Windows::Forms::Label());
			this->tbTimeEvent = (gcnew System::Windows::Forms::DateTimePicker());
			this->tbEvent = (gcnew System::Windows::Forms::TextBox());
			this->btnSetEvent = (gcnew System::Windows::Forms::Button());
			this->tbDateEvent = (gcnew System::Windows::Forms::DateTimePicker());
			this->loadTimeTable = (gcnew System::Windows::Forms::Button());
			this->btnImportantEvents = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->importantEventsTable))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->timeTableGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// toTime
			// 
			this->toTime->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->toTime->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toTime->ForeColor = System::Drawing::SystemColors::Info;
			this->toTime->FormattingEnabled = true;
			this->toTime->ItemHeight = 28;
			this->toTime->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"9.00 am", L"10.00 am", L"11.00 am", L"12.00 pm",
					L"1.00 pm", L"2.00 pm", L"3.00 pm", L"4.00 pm", L"5.00 pm", L"6.00 pm"
			});
			this->toTime->Location = System::Drawing::Point(472, 150);
			this->toTime->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->toTime->Name = L"toTime";
			this->toTime->Size = System::Drawing::Size(202, 32);
			this->toTime->TabIndex = 69;
			// 
			// btnClose
			// 
			this->btnClose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnClose->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClose->ForeColor = System::Drawing::SystemColors::Info;
			this->btnClose->Location = System::Drawing::Point(1164, 695);
			this->btnClose->Margin = System::Windows::Forms::Padding(2);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(103, 46);
			this->btnClose->TabIndex = 65;
			this->btnClose->Text = L"Close";
			this->btnClose->UseVisualStyleBackColor = false;
			this->btnClose->Click += gcnew System::EventHandler(this, &Accademicschedule::btnClose_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Accademicschedule::timer1_Tick);
			// 
			// fromTime
			// 
			this->fromTime->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->fromTime->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fromTime->ForeColor = System::Drawing::SystemColors::Info;
			this->fromTime->FormattingEnabled = true;
			this->fromTime->ItemHeight = 28;
			this->fromTime->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"8.00 am", L"9.00 am", L"10.00 am", L"11.00 am",
					L"12.00 pm", L"1.00 pm", L"2.00 pm", L"3.00 pm", L"4.00 pm", L"5.00 pm", L"6.00 pm"
			});
			this->fromTime->Location = System::Drawing::Point(230, 150);
			this->fromTime->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->fromTime->Name = L"fromTime";
			this->fromTime->Size = System::Drawing::Size(158, 32);
			this->fromTime->TabIndex = 68;
			// 
			// importantEventsTable
			// 
			this->importantEventsTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->importantEventsTable->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->importantEventsTable->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->importantEventsTable->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->importantEventsTable->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->importantEventsTable->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->importantEventsTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::SandyBrown;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->importantEventsTable->DefaultCellStyle = dataGridViewCellStyle6;
			this->importantEventsTable->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->importantEventsTable->Location = System::Drawing::Point(738, 301);
			this->importantEventsTable->Margin = System::Windows::Forms::Padding(2);
			this->importantEventsTable->Name = L"importantEventsTable";
			this->importantEventsTable->RowHeadersVisible = false;
			this->importantEventsTable->RowHeadersWidth = 51;
			this->importantEventsTable->RowTemplate->Height = 24;
			this->importantEventsTable->Size = System::Drawing::Size(530, 359);
			this->importantEventsTable->TabIndex = 62;
			// 
			// timeTableGrid
			// 
			this->timeTableGrid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->timeTableGrid->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->timeTableGrid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->timeTableGrid->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->timeTableGrid->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::Info;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->timeTableGrid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->timeTableGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::SandyBrown;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->timeTableGrid->DefaultCellStyle = dataGridViewCellStyle8;
			this->timeTableGrid->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->timeTableGrid->Location = System::Drawing::Point(11, 412);
			this->timeTableGrid->Margin = System::Windows::Forms::Padding(2);
			this->timeTableGrid->Name = L"timeTableGrid";
			this->timeTableGrid->RowHeadersVisible = false;
			this->timeTableGrid->RowHeadersWidth = 51;
			this->timeTableGrid->RowTemplate->Height = 24;
			this->timeTableGrid->Size = System::Drawing::Size(657, 321);
			this->timeTableGrid->TabIndex = 61;
			// 
			// btnSubmit
			// 
			this->btnSubmit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnSubmit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubmit->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnSubmit->Location = System::Drawing::Point(592, 304);
			this->btnSubmit->Margin = System::Windows::Forms::Padding(2);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(80, 37);
			this->btnSubmit->TabIndex = 60;
			this->btnSubmit->Text = L"Submit";
			this->btnSubmit->UseVisualStyleBackColor = false;
			this->btnSubmit->Click += gcnew System::EventHandler(this, &Accademicschedule::btnSubmit_Click);
			// 
			// lstBoxDay
			// 
			this->lstBoxDay->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->lstBoxDay->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lstBoxDay->ForeColor = System::Drawing::SystemColors::Info;
			this->lstBoxDay->FormattingEnabled = true;
			this->lstBoxDay->ItemHeight = 28;
			this->lstBoxDay->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Monday", L"Tuesday", L"Wednesday", L"Thursday",
					L"Friday"
			});
			this->lstBoxDay->Location = System::Drawing::Point(154, 203);
			this->lstBoxDay->Margin = System::Windows::Forms::Padding(2);
			this->lstBoxDay->Name = L"lstBoxDay";
			this->lstBoxDay->Size = System::Drawing::Size(519, 32);
			this->lstBoxDay->TabIndex = 59;
			// 
			// tbSubject
			// 
			this->tbSubject->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->tbSubject->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbSubject->ForeColor = System::Drawing::SystemColors::Info;
			this->tbSubject->Location = System::Drawing::Point(154, 264);
			this->tbSubject->Margin = System::Windows::Forms::Padding(2);
			this->tbSubject->Name = L"tbSubject";
			this->tbSubject->Size = System::Drawing::Size(519, 34);
			this->tbSubject->TabIndex = 58;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::Info;
			this->label8->Location = System::Drawing::Point(149, 148);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(78, 33);
			this->label8->TabIndex = 57;
			this->label8->Text = L"From";
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::Info;
			this->label7->Location = System::Drawing::Point(410, 149);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(47, 33);
			this->label7->TabIndex = 56;
			this->label7->Text = L"To";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::Info;
			this->label5->Location = System::Drawing::Point(22, 203);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 46);
			this->label5->TabIndex = 55;
			this->label5->Text = L"Day";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->label4->Location = System::Drawing::Point(22, 88);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(326, 33);
			this->label4->TabIndex = 54;
			this->label4->Text = L"Add Your Lecture Schedules Here ----";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Info;
			this->label3->Location = System::Drawing::Point(22, 148);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 46);
			this->label3->TabIndex = 53;
			this->label3->Text = L"Time";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Info;
			this->label2->Location = System::Drawing::Point(23, 267);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 46);
			this->label2->TabIndex = 52;
			this->label2->Text = L"Subject";
			// 
			// lbCourse
			// 
			this->lbCourse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbCourse->ForeColor = System::Drawing::Color::Gold;
			this->lbCourse->Location = System::Drawing::Point(962, 29);
			this->lbCourse->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbCourse->Name = L"lbCourse";
			this->lbCourse->Size = System::Drawing::Size(272, 33);
			this->lbCourse->TabIndex = 51;
			this->lbCourse->Text = L"Set Reminder --------";
			// 
			// lbhead
			// 
			this->lbhead->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbhead->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbhead->Location = System::Drawing::Point(408, 15);
			this->lbhead->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbhead->Name = L"lbhead";
			this->lbhead->Size = System::Drawing::Size(454, 54);
			this->lbhead->TabIndex = 50;
			this->lbhead->Text = L"Academic Schedule";
			this->lbhead->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbTimeEvent
			// 
			this->lbTimeEvent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->lbTimeEvent->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTimeEvent->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->lbTimeEvent->Location = System::Drawing::Point(965, 115);
			this->lbTimeEvent->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbTimeEvent->Name = L"lbTimeEvent";
			this->lbTimeEvent->Size = System::Drawing::Size(127, 26);
			this->lbTimeEvent->TabIndex = 49;
			this->lbTimeEvent->Text = L"Deadline Time";
			this->lbTimeEvent->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Location = System::Drawing::Point(965, 154);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 26);
			this->label1->TabIndex = 48;
			this->label1->Text = L"Event / Task";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbDateEvent
			// 
			this->lbDateEvent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->lbDateEvent->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDateEvent->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->lbDateEvent->Location = System::Drawing::Point(965, 73);
			this->lbDateEvent->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbDateEvent->Name = L"lbDateEvent";
			this->lbDateEvent->Size = System::Drawing::Size(130, 26);
			this->lbDateEvent->TabIndex = 47;
			this->lbDateEvent->Text = L"Deadline Date";
			this->lbDateEvent->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tbTimeEvent
			// 
			this->tbTimeEvent->CalendarForeColor = System::Drawing::SystemColors::Desktop;
			this->tbTimeEvent->CalendarMonthBackground = System::Drawing::Color::White;
			this->tbTimeEvent->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbTimeEvent->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->tbTimeEvent->Location = System::Drawing::Point(1110, 107);
			this->tbTimeEvent->Margin = System::Windows::Forms::Padding(2);
			this->tbTimeEvent->Name = L"tbTimeEvent";
			this->tbTimeEvent->Size = System::Drawing::Size(158, 30);
			this->tbTimeEvent->TabIndex = 46;
			// 
			// tbEvent
			// 
			this->tbEvent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->tbEvent->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbEvent->ForeColor = System::Drawing::SystemColors::Info;
			this->tbEvent->Location = System::Drawing::Point(1110, 148);
			this->tbEvent->Margin = System::Windows::Forms::Padding(2);
			this->tbEvent->Name = L"tbEvent";
			this->tbEvent->Size = System::Drawing::Size(158, 30);
			this->tbEvent->TabIndex = 45;
			// 
			// btnSetEvent
			// 
			this->btnSetEvent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnSetEvent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSetEvent->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnSetEvent->Location = System::Drawing::Point(1201, 186);
			this->btnSetEvent->Margin = System::Windows::Forms::Padding(2);
			this->btnSetEvent->Name = L"btnSetEvent";
			this->btnSetEvent->Size = System::Drawing::Size(66, 32);
			this->btnSetEvent->TabIndex = 44;
			this->btnSetEvent->Text = L"Set";
			this->btnSetEvent->UseVisualStyleBackColor = false;
			this->btnSetEvent->Click += gcnew System::EventHandler(this, &Accademicschedule::btnSetEvent_Click);
			// 
			// tbDateEvent
			// 
			this->tbDateEvent->CalendarForeColor = System::Drawing::SystemColors::Desktop;
			this->tbDateEvent->CalendarMonthBackground = System::Drawing::Color::White;
			this->tbDateEvent->CalendarTitleForeColor = System::Drawing::Color::AliceBlue;
			this->tbDateEvent->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbDateEvent->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->tbDateEvent->Location = System::Drawing::Point(1110, 72);
			this->tbDateEvent->Margin = System::Windows::Forms::Padding(2);
			this->tbDateEvent->Name = L"tbDateEvent";
			this->tbDateEvent->Size = System::Drawing::Size(158, 30);
			this->tbDateEvent->TabIndex = 43;
			// 
			// loadTimeTable
			// 
			this->loadTimeTable->BackColor = System::Drawing::Color::Indigo;
			this->loadTimeTable->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loadTimeTable->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->loadTimeTable->Location = System::Drawing::Point(11, 361);
			this->loadTimeTable->Margin = System::Windows::Forms::Padding(2);
			this->loadTimeTable->Name = L"loadTimeTable";
			this->loadTimeTable->Size = System::Drawing::Size(657, 47);
			this->loadTimeTable->TabIndex = 70;
			this->loadTimeTable->Text = L"Click Here To View Time Table";
			this->loadTimeTable->UseVisualStyleBackColor = false;
			this->loadTimeTable->Click += gcnew System::EventHandler(this, &Accademicschedule::loadTimeTable_Click);
			// 
			// btnImportantEvents
			// 
			this->btnImportantEvents->BackColor = System::Drawing::Color::Indigo;
			this->btnImportantEvents->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnImportantEvents->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnImportantEvents->Location = System::Drawing::Point(736, 254);
			this->btnImportantEvents->Margin = System::Windows::Forms::Padding(2);
			this->btnImportantEvents->Name = L"btnImportantEvents";
			this->btnImportantEvents->Size = System::Drawing::Size(374, 42);
			this->btnImportantEvents->TabIndex = 71;
			this->btnImportantEvents->Text = L"Click Here To View Important Events";
			this->btnImportantEvents->UseVisualStyleBackColor = false;
			this->btnImportantEvents->Click += gcnew System::EventHandler(this, &Accademicschedule::btnImportantEvents_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(110)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(1132, 254);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 42);
			this->button1->TabIndex = 72;
			this->button1->Text = L"Reset";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Accademicschedule::button1_Click);
			// 
			// Accademicschedule
			// 
			this->AcceptButton = this->btnSubmit;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->CancelButton = this->btnClose;
			this->ClientSize = System::Drawing::Size(1307, 752);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnImportantEvents);
			this->Controls->Add(this->loadTimeTable);
			this->Controls->Add(this->toTime);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->fromTime);
			this->Controls->Add(this->importantEventsTable);
			this->Controls->Add(this->timeTableGrid);
			this->Controls->Add(this->btnSubmit);
			this->Controls->Add(this->lstBoxDay);
			this->Controls->Add(this->tbSubject);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lbCourse);
			this->Controls->Add(this->lbhead);
			this->Controls->Add(this->lbTimeEvent);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbDateEvent);
			this->Controls->Add(this->tbTimeEvent);
			this->Controls->Add(this->tbEvent);
			this->Controls->Add(this->btnSetEvent);
			this->Controls->Add(this->tbDateEvent);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Accademicschedule";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Accademicschedule";
			this->Load += gcnew System::EventHandler(this, &Accademicschedule::Accademicschedule_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->importantEventsTable))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->timeTableGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	String^ UID = personalOrganizer::loginForm::UID;

	private: System::Void btnSubmit_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ fromT = fromTime->Text;
		String^ toT = toTime->Text;
		String^ day = lstBoxDay->Text;
		String^ subject = tbSubject->Text;

		if (day->Length == 0)
			MessageBox::Show("Please Enter the day correctly", "Alert", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		else
		{

			try {
				String^ ConString = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
				SqlConnection SqlConn(ConString);
				SqlConn.Open();

				String^ SqlQuery = String::Format("UPDATE [Time_Table] SET [{0}] = @subj WHERE [UserID]=@uid AND [Time]=@t;", day);
				SqlCommand command(SqlQuery, % SqlConn);

				command.Parameters->AddWithValue("@subj", subject);
				command.Parameters->AddWithValue("@uid", UID);
				command.Parameters->AddWithValue("@t", fromT);




				command.ExecuteNonQuery();

				//MessageBox::Show("Successful Update", "Success", MessageBoxButtons::OK), MessageBoxIcon::Information;

			}

			catch (Exception^ exe)
			{
				MessageBox::Show("Error: " + exe->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		// Load Time Table for the Grid View

		String^ connectionString = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";

		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try
		{

			connection->Open();

			SqlCommand^ command = gcnew SqlCommand("SELECT [Time],[Monday],[Tuesday],[Wednesday],[Thursday],[Friday] FROM [Time_Table] WHERE [UserID]=@uid", connection);
			command->Parameters->AddWithValue("@uid", UID);

			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);

			DataTable^ dataTable = gcnew DataTable();

			adapter->Fill(dataTable);

			this->timeTableGrid->DataSource = dataTable;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		finally
		{
			if (connection->State == ConnectionState::Open)
				connection->Close();
		}

	}

		   



private: System::Void btnSetEvent_Click(System::Object^ sender, System::EventArgs^ e) {

	DateTime Tdate = tbDateEvent->Value;
	DateTime Ttime = tbTimeEvent->Value;

	DateTime targetDateTime = DateTime(Tdate.Year, Tdate.Month, Tdate.Day, Ttime.Hour, Ttime.Minute, Ttime.Second);


	TimeSpan RemainingTime = targetDateTime - DateTime::Now;
	if (RemainingTime.TotalMilliseconds < 0) {
		MessageBox::Show("The selected date and time is in the past.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	double RemainingTimeInMilliSeconds = RemainingTime.TotalMilliseconds - 5000;


	timer1->Interval = static_cast<int>(RemainingTimeInMilliSeconds);
	timer1->Enabled = true;

	MessageBox::Show("Sucessfully Set", "Alert Set", MessageBoxButtons::OK, MessageBoxIcon::Information);


	// Update database Important_Events table

	String^ eventDate = tbDateEvent->Text;
	String^ eventTime = tbTimeEvent->Text;
	String^ event = tbEvent->Text;

	try {
		String^ connString = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
		SqlConnection sqlconn(connString);
		sqlconn.Open();

		String^ sqlQuery = "INSERT INTO [Important_Events] ([UserID],[Deadline Date],[Deadline Time],[Events]) VALUES (@uid,@dD,@dT,@evt);";
		SqlCommand command(sqlQuery, % sqlconn);

		command.Parameters->AddWithValue("@uid", UID);
		command.Parameters->AddWithValue("@dD", eventDate); 
		command.Parameters->AddWithValue("@dT", eventTime);
		command.Parameters->AddWithValue("@evt", event);
		
		command.ExecuteNonQuery();

		//MessageBox::Show("Successful Update", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}

	catch (Exception^ exe)
	{
		MessageBox::Show("Error Occured: " + exe->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	// Load Important Events to grid view
	String^ connectionString = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";

	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try
	{
		connection->Open();

		SqlCommand^ command = gcnew SqlCommand("SELECT [Deadline Date],[Deadline Time],[Events] FROM [Important_Events] WHERE UserID = @uid", connection);
		command->Parameters->AddWithValue("@uid", UID);
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);

		DataTable^ dataTable = gcnew DataTable();

		adapter->Fill(dataTable);

		this->importantEventsTable->DataSource = dataTable;
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
	finally
	{
		if (connection->State == ConnectionState::Open)
			connection->Close();
	}

}



private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Close(); 
}

private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

	timer1->Enabled = false;
	MessageBox::Show("Your Deadline for " + tbEvent->Text + " is coming " + tbDateEvent->Text +
		" At " + tbTimeEvent->Text, "Alert", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void Accademicschedule_Load(System::Object^ sender, System::EventArgs^ e) {
	timer1->Enabled = false;
}



private: System::Void loadTimeTable_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ connectionString = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";

	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try
	{

		connection->Open();

		SqlCommand^ command = gcnew SqlCommand("SELECT [Time],[Monday],[Tuesday],[Wednesday],[Thursday],[Friday] FROM [Time_Table] WHERE [UserID]=@uid", connection);
		command->Parameters->AddWithValue("@uid", UID);

		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);

		DataTable^ dataTable = gcnew DataTable();

		adapter->Fill(dataTable);

		this->timeTableGrid->DataSource = dataTable;
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
	finally
	{
		if (connection->State == ConnectionState::Open)
			connection->Close();
	}
}
private: System::Void btnImportantEvents_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ connectionString = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";

	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try
	{
		connection->Open();

		SqlCommand^ command = gcnew SqlCommand("SELECT [Deadline Date],[Deadline Time],[Events] FROM [Important_Events] WHERE UserID = @uid ORDER BY [Deadline Date] ASC", connection);
		command->Parameters->AddWithValue("@uid", UID);
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);

		DataTable^ dataTable = gcnew DataTable();

		adapter->Fill(dataTable);

		this->importantEventsTable->DataSource = dataTable;
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
	finally
	{
		if (connection->State == ConnectionState::Open)
			connection->Close();
	}

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		String^ ConnString = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
		SqlConnection SqlConn(ConnString);
		SqlConn.Open();

		String^ SqlQuery = "DELETE FROM [Important_Events] WHERE [UserID]=@uid;";

		SqlCommand command(SqlQuery, % SqlConn); 
		command.Parameters->AddWithValue("@uid", UID); 
		command.ExecuteNonQuery(); 

	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error;

	}

	// Load table Important_Events
	String^ connectionString = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";

	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try
	{
		connection->Open();

		SqlCommand^ command = gcnew SqlCommand("SELECT [Deadline Date],[Deadline Time],[Events] FROM [Important_Events] WHERE UserID = @uid ORDER BY [Deadline Date] ASC", connection);
		command->Parameters->AddWithValue("@uid", UID);
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);

		DataTable^ dataTable = gcnew DataTable();

		adapter->Fill(dataTable);

		this->importantEventsTable->DataSource = dataTable;
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
	finally
	{
		if (connection->State == ConnectionState::Open)
			connection->Close();
	}

}
};
}
