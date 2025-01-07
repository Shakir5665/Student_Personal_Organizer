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
	/// Summary for ShowingReport
	/// </summary>
	public ref class ShowingReport : public System::Windows::Forms::Form
	{
	public:
		ShowingReport(void)
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
		~ShowingReport()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ expenceChart;
	protected:

	private: System::Windows::Forms::Label^ graphTableHead;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Label^ monthlyReportText;
	private: System::Windows::Forms::Label^ headText;
	private: System::Windows::Forms::Button^ btnMonthlyReport;
	private: System::Windows::Forms::Button^ btnGraphTable;
	private: System::Windows::Forms::Button^ btnGraph;
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ LbIncomeTable;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ monthlyReportGrid;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btnResetExpence;
	private: System::Windows::Forms::Button^ btnResetReport;






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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->expenceChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->graphTableHead = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->monthlyReportText = (gcnew System::Windows::Forms::Label());
			this->headText = (gcnew System::Windows::Forms::Label());
			this->btnMonthlyReport = (gcnew System::Windows::Forms::Button());
			this->btnGraphTable = (gcnew System::Windows::Forms::Button());
			this->btnGraph = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->LbIncomeTable = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->monthlyReportGrid = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btnResetExpence = (gcnew System::Windows::Forms::Button());
			this->btnResetReport = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->expenceChart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->monthlyReportGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(733, 89);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(329, 35);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Graphical View Of Monthly Expences";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// expenceChart
			// 
			this->expenceChart->BackColor = System::Drawing::Color::Tan;
			this->expenceChart->BackGradientStyle = System::Windows::Forms::DataVisualization::Charting::GradientStyle::VerticalCenter;
			this->expenceChart->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->expenceChart->BorderlineColor = System::Drawing::Color::Firebrick;
			chartArea1->Name = L"ChartArea1";
			this->expenceChart->ChartAreas->Add(chartArea1);
			this->expenceChart->Cursor = System::Windows::Forms::Cursors::Hand;
			legend1->Name = L"Legend1";
			this->expenceChart->Legends->Add(legend1);
			this->expenceChart->Location = System::Drawing::Point(737, 134);
			this->expenceChart->Name = L"expenceChart";
			this->expenceChart->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SeaGreen;
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Expence";
			this->expenceChart->Series->Add(series1);
			this->expenceChart->Size = System::Drawing::Size(462, 450);
			this->expenceChart->TabIndex = 12;
			this->expenceChart->Text = L"chart1";
			// 
			// graphTableHead
			// 
			this->graphTableHead->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->graphTableHead->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->graphTableHead->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->graphTableHead->Location = System::Drawing::Point(386, 272);
			this->graphTableHead->Name = L"graphTableHead";
			this->graphTableHead->Size = System::Drawing::Size(128, 38);
			this->graphTableHead->TabIndex = 11;
			this->graphTableHead->Text = L"Expence Table";
			this->graphTableHead->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::Info;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Cursor = System::Windows::Forms::Cursors::Hand;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->dataGridView1->Location = System::Drawing::Point(390, 313);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(269, 223);
			this->dataGridView1->TabIndex = 10;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ShowingReport::dataGridView1_CellContentClick);
			// 
			// monthlyReportText
			// 
			this->monthlyReportText->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->monthlyReportText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->monthlyReportText->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->monthlyReportText->Location = System::Drawing::Point(12, 117);
			this->monthlyReportText->Name = L"monthlyReportText";
			this->monthlyReportText->Size = System::Drawing::Size(148, 32);
			this->monthlyReportText->TabIndex = 8;
			this->monthlyReportText->Text = L"Monthly Report";
			this->monthlyReportText->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->monthlyReportText->Click += gcnew System::EventHandler(this, &ShowingReport::monthlyReportText_Click);
			// 
			// headText
			// 
			this->headText->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->headText->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->headText->ForeColor = System::Drawing::Color::MediumSpringGreen;
			this->headText->Location = System::Drawing::Point(-4, -4);
			this->headText->Name = L"headText";
			this->headText->Size = System::Drawing::Size(1279, 77);
			this->headText->TabIndex = 7;
			this->headText->Text = L"Finacial Report";
			this->headText->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnMonthlyReport
			// 
			this->btnMonthlyReport->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->btnMonthlyReport->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMonthlyReport->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnMonthlyReport->Location = System::Drawing::Point(577, 115);
			this->btnMonthlyReport->Name = L"btnMonthlyReport";
			this->btnMonthlyReport->Size = System::Drawing::Size(112, 34);
			this->btnMonthlyReport->TabIndex = 14;
			this->btnMonthlyReport->Text = L"Show Table";
			this->btnMonthlyReport->UseVisualStyleBackColor = false;
			this->btnMonthlyReport->Click += gcnew System::EventHandler(this, &ShowingReport::btnMonthlyReport_Click);
			// 
			// btnGraphTable
			// 
			this->btnGraphTable->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->btnGraphTable->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGraphTable->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnGraphTable->Location = System::Drawing::Point(546, 275);
			this->btnGraphTable->Name = L"btnGraphTable";
			this->btnGraphTable->Size = System::Drawing::Size(113, 33);
			this->btnGraphTable->TabIndex = 15;
			this->btnGraphTable->Text = L"Show Table";
			this->btnGraphTable->UseVisualStyleBackColor = false;
			this->btnGraphTable->Click += gcnew System::EventHandler(this, &ShowingReport::btnGraphTable_Click);
			// 
			// btnGraph
			// 
			this->btnGraph->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->btnGraph->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGraph->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnGraph->Location = System::Drawing::Point(1079, 86);
			this->btnGraph->Name = L"btnGraph";
			this->btnGraph->Size = System::Drawing::Size(120, 41);
			this->btnGraph->TabIndex = 16;
			this->btnGraph->Text = L"Load Graph";
			this->btnGraph->UseVisualStyleBackColor = false;
			this->btnGraph->Click += gcnew System::EventHandler(this, &ShowingReport::btnGraph_Click);
			// 
			// btnClose
			// 
			this->btnClose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnClose->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnClose->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnClose->FlatAppearance->BorderSize = 2;
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClose->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnClose->Location = System::Drawing::Point(1164, 612);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(96, 40);
			this->btnClose->TabIndex = 17;
			this->btnClose->Text = L"Close";
			this->btnClose->UseVisualStyleBackColor = false;
			this->btnClose->Click += gcnew System::EventHandler(this, &ShowingReport::btnClose_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(251, 278);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 33);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Show Table";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ShowingReport::button1_Click);
			// 
			// LbIncomeTable
			// 
			this->LbIncomeTable->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->LbIncomeTable->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LbIncomeTable->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LbIncomeTable->Location = System::Drawing::Point(13, 272);
			this->LbIncomeTable->Name = L"LbIncomeTable";
			this->LbIncomeTable->Size = System::Drawing::Size(117, 39);
			this->LbIncomeTable->TabIndex = 19;
			this->LbIncomeTable->Text = L"Income Table";
			this->LbIncomeTable->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView2->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->dataGridView2->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::Info;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Cursor = System::Windows::Forms::Cursors::Hand;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView2->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->dataGridView2->Location = System::Drawing::Point(17, 317);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(345, 219);
			this->dataGridView2->TabIndex = 18;
			// 
			// monthlyReportGrid
			// 
			this->monthlyReportGrid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->monthlyReportGrid->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->monthlyReportGrid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->monthlyReportGrid->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->monthlyReportGrid->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::DarkRed;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			dataGridViewCellStyle5->NullValue = L"0.00";
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->monthlyReportGrid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->monthlyReportGrid->ColumnHeadersHeight = 29;
			this->monthlyReportGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->monthlyReportGrid->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->monthlyReportGrid->DefaultCellStyle = dataGridViewCellStyle6;
			this->monthlyReportGrid->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->monthlyReportGrid->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->monthlyReportGrid->Location = System::Drawing::Point(16, 152);
			this->monthlyReportGrid->Name = L"monthlyReportGrid";
			this->monthlyReportGrid->ReadOnly = true;
			this->monthlyReportGrid->RowHeadersVisible = false;
			this->monthlyReportGrid->RowHeadersWidth = 51;
			this->monthlyReportGrid->RowTemplate->Height = 24;
			this->monthlyReportGrid->Size = System::Drawing::Size(673, 83);
			this->monthlyReportGrid->TabIndex = 8;
			this->monthlyReportGrid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ShowingReport::monthlyReportGrid_CellContentClick);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(17, 621);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(143, 27);
			this->button2->TabIndex = 21;
			this->button2->Text = L"Reset Income Table";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ShowingReport::button2_Click);
			// 
			// btnResetExpence
			// 
			this->btnResetExpence->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnResetExpence->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnResetExpence->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnResetExpence->Location = System::Drawing::Point(390, 621);
			this->btnResetExpence->Name = L"btnResetExpence";
			this->btnResetExpence->Size = System::Drawing::Size(140, 27);
			this->btnResetExpence->TabIndex = 22;
			this->btnResetExpence->Text = L"Reset Expence Table";
			this->btnResetExpence->UseVisualStyleBackColor = false;
			this->btnResetExpence->Click += gcnew System::EventHandler(this, &ShowingReport::btnResetExpence_Click);
			// 
			// btnResetReport
			// 
			this->btnResetReport->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnResetReport->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnResetReport->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnResetReport->Location = System::Drawing::Point(12, 241);
			this->btnResetReport->Name = L"btnResetReport";
			this->btnResetReport->Size = System::Drawing::Size(154, 27);
			this->btnResetReport->TabIndex = 23;
			this->btnResetReport->Text = L"Reset Monthly Report";
			this->btnResetReport->UseVisualStyleBackColor = false;
			this->btnResetReport->Click += gcnew System::EventHandler(this, &ShowingReport::btnResetReport_Click);
			// 
			// ShowingReport
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->CancelButton = this->btnClose;
			this->ClientSize = System::Drawing::Size(1272, 664);
			this->Controls->Add(this->btnResetReport);
			this->Controls->Add(this->btnResetExpence);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->monthlyReportGrid);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->LbIncomeTable);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnGraph);
			this->Controls->Add(this->btnGraphTable);
			this->Controls->Add(this->btnMonthlyReport);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->expenceChart);
			this->Controls->Add(this->graphTableHead);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->monthlyReportText);
			this->Controls->Add(this->headText);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ShowingReport";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Financial Report";
			this->Load += gcnew System::EventHandler(this, &ShowingReport::ShowingReport_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->expenceChart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->monthlyReportGrid))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	String^ UID = personalOrganizer::loginForm::UID; 

	private: System::Void ShowingReport_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: void LoadMonthlyReport()
	{
		String^ connectionString = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try
		{
			connection->Open();

			SqlCommand^ command = gcnew SqlCommand("SELECT [Total_Income],[Total_Expence],[Current_Savings] FROM Financial_Report Where UserID = @uid", connection);
			command->Parameters->AddWithValue("@uid",UID);

			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);

			DataTable^ dataTable = gcnew DataTable();

			adapter->Fill(dataTable);

			this->monthlyReportGrid->DataSource = dataTable;
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
		 
private: System::Void monthlyReportText_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnMonthlyReport_Click(System::Object^ sender, System::EventArgs^ e) {
	LoadMonthlyReport();
}

	private: void LoadExpence()
	{
		String^ connectionString = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";

		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try
		{
			connection->Open();

			SqlCommand^ command = gcnew SqlCommand("SELECT Category,Expence FROM Graph_table WHERE UserID = @uid;", connection);
			command->Parameters->AddWithValue("@uid",UID);
		
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);

			DataTable^ dataTable = gcnew DataTable();

			adapter->Fill(dataTable);

			this->dataGridView1->DataSource = dataTable;
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

private: System::Void btnGraphTable_Click(System::Object^ sender, System::EventArgs^ e) {

	LoadExpence();
}

private: void LoadIncome()
{
	String^ connectionString = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";

	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try
	{
		connection->Open();

		SqlCommand^ command = gcnew SqlCommand("SELECT Date,Source,Amount FROM Income WHERE UserID =@uid;", connection);
		command->Parameters->AddWithValue("@uid",UID);

		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);

		DataTable^ dataTable = gcnew DataTable();
				
		adapter->Fill(dataTable);

		this->dataGridView2->DataSource = dataTable;
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


private: System::Void btnGraph_Click(System::Object^ sender, System::EventArgs^ e) {

	expenceChart->Series[0]->XValueMember = "Category";  
	expenceChart->Series[0]->YValueMembers = "Expence";

	expenceChart->Series[0]->XValueMember = "Category"; 
	expenceChart->Series[0]->YValueMembers = "Expence";

	expenceChart->Series[0]->XValueMember = "Category"; 
	expenceChart->Series[0]->YValueMembers = "Expence";

	expenceChart->Series[0]->XValueMember = "Category"; 
	expenceChart->Series[0]->YValueMembers = "Expence";

	expenceChart->Series[0]->XValueMember = "Category"; 
	expenceChart->Series[0]->YValueMembers = "Expence";

	expenceChart->Series[0]->XValueMember = "Category"; 
	expenceChart->Series[0]->YValueMembers = "Expence";


	
	String^ connectionString = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";

	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try {
		
		connection->Open();

		SqlCommand^ command = gcnew SqlCommand("SELECT Category,Expence FROM [Graph_table] WHERE UserID = @uid;", connection);
		command->Parameters->AddWithValue("uid",UID);

		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
		DataTable^ dataTable = gcnew DataTable();

		
		adapter->Fill(dataTable);

		
		expenceChart->DataSource = dataTable;

		expenceChart->DataBind();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message);
	}
	finally {

		if (connection->State == ConnectionState::Open) {
			connection->Close();
		}
	}
}
private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	LoadIncome();
}
private: System::Void monthlyReportGrid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}

// Reset Income Table.
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		String^ ConnString = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
		SqlConnection SqlConn(ConnString);
		SqlConn.Open();

		String^ SqlQuery = "DELETE FROM [Income] WHERE [UserID]=@uid;";

		SqlCommand command(SqlQuery, % SqlConn);
		command.Parameters->AddWithValue("@uid", UID);
		command.ExecuteNonQuery();

	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error;

	}

	LoadIncome();
}

// Reset Expence Table
private: System::Void btnResetExpence_Click(System::Object^ sender, System::EventArgs^ e) {


	try {
		String^ ConnString = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
		SqlConnection SqlConn(ConnString); 
		SqlConn.Open(); 

		String^ SqlQuery1 = "DELETE FROM [Expences] WHERE [UserID]=@uid;";
		String^ SqlQuery2 = "UPDATE [Graph_table] SET [Expence] = NULL WHERE [UserID]=@uid;";

		SqlCommand command1(SqlQuery1, % SqlConn);
		command1.Parameters->AddWithValue("@uid", UID); 
		command1.ExecuteNonQuery(); 

		SqlCommand command2(SqlQuery2, % SqlConn);
		command2.Parameters->AddWithValue("@uid", UID);  
		command2.ExecuteNonQuery();  



	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error;

	}
	// Load Expences

	LoadExpence();
}
private: System::Void btnResetReport_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		String^ ConnString = "Data Source=MOHAMED_SHAKIR\\SQLEXPRESS;Initial Catalog=PersonalOrganizerDB;Integrated Security=True;Pooling=False;Encrypt=False;";
		SqlConnection SqlConn(ConnString);
		SqlConn.Open();

		String^ SqlQuery1 = "DELETE FROM [Expences] WHERE [UserID]=@uid;";
		String^ SqlQuery2 = "UPDATE [Financial_Report] SET [Total_Income] = NULL WHERE [UserID]=@uid;"
							"UPDATE [Financial_Report] SET [Total_Expence] = NULL WHERE [UserID]=@uid;"
							"UPDATE [Financial_Report] SET [Current_Savings] = NULL WHERE [UserID]=@uid;";

		SqlCommand command1(SqlQuery1, % SqlConn);
		command1.Parameters->AddWithValue("@uid", UID);
		command1.ExecuteNonQuery();

		SqlCommand command2(SqlQuery2, % SqlConn);
		command2.Parameters->AddWithValue("@uid", UID);
		command2.ExecuteNonQuery();



	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error;

	}
	LoadMonthlyReport();  

}
};
}

