#pragma once

namespace SmartCalculate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^ calculator;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::TextBox^ output;

	private: System::Windows::Forms::Button^ zero;
	private: System::Windows::Forms::TextBox^ input;
	private: System::Windows::Forms::Button^ one;
	private: System::Windows::Forms::Button^ two;
	private: System::Windows::Forms::Button^ addition;
	private: System::Windows::Forms::Button^ three;
	private: System::Windows::Forms::Button^ four;
	private: System::Windows::Forms::Button^ five;
	private: System::Windows::Forms::Button^ subtraction;


	private: System::Windows::Forms::Button^ six;
	private: System::Windows::Forms::Button^ seven;
	private: System::Windows::Forms::Button^ eight;
	private: System::Windows::Forms::Button^ multiplication;




	private: System::Windows::Forms::Button^ calculate;

	private: System::Windows::Forms::Button^ nine;
	private: System::Windows::Forms::Button^ reset;
	private: System::Windows::Forms::Button^ division;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ opening_bracket;
	private: System::Windows::Forms::Button^ closing_bracket;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ backspace;


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
			this->calculator = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->input = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->output = (gcnew System::Windows::Forms::TextBox());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->one = (gcnew System::Windows::Forms::Button());
			this->two = (gcnew System::Windows::Forms::Button());
			this->opening_bracket = (gcnew System::Windows::Forms::Button());
			this->addition = (gcnew System::Windows::Forms::Button());
			this->three = (gcnew System::Windows::Forms::Button());
			this->four = (gcnew System::Windows::Forms::Button());
			this->five = (gcnew System::Windows::Forms::Button());
			this->closing_bracket = (gcnew System::Windows::Forms::Button());
			this->subtraction = (gcnew System::Windows::Forms::Button());
			this->six = (gcnew System::Windows::Forms::Button());
			this->seven = (gcnew System::Windows::Forms::Button());
			this->eight = (gcnew System::Windows::Forms::Button());
			this->backspace = (gcnew System::Windows::Forms::Button());
			this->multiplication = (gcnew System::Windows::Forms::Button());
			this->calculate = (gcnew System::Windows::Forms::Button());
			this->nine = (gcnew System::Windows::Forms::Button());
			this->reset = (gcnew System::Windows::Forms::Button());
			this->division = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// calculator
			// 
			this->calculator->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->calculator->Location = System::Drawing::Point(266, 20);
			this->calculator->Name = L"calculator";
			this->calculator->Size = System::Drawing::Size(197, 46);
			this->calculator->TabIndex = 0;
			this->calculator->Text = L"Calculator";
			this->calculator->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->label1);
			this->flowLayoutPanel1->Controls->Add(this->input);
			this->flowLayoutPanel1->Controls->Add(this->label2);
			this->flowLayoutPanel1->Controls->Add(this->output);
			this->flowLayoutPanel1->Controls->Add(this->zero);
			this->flowLayoutPanel1->Controls->Add(this->one);
			this->flowLayoutPanel1->Controls->Add(this->two);
			this->flowLayoutPanel1->Controls->Add(this->opening_bracket);
			this->flowLayoutPanel1->Controls->Add(this->addition);
			this->flowLayoutPanel1->Controls->Add(this->three);
			this->flowLayoutPanel1->Controls->Add(this->four);
			this->flowLayoutPanel1->Controls->Add(this->five);
			this->flowLayoutPanel1->Controls->Add(this->closing_bracket);
			this->flowLayoutPanel1->Controls->Add(this->subtraction);
			this->flowLayoutPanel1->Controls->Add(this->six);
			this->flowLayoutPanel1->Controls->Add(this->seven);
			this->flowLayoutPanel1->Controls->Add(this->eight);
			this->flowLayoutPanel1->Controls->Add(this->backspace);
			this->flowLayoutPanel1->Controls->Add(this->multiplication);
			this->flowLayoutPanel1->Controls->Add(this->calculate);
			this->flowLayoutPanel1->Controls->Add(this->nine);
			this->flowLayoutPanel1->Controls->Add(this->reset);
			this->flowLayoutPanel1->Controls->Add(this->division);
			this->flowLayoutPanel1->Location = System::Drawing::Point(190, 124);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(407, 293);
			this->flowLayoutPanel1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 55);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Input";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// input
			// 
			this->input->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->input->Location = System::Drawing::Point(84, 3);
			this->input->Multiline = true;
			this->input->Name = L"input";
			this->input->Size = System::Drawing::Size(317, 55);
			this->input->TabIndex = 17;
			this->input->TextChanged += gcnew System::EventHandler(this, &MyForm::input_TextChanged);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(3, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 40);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Result";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// output
			// 
			this->output->Location = System::Drawing::Point(84, 64);
			this->output->Multiline = true;
			this->output->Name = L"output";
			this->output->Size = System::Drawing::Size(318, 40);
			this->output->TabIndex = 0;
			// 
			// zero
			// 
			this->zero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zero->Location = System::Drawing::Point(3, 110);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(75, 40);
			this->zero->TabIndex = 1;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = true;
			this->zero->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// one
			// 
			this->one->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->one->Location = System::Drawing::Point(84, 110);
			this->one->Name = L"one";
			this->one->Size = System::Drawing::Size(75, 40);
			this->one->TabIndex = 2;
			this->one->Text = L"1";
			this->one->UseVisualStyleBackColor = true;
			this->one->Click += gcnew System::EventHandler(this, &MyForm::one_Click);
			// 
			// two
			// 
			this->two->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->two->Location = System::Drawing::Point(165, 110);
			this->two->Name = L"two";
			this->two->Size = System::Drawing::Size(75, 40);
			this->two->TabIndex = 3;
			this->two->Text = L"2";
			this->two->UseVisualStyleBackColor = true;
			this->two->Click += gcnew System::EventHandler(this, &MyForm::two_Click);
			// 
			// opening_bracket
			// 
			this->opening_bracket->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->opening_bracket->Location = System::Drawing::Point(246, 110);
			this->opening_bracket->Name = L"opening_bracket";
			this->opening_bracket->Size = System::Drawing::Size(75, 40);
			this->opening_bracket->TabIndex = 18;
			this->opening_bracket->Text = L"(";
			this->opening_bracket->UseVisualStyleBackColor = true;
			this->opening_bracket->Click += gcnew System::EventHandler(this, &MyForm::opening_bracket_Click);
			// 
			// addition
			// 
			this->addition->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addition->Location = System::Drawing::Point(327, 110);
			this->addition->Name = L"addition";
			this->addition->Size = System::Drawing::Size(75, 40);
			this->addition->TabIndex = 4;
			this->addition->Text = L"+";
			this->addition->UseVisualStyleBackColor = true;
			this->addition->Click += gcnew System::EventHandler(this, &MyForm::addition_Click);
			// 
			// three
			// 
			this->three->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->three->Location = System::Drawing::Point(3, 156);
			this->three->Name = L"three";
			this->three->Size = System::Drawing::Size(75, 40);
			this->three->TabIndex = 5;
			this->three->Text = L"3";
			this->three->UseVisualStyleBackColor = true;
			this->three->Click += gcnew System::EventHandler(this, &MyForm::three_Click);
			// 
			// four
			// 
			this->four->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->four->Location = System::Drawing::Point(84, 156);
			this->four->Name = L"four";
			this->four->Size = System::Drawing::Size(75, 40);
			this->four->TabIndex = 6;
			this->four->Text = L"4";
			this->four->UseVisualStyleBackColor = true;
			this->four->Click += gcnew System::EventHandler(this, &MyForm::four_Click);
			// 
			// five
			// 
			this->five->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->five->Location = System::Drawing::Point(165, 156);
			this->five->Name = L"five";
			this->five->Size = System::Drawing::Size(75, 40);
			this->five->TabIndex = 7;
			this->five->Text = L"5";
			this->five->UseVisualStyleBackColor = true;
			this->five->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// closing_bracket
			// 
			this->closing_bracket->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->closing_bracket->Location = System::Drawing::Point(246, 156);
			this->closing_bracket->Name = L"closing_bracket";
			this->closing_bracket->Size = System::Drawing::Size(75, 40);
			this->closing_bracket->TabIndex = 19;
			this->closing_bracket->Text = L")";
			this->closing_bracket->UseVisualStyleBackColor = true;
			this->closing_bracket->Click += gcnew System::EventHandler(this, &MyForm::closing_bracket_Click);
			// 
			// subtraction
			// 
			this->subtraction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subtraction->Location = System::Drawing::Point(327, 156);
			this->subtraction->Name = L"subtraction";
			this->subtraction->Size = System::Drawing::Size(75, 40);
			this->subtraction->TabIndex = 8;
			this->subtraction->Text = L"-";
			this->subtraction->UseVisualStyleBackColor = true;
			this->subtraction->Click += gcnew System::EventHandler(this, &MyForm::subtraction_Click);
			// 
			// six
			// 
			this->six->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->six->Location = System::Drawing::Point(3, 202);
			this->six->Name = L"six";
			this->six->Size = System::Drawing::Size(75, 40);
			this->six->TabIndex = 9;
			this->six->Text = L"6";
			this->six->UseVisualStyleBackColor = true;
			this->six->Click += gcnew System::EventHandler(this, &MyForm::six_Click);
			// 
			// seven
			// 
			this->seven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seven->Location = System::Drawing::Point(84, 202);
			this->seven->Name = L"seven";
			this->seven->Size = System::Drawing::Size(75, 40);
			this->seven->TabIndex = 10;
			this->seven->Text = L"7";
			this->seven->UseVisualStyleBackColor = true;
			this->seven->Click += gcnew System::EventHandler(this, &MyForm::seven_Click);
			// 
			// eight
			// 
			this->eight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eight->Location = System::Drawing::Point(165, 202);
			this->eight->Name = L"eight";
			this->eight->Size = System::Drawing::Size(75, 40);
			this->eight->TabIndex = 11;
			this->eight->Text = L"8";
			this->eight->UseVisualStyleBackColor = true;
			this->eight->Click += gcnew System::EventHandler(this, &MyForm::eight_Click);
			// 
			// backspace
			// 
			this->backspace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backspace->Location = System::Drawing::Point(246, 202);
			this->backspace->Name = L"backspace";
			this->backspace->Size = System::Drawing::Size(75, 40);
			this->backspace->TabIndex = 23;
			this->backspace->Text = L"backspace";
			this->backspace->UseVisualStyleBackColor = true;
			this->backspace->Click += gcnew System::EventHandler(this, &MyForm::backspace_Click);
			// 
			// multiplication
			// 
			this->multiplication->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multiplication->Location = System::Drawing::Point(327, 202);
			this->multiplication->Name = L"multiplication";
			this->multiplication->Size = System::Drawing::Size(75, 40);
			this->multiplication->TabIndex = 12;
			this->multiplication->Text = L"*";
			this->multiplication->UseVisualStyleBackColor = true;
			this->multiplication->Click += gcnew System::EventHandler(this, &MyForm::multiplication_Click);
			// 
			// calculate
			// 
			this->calculate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->calculate->Location = System::Drawing::Point(3, 248);
			this->calculate->Name = L"calculate";
			this->calculate->Size = System::Drawing::Size(75, 40);
			this->calculate->TabIndex = 13;
			this->calculate->Text = L"=";
			this->calculate->UseVisualStyleBackColor = true;
			this->calculate->Click += gcnew System::EventHandler(this, &MyForm::calculate_Click);
			// 
			// nine
			// 
			this->nine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nine->Location = System::Drawing::Point(84, 248);
			this->nine->Name = L"nine";
			this->nine->Size = System::Drawing::Size(75, 40);
			this->nine->TabIndex = 14;
			this->nine->Text = L"9";
			this->nine->UseVisualStyleBackColor = true;
			this->nine->Click += gcnew System::EventHandler(this, &MyForm::nine_Click);
			// 
			// reset
			// 
			this->reset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reset->Location = System::Drawing::Point(165, 248);
			this->reset->Name = L"reset";
			this->reset->Size = System::Drawing::Size(156, 40);
			this->reset->TabIndex = 15;
			this->reset->Text = L"clear";
			this->reset->UseVisualStyleBackColor = true;
			// 
			// division
			// 
			this->division->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->division->Location = System::Drawing::Point(327, 248);
			this->division->Name = L"division";
			this->division->Size = System::Drawing::Size(75, 40);
			this->division->TabIndex = 16;
			this->division->Text = L"/";
			this->division->UseVisualStyleBackColor = true;
			this->division->Click += gcnew System::EventHandler(this, &MyForm::division_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(803, 569);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->calculator);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			// click event of button - 0
			input->Text->Concat("0");
		}
		private: System::Void one_Click(System::Object^ sender, System::EventArgs^ e) {
			// click event of button - 1
			input->Text->Concat("1");
		}
		private: System::Void two_Click(System::Object^ sender, System::EventArgs^ e) {
			// click event of button - 2
			input->Text->Concat("2");
		}
		private: System::Void three_Click(System::Object^ sender, System::EventArgs^ e) {
			// click event of button - 3
			input->Text->Concat("3");
		}
		private: System::Void four_Click(System::Object^ sender, System::EventArgs^ e) {
			// click event of button - 4
			input->Text->Concat("4");
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			// click event of button - 5
			input->Text->Concat("5");
		}
		private: System::Void six_Click(System::Object^ sender, System::EventArgs^ e) {
			// click event of button - 6
			input->Text->Concat("6");
		}
		private: System::Void seven_Click(System::Object^ sender, System::EventArgs^ e) {
			// click event of button - 7
			input->Text->Concat("7");
		}
		private: System::Void eight_Click(System::Object^ sender, System::EventArgs^ e) {
			// click event of button - 8
			input->Text->Concat("8");
		}
		private: System::Void nine_Click(System::Object^ sender, System::EventArgs^ e) {
			// click event of button - 9
			input->Text->Concat("9");
		}
		private: System::Void calculate_Click(System::Object^ sender, System::EventArgs^ e) {
			// click event of button - calculate
		}
		private: System::Void opening_bracket_Click(System::Object^ sender, System::EventArgs^ e) {
			// click event of button - opening_bracket
			input->Text->Concat("(");
		}
		private: System::Void closing_bracket_Click(System::Object^ sender, System::EventArgs^ e) {
			// click event of button - closing_bracket
			input->Text->Concat(")");
		}
		private: System::Void addition_Click(System::Object^ sender, System::EventArgs^ e) {
			// click event of button - addition
			input->Text->Concat("+");
		}
		private: System::Void subtraction_Click(System::Object^ sender, System::EventArgs^ e) {
			// click event of button - subtraction
			input->Text->Concat("-");
		}
		private: System::Void multiplication_Click(System::Object^ sender, System::EventArgs^ e) {
			// click event of button - multiplication
			// res.Concat("*");
			input->Text->Concat("*");
		}
		private: System::Void division_Click(System::Object^ sender, System::EventArgs^ e) {
			// click event of button - division
			input->Text->Concat("/");
		}
		private: System::Void backspace_Click(System::Object^ sender, System::EventArgs^ e) {
			// click event of button - backspace
			if (!input->Text->Empty) {
				input->Text->Remove((input->Text->Length) - 1);
			}
		}
		private: System::Void input_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
};
}
