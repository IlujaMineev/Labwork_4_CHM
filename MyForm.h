#pragma once

#include "Functions.h"

namespace Labwork_4_CHM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace ZedGraph;
	using namespace System::Globalization;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::Button^  Calc_Button;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  Count_Breaks_in;


	private: System::Windows::Forms::ComboBox^  Task_Box;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label3;
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  i_table;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Xi_table;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Vi_table;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Ui_table;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Ui_Vi_table;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: ZedGraph::ZedGraphControl^  zedGraphControl2;
	private: System::Windows::Forms::Label^  Max_Error_X_out;


	private: System::Windows::Forms::Label^  Max_Error_out;
	private: System::Windows::Forms::Label^  label4;
	private: System::ComponentModel::IContainer^  components;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Max_Error_X_out = (gcnew System::Windows::Forms::Label());
			this->Max_Error_out = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->Calc_Button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Count_Breaks_in = (gcnew System::Windows::Forms::TextBox());
			this->Task_Box = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->i_table = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Xi_table = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vi_table = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ui_table = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ui_Vi_table = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->Max_Error_X_out);
			this->groupBox1->Controls->Add(this->Max_Error_out);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->zedGraphControl1);
			this->groupBox1->Controls->Add(this->Calc_Button);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->Count_Breaks_in);
			this->groupBox1->Controls->Add(this->Task_Box);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(763, 223);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// Max_Error_X_out
			// 
			this->Max_Error_X_out->AutoSize = true;
			this->Max_Error_X_out->Location = System::Drawing::Point(101, 174);
			this->Max_Error_X_out->Name = L"Max_Error_X_out";
			this->Max_Error_X_out->Size = System::Drawing::Size(13, 13);
			this->Max_Error_X_out->TabIndex = 10;
			this->Max_Error_X_out->Text = L"0";
			this->Max_Error_X_out->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// Max_Error_out
			// 
			this->Max_Error_out->AutoSize = true;
			this->Max_Error_out->Location = System::Drawing::Point(101, 152);
			this->Max_Error_out->Name = L"Max_Error_out";
			this->Max_Error_out->Size = System::Drawing::Size(13, 13);
			this->Max_Error_out->TabIndex = 9;
			this->Max_Error_out->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 174);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"при x =";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 152);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Максимум |U-V| =";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(200, 20);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(557, 191);
			this->zedGraphControl1->TabIndex = 6;
			// 
			// Calc_Button
			// 
			this->Calc_Button->Location = System::Drawing::Point(6, 96);
			this->Calc_Button->Name = L"Calc_Button";
			this->Calc_Button->Size = System::Drawing::Size(188, 30);
			this->Calc_Button->TabIndex = 4;
			this->Calc_Button->Text = L"Посчитать";
			this->Calc_Button->UseVisualStyleBackColor = true;
			this->Calc_Button->Click += gcnew System::EventHandler(this, &MyForm::Calc_Button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Число разбиений:";
			// 
			// Count_Breaks_in
			// 
			this->Count_Breaks_in->Location = System::Drawing::Point(104, 47);
			this->Count_Breaks_in->Name = L"Count_Breaks_in";
			this->Count_Breaks_in->Size = System::Drawing::Size(90, 20);
			this->Count_Breaks_in->TabIndex = 1;
			// 
			// Task_Box
			// 
			this->Task_Box->FormattingEnabled = true;
			this->Task_Box->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Тестовая задача №1", L"Тестовая задача №2", L"Основная задача" });
			this->Task_Box->Location = System::Drawing::Point(6, 19);
			this->Task_Box->Name = L"Task_Box";
			this->Task_Box->Size = System::Drawing::Size(188, 21);
			this->Task_Box->TabIndex = 0;
			this->Task_Box->Text = L"Тестовая задача №1";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->i_table,
					this->Xi_table, this->Vi_table, this->Ui_table, this->Ui_Vi_table
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 19);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(313, 173);
			this->dataGridView1->TabIndex = 5;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// i_table
			// 
			this->i_table->HeaderText = L"i";
			this->i_table->Name = L"i_table";
			this->i_table->Width = 30;
			// 
			// Xi_table
			// 
			this->Xi_table->HeaderText = L"Xi";
			this->Xi_table->Name = L"Xi_table";
			this->Xi_table->Width = 70;
			// 
			// Vi_table
			// 
			this->Vi_table->HeaderText = L"Vi";
			this->Vi_table->Name = L"Vi_table";
			this->Vi_table->Width = 70;
			// 
			// Ui_table
			// 
			this->Ui_table->HeaderText = L"Ui";
			this->Ui_table->Name = L"Ui_table";
			this->Ui_table->Width = 70;
			// 
			// Ui_Vi_table
			// 
			this->Ui_Vi_table->HeaderText = L"|Ui - Vi|";
			this->Ui_Vi_table->Name = L"Ui_Vi_table";
			this->Ui_Vi_table->Width = 70;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->zedGraphControl2);
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Location = System::Drawing::Point(12, 241);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(763, 209);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"groupBox2";
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->Location = System::Drawing::Point(331, 19);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(426, 173);
			this->zedGraphControl2->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(781, 462);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"Лабораторная работа №4";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Calc_Button_Click(System::Object^  sender, System::EventArgs^  e) {
	int ToT;
	if (Task_Box->Text == L"Тестовая задача №1")
		ToT = 1;
	if (Task_Box->Text == L"Основная задача")
		ToT = 2;
	if (Task_Box->Text == L"Тестовая задача №2")
		ToT = 3;
	int flag = 0;
	int Count_Breaks = Convert::ToInt32(Count_Breaks_in->Text);

	double E = 0.5;
	double K = 3.0;
	double Q = 1.0;
	double M1 = 8.0;
	double M2 = 14.0;

	double* x = new double[Count_Breaks]; // net
	double* x_hs = new double[Count_Breaks]; //hs-net

	x = LS(0, 1, Count_Breaks);	// Make a greed
	x_hs = HLS(x, Count_Breaks); 

	if (ToT == 1) {
		// Sweep method

		double* sol1 = new double[Count_Breaks + 1];
		double* sol2 = new double[Count_Breaks + 1];	// u(x)

		sol2 = ExactSolutionsI(x, Count_Breaks);
		double h = x[1] - x[0];

		double* averDiag = new double[Count_Breaks];
		double* bottomDiag = new double[Count_Breaks];
		double* topDiag = new double[Count_Breaks];
		double* rightSide = new double[Count_Breaks];

		bottomDiag[0] = 0;
		rightSide[0] = M1;
		averDiag[0] = 1;
		topDiag[0] = 0;

		for (int i = 1; i < Count_Breaks; i++) {
			//	//основна¤ диагональ
			averDiag[i] = ((6.0 / (h * h) + 1) * (1));

			//	//нижн¤¤ диагональ
			bottomDiag[i] = (3.0 / (h * h));

			//	//верхн¤¤ диагональ
			topDiag[i] = (3.0 / (h * h));

			//права¤ часть
			rightSide[i] = (F(x[i]));
		}

		rightSide[Count_Breaks] = M2;//задание начального значени¤
		averDiag[Count_Breaks] = 1;
		bottomDiag[Count_Breaks] = 0;

		// PROGONKA
		double* s = new double[Count_Breaks + 1];	// coeff progon
		double* t = new double[Count_Breaks + 1];

		s[0] = topDiag[0] / averDiag[0];
		t[0] = -rightSide[0] / averDiag[0];

		for (int i = 1; i < Count_Breaks + 1; i++) {
			s[i] = topDiag[i] / (averDiag[i] - bottomDiag[i] * s[i - 1]);
			t[i] = (bottomDiag[i] * t[i - 1] - rightSide[i]) / (averDiag[i] - bottomDiag[i] * s[i - 1]);
		}

		sol1[Count_Breaks] = t[Count_Breaks];	// v(x)
		for (int i = Count_Breaks - 1; i >= 0; i--) {
			sol1[i] = (s[i] * sol1[i + 1] + t[i]);
		}
		//
		for (int i = 0; i < Count_Breaks + 1; i++) {
			sol1[i] *= -1;
		}
		
		// VISUALIZATION

		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
		GraphPane^ panel1 = zedGraphControl2->GraphPane;
		panel1->CurveList->Clear();
		PointPairList^ f3_list = gcnew ZedGraph::PointPairList();

		double Error = 0.0;
		double Error_x = 0.0;
		for (int i = 0; i < Count_Breaks; i++) {
			if (fabs(sol1[i] - sol2[i]) > Error)
			{
				Error = fabs(sol1[i] - sol2[i]);
				Error_x = x[i];
			}
			f3_list->Add(x[i], fabs(sol1[i] - sol2[i]));
		}
		Max_Error_out->Text = Convert::ToString(Error);
		Max_Error_X_out->Text = Convert::ToString(Error_x);

		for (int i = 0; i < Count_Breaks + 1; i++) {
			f1_list->Add(x[i], sol1[i]);
		}

		for (int i = 0; i < Count_Breaks + 1; i++) {
			f2_list->Add(x[i], sol2[i]);
		}

		LineItem^ curve = panel->AddCurve("V(x)", f1_list, Color::Red, SymbolType::VDash);
		LineItem^ curve1 = panel->AddCurve("U(x)", f2_list, Color::DarkTurquoise, SymbolType::VDash);
		curve1->Line->IsVisible = true;
		curve1->Symbol->Fill->Color = Color::Gold;
		curve1->Symbol->Fill->Type = FillType::GradientByColorValue;
		curve1->Symbol->Size = 4;
		curve->Line->IsVisible = true;
		curve->Symbol->Fill->Color = Color::Gold;
		curve->Symbol->Fill->Type = FillType::GradientByColorValue;
		curve->Symbol->Size = 4;
		curve->Symbol->IsVisible = true;
		curve->Line->Width = 2;
		curve1->Line->Width = 2;
		LineItem^ curve2 = panel1->AddCurve("diff", f3_list, Color::ForestGreen, SymbolType::Square);
		curve2->Line->Width = 3;

		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();
		zedGraphControl2->AxisChange();
		zedGraphControl2->Invalidate();

		dataGridView1->Rows->Clear();
		for (int i = 0; i < Count_Breaks + 1; i++) {
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = x[i];
			dataGridView1->Rows[i]->Cells[2]->Value = sol1[i];
			dataGridView1->Rows[i]->Cells[3]->Value = sol2[i];
			dataGridView1->Rows[i]->Cells[4]->Value = fabs(sol1[i] - sol2[i]);
		}

	}
	else if (ToT == 2) {
		// 2nd
		double* sol1 = new double[2 * Count_Breaks + 1];
		double* sol2 = new double[2 * Count_Breaks + 1];

		double h = x[1] - x[0];
		double h_h = (x[1] - x[0]) / 2.0;

		double* averDiag = new double[Count_Breaks];
		double* bottomDiag = new double[Count_Breaks];
		double* topDiag = new double[Count_Breaks];
		double* rightSide = new double[Count_Breaks];

		double* averDiag1 = new double[2 * Count_Breaks];
		double* bottomDiag1 = new double[2 * Count_Breaks];
		double* topDiag1 = new double[2 * Count_Breaks];
		double* rightSide1 = new double[2 * Count_Breaks];

		bottomDiag[0] = 0;
		rightSide[0] = 0;
		averDiag[0] = 1;
		topDiag[0] = 0;

		bottomDiag1[0] = 0;
		rightSide1[0] = 0;
		averDiag1[0] = 1;
		topDiag1[0] = 0;

		double hs = (x[1] - x[0]) / 2.0;
		for (int i = 1; i < Count_Breaks; i++) {
			//нижн¤¤ диагональ
			bottomDiag[i] = (CalcIntegralsI(1, x[i] - hs, x[i - 1], x[i], E)) / pow(h, 2);
			//верхн¤¤ диагональ
			topDiag[i] = (CalcIntegralsI(1, x[i] + hs, x[i], x[i + 1], E)) / pow(h, 2);
			//основна¤ диагональ
			averDiag[i] = -1.0 * (CalcIntegralsI(2, x[i], x[i] - hs, x[i] + hs, E) + bottomDiag[i] + topDiag[i]);
			//права¤ часть
			rightSide[i] = -1.0 * (CalcIntegralsI(3, x[i], x[i] - hs, x[i] + hs, E));
		}
		double hss = (x_hs[1] - x_hs[0]) / 2;
		for (int i = 1; i < 2 * Count_Breaks; i++) {
			//нижн¤¤ диагональ
			bottomDiag1[i] = CalcIntegralsI(1, x_hs[i] - hss, x_hs[i - 1], x_hs[i], E) / pow(hs, 2);
			//верхн¤¤ диагональ
			topDiag1[i] = (CalcIntegralsI(1, x_hs[i] + hss, x_hs[i], x_hs[i + 1], E)) / pow(hs, 2);
			//основна¤ диагональ
			averDiag1[i] = -1.0 * (CalcIntegralsI(2, x_hs[i], (x_hs[i] - hss), (x_hs[i] + hss), E) + bottomDiag1[i] + topDiag1[i]);
			//права¤ часть
			rightSide1[i] = -1.0 * (CalcIntegralsI(3, x_hs[i], (x_hs[i] - hss), (x_hs[i] + hss), E));
		}

		rightSide[Count_Breaks] = 1;//задание начального значени¤
		averDiag[Count_Breaks] = 1;
		bottomDiag[Count_Breaks] = 0;

		rightSide1[2 * Count_Breaks] = 1;//задание начального значени¤
		averDiag1[2 * Count_Breaks] = 1;
		bottomDiag1[2 * Count_Breaks] = 0;
	
		double m;
		for (int i = 1; i < Count_Breaks; i++) {
			m = bottomDiag[i] / averDiag[i - 1];
			averDiag[i] = averDiag[i] - m * topDiag[i - 1];
			rightSide[i] = rightSide[i] - m * rightSide[i - 1];
		}
		sol1[Count_Breaks] = 1.0;
		for (int i = Count_Breaks - 1; i >= 0; i--) {
			sol1[i] = (rightSide[i] - topDiag[i] * sol1[i + 1]) / averDiag[i];
		}

		for (int i = 1; i < 2 * Count_Breaks; i++) {
			m = bottomDiag1[i] / averDiag1[i - 1];
			averDiag1[i] = averDiag1[i] - m * topDiag1[i - 1];
			rightSide1[i] = rightSide1[i] - m * rightSide1[i - 1];
		}
		sol2[2 * Count_Breaks] = 1.0;
		for (int i = 2 * Count_Breaks - 1; i >= 0; i--) {
			sol2[i] = (rightSide1[i] - topDiag1[i] * sol2[i + 1]) / averDiag1[i];
		}

		// VISUALIZATION

		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
		GraphPane^ panel1 = zedGraphControl2->GraphPane;
		panel1->CurveList->Clear();
		PointPairList^ f3_list = gcnew ZedGraph::PointPairList();

		double Error = 0.0;
		double Error_x = 0.0;
		for (int i = 0; i < Count_Breaks; i++) {
			if (fabs(sol1[i] - sol2[2 * i]) > Error)
			{
				Error = fabs(sol1[i] - sol2[2 * i]);
				Error_x = x[i];
			}
			f3_list->Add(x[i], fabs(sol1[i] - sol2[2 * i]));
		}
		Max_Error_out->Text = Convert::ToString(Error);
		Max_Error_X_out->Text = Convert::ToString(Error_x);

		for (int i = 0; i < Count_Breaks + 1; i++) {
			f1_list->Add(x[i], sol1[i]);
		}

		for (int i = 0; i < 2 * Count_Breaks + 1; i++) {
			f2_list->Add(x_hs[i], sol2[i]);
		}

		LineItem^ curve = panel->AddCurve("f(x)", f1_list, Color::Red, SymbolType::VDash);
		LineItem^ curve1 = panel->AddCurve("f_h(x)", f2_list, Color::DarkTurquoise, SymbolType::VDash);
		curve1->Line->IsVisible = true;
		curve1->Symbol->Fill->Color = Color::Gold;
		curve1->Symbol->Fill->Type = FillType::GradientByColorValue;
		curve1->Symbol->Size = 4;
		curve->Line->IsVisible = true;
		curve->Symbol->Fill->Color = Color::Gold;
		curve->Symbol->Fill->Type = FillType::GradientByColorValue;
		curve->Symbol->Size = 4;
		curve->Symbol->IsVisible = true;
		curve->Line->Width = 2;
		curve1->Line->Width = 2;
		LineItem^ curve2 = panel1->AddCurve("diff", f3_list, Color::ForestGreen, SymbolType::Square);
		curve2->Line->Width = 3;

		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();
		zedGraphControl2->AxisChange();
		zedGraphControl2->Invalidate();

		dataGridView1->Rows->Clear();
		for (int i = 0; i < Count_Breaks + 1; i++) {
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = x[i];
			dataGridView1->Rows[i]->Cells[2]->Value = sol1[i];
			dataGridView1->Rows[i]->Cells[3]->Value = sol2[2 * i];
			dataGridView1->Rows[i]->Cells[4]->Value = fabs(sol1[i] - sol2[2 * i]);
		}
	}
	else if (ToT == 3) {
		// 2nd

		double E1 = 0.5;

		double* sol1 = new double[Count_Breaks + 1];
		double* sol2 = new double[Count_Breaks + 1];

		double h = x[1] - x[0];
		double hs = (x[1] - x[0]) / 2.0;

		double* averDiag = new double[Count_Breaks];
		double* bottomDiag = new double[Count_Breaks];
		double* topDiag = new double[Count_Breaks];
		double* rightSide = new double[Count_Breaks];

		bottomDiag[0] = 0.0;
		rightSide[0] = 0.0;
		averDiag[0] = -1.0;
		topDiag[0] = 0.0;

		for (int i = 1; i < Count_Breaks; i++) {
			//нижн¤¤ диагональ
			bottomDiag[i] = ((CalcIntegralsII(1, x[i], x[i - 1], x[i], E, h))) / pow(h, 2);
			//верхн¤¤ диагональ
			topDiag[i] = ((CalcIntegralsII(1, x[i], x[i], x[i + 1], E, h))) / pow(h, 2);
			//основна¤ диагональ
			averDiag[i] = (-1.0) * ((CalcIntegralsII(2, x[i], x[i] - hs, x[i] + hs, E, h)) + bottomDiag[i] + topDiag[i]);
			//права¤ часть
			rightSide[i] = (-1.0) * (CalcIntegralsII(3, x[i], x[i] - hs, x[i] + hs, E, h));
		}


		rightSide[Count_Breaks] = -1.0;//задание начального значени¤
		averDiag[Count_Breaks] = -1.0;
		bottomDiag[Count_Breaks] = 0.0;
		topDiag[Count_Breaks] = 0.0;

		double m;
		for (int i = 1; i < Count_Breaks; i++) {
			m = bottomDiag[i] / averDiag[i - 1];
			averDiag[i] = averDiag[i] - m * topDiag[i - 1];
			rightSide[i] = rightSide[i] - m * rightSide[i - 1];
		}
		sol1[Count_Breaks] = 1.0;
		for (int i = Count_Breaks - 1; i >= 0; i--) {
			sol1[i] = (rightSide[i] - topDiag[i] * sol1[i + 1]) / averDiag[i];
		}

		for (int i = 0; i < Count_Breaks + 1; i++) {
			sol2[i] = UI(x[i]);
		}
		// VISUALIZATION

		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
		GraphPane^ panel1 = zedGraphControl2->GraphPane;
		panel1->CurveList->Clear();
		PointPairList^ f3_list = gcnew ZedGraph::PointPairList();

		double Error = 0.0;
		double Error_x = 0.0;
		for (int i = 0; i < Count_Breaks; i++) {
			if (fabs(sol1[i] - sol2[i]) > Error)
			{
				Error = fabs(sol1[i] - sol2[i]);
				Error_x = x[i];
			}
			f3_list->Add(x[i], fabs(sol1[i] - sol2[i]));
		}
		Max_Error_out->Text = Convert::ToString(Error);
		Max_Error_X_out->Text = Convert::ToString(Error_x);

		for (int i = 0; i < Count_Breaks + 1; i++) {
			f1_list->Add(x[i], sol1[i]);
		}

		for (int i = 0; i < Count_Breaks + 1; i++) {
			f2_list->Add(x[i], sol2[i]);
		}

		LineItem^ curve = panel->AddCurve("V(x)", f1_list, Color::Red, SymbolType::VDash);
		LineItem^ curve1 = panel->AddCurve("U(x)", f2_list, Color::DarkTurquoise, SymbolType::VDash);
		curve1->Line->IsVisible = true;
		curve1->Symbol->Fill->Color = Color::Gold;
		curve1->Symbol->Fill->Type = FillType::GradientByColorValue;
		curve1->Symbol->Size = 4;
		curve->Line->IsVisible = true;
		curve->Symbol->Fill->Color = Color::Gold;
		curve->Symbol->Fill->Type = FillType::GradientByColorValue;
		curve->Symbol->Size = 4;
		curve->Symbol->IsVisible = true;
		curve->Line->Width = 2;
		curve1->Line->Width = 2;
		LineItem^ curve2 = panel1->AddCurve("diff", f3_list, Color::ForestGreen, SymbolType::Square);
		curve2->Line->Width = 3;

		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();
		zedGraphControl2->AxisChange();
		zedGraphControl2->Invalidate();

		dataGridView1->Rows->Clear();
		for (int i = 0; i < Count_Breaks + 1; i++) {
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = x[i];
			dataGridView1->Rows[i]->Cells[2]->Value = sol1[i];
			dataGridView1->Rows[i]->Cells[3]->Value = sol2[i];
			dataGridView1->Rows[i]->Cells[4]->Value = fabs(sol1[i] - sol2[i]);
		}
	}
}
};
}
