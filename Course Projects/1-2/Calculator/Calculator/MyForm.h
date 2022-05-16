#pragma once

namespace Calculator {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ value1_input;


	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::CheckBox^ check_sum;
	private: System::Windows::Forms::CheckBox^ check_minus;
	private: System::Windows::Forms::CheckBox^ check_multiply;
	private: System::Windows::Forms::CheckBox^ check_division;
	private: System::Windows::Forms::TextBox^ value2_input;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ result_output;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ reset_form;
	private: System::Windows::Forms::RadioButton^ sum;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->value1_input = (gcnew System::Windows::Forms::TextBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->check_sum = (gcnew System::Windows::Forms::CheckBox());
			this->check_minus = (gcnew System::Windows::Forms::CheckBox());
			this->check_multiply = (gcnew System::Windows::Forms::CheckBox());
			this->check_division = (gcnew System::Windows::Forms::CheckBox());
			this->value2_input = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->result_output = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->reset_form = (gcnew System::Windows::Forms::Button());
			this->sum = (gcnew System::Windows::Forms::RadioButton());
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 33);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 18);
			this->label1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(208, 140);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"First Input      : ";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(220, 452);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 18);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Result         :";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(315, 391);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 32);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// value1_input
			// 
			this->value1_input->Location = System::Drawing::Point(316, 140);
			this->value1_input->Margin = System::Windows::Forms::Padding(4);
			this->value1_input->Name = L"value1_input";
			this->value1_input->Size = System::Drawing::Size(132, 25);
			this->value1_input->TabIndex = 5;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->check_sum);
			this->flowLayoutPanel1->Controls->Add(this->check_minus);
			this->flowLayoutPanel1->Controls->Add(this->check_multiply);
			this->flowLayoutPanel1->Controls->Add(this->check_division);
			this->flowLayoutPanel1->Location = System::Drawing::Point(314, 200);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(216, 119);
			this->flowLayoutPanel1->TabIndex = 8;
			// 
			// check_sum
			// 
			this->check_sum->AutoSize = true;
			this->check_sum->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->check_sum->Location = System::Drawing::Point(4, 4);
			this->check_sum->Margin = System::Windows::Forms::Padding(4);
			this->check_sum->Name = L"check_sum";
			this->check_sum->Size = System::Drawing::Size(101, 22);
			this->check_sum->TabIndex = 0;
			this->check_sum->Text = L"Addition (+)";
			this->check_sum->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->check_sum->UseVisualStyleBackColor = false;
			// 
			// check_minus
			// 
			this->check_minus->AutoSize = true;
			this->check_minus->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->check_minus->Location = System::Drawing::Point(4, 34);
			this->check_minus->Margin = System::Windows::Forms::Padding(4);
			this->check_minus->Name = L"check_minus";
			this->check_minus->Size = System::Drawing::Size(115, 22);
			this->check_minus->TabIndex = 1;
			this->check_minus->Text = L"Subtraction (-)";
			this->check_minus->UseVisualStyleBackColor = false;
			// 
			// check_multiply
			// 
			this->check_multiply->AutoSize = true;
			this->check_multiply->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->check_multiply->Location = System::Drawing::Point(4, 64);
			this->check_multiply->Margin = System::Windows::Forms::Padding(4);
			this->check_multiply->Name = L"check_multiply";
			this->check_multiply->Size = System::Drawing::Size(128, 22);
			this->check_multiply->TabIndex = 2;
			this->check_multiply->Text = L"Multiplication (*)";
			this->check_multiply->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->check_multiply->UseVisualStyleBackColor = false;
			this->check_multiply->CheckedChanged += gcnew System::EventHandler(this, &MyForm::check_multiply_CheckedChanged);
			// 
			// check_division
			// 
			this->check_division->AutoSize = true;
			this->check_division->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->check_division->Location = System::Drawing::Point(4, 94);
			this->check_division->Margin = System::Windows::Forms::Padding(4);
			this->check_division->Name = L"check_division";
			this->check_division->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->check_division->Size = System::Drawing::Size(92, 22);
			this->check_division->TabIndex = 3;
			this->check_division->Text = L"Division (/)";
			this->check_division->UseVisualStyleBackColor = false;
			// 
			// value2_input
			// 
			this->value2_input->Location = System::Drawing::Point(314, 347);
			this->value2_input->Name = L"value2_input";
			this->value2_input->Size = System::Drawing::Size(133, 25);
			this->value2_input->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(211, 200);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 18);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Operator       :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(208, 354);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 18);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Second Input :";
			// 
			// result_output
			// 
			this->result_output->AutoSize = true;
			this->result_output->Location = System::Drawing::Point(318, 452);
			this->result_output->Name = L"result_output";
			this->result_output->Size = System::Drawing::Size(16, 18);
			this->result_output->TabIndex = 12;
			this->result_output->Text = L"0";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(316, 33);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(170, 39);
			this->label6->TabIndex = 13;
			this->label6->Text = L"My Calculator";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// reset_form
			// 
			this->reset_form->Location = System::Drawing::Point(316, 521);
			this->reset_form->Name = L"reset_form";
			this->reset_form->Size = System::Drawing::Size(139, 31);
			this->reset_form->TabIndex = 14;
			this->reset_form->Text = L"Reset Form";
			this->reset_form->UseVisualStyleBackColor = true;
			this->reset_form->Click += gcnew System::EventHandler(this, &MyForm::reset_form_Click);
			// 
			// sum
			// 
			this->sum->AutoSize = true;
			this->sum->Location = System::Drawing::Point(564, 200);
			this->sum->Name = L"sum";
			this->sum->Size = System::Drawing::Size(73, 22);
			this->sum->TabIndex = 15;
			this->sum->TabStop = true;
			this->sum->Text = L"Add (+)";
			this->sum->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(923, 730);
			this->Controls->Add(this->sum);
			this->Controls->Add(this->reset_form);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->result_output);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->value2_input);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->value1_input);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void check_multiply_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		float value1 = (float)System::Convert::ToDouble(value1_input->Text);
		float value2 = (float)System::Convert::ToDouble(value2_input->Text);

		float result;

		if (bool(check_sum->CheckState)) {
			result = value1 + value2;
		}
		if (bool(check_minus->CheckState)) {
			result = value1 - value2;
		}
		if (bool(check_multiply->CheckState)) {
			result = value1 * value2;
		}
		if (bool(check_division->CheckState)) {
			result = value1 / value2; 
		}
		result_output->Text = System::Convert::ToString(result);
	}
	private: System::Void reset_form_Click(System::Object^ sender, System::EventArgs^ e) {
		value1_input->Text = nullptr;
		value2_input->Text = nullptr;
		result_output->Text = "0";
		check_sum->ResetBindings();
	}
};
}
