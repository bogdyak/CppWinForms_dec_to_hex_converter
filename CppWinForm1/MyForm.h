#pragma once
#include "Convert.h"
namespace CppWinForm1 {

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
		const int N = 12; // ������������ ����� �����
		int i; // ����� ����� �����
		float f; // ����� ������� �����
		bool isMinus; // ������� ������
		bool isFract; // ����� �������
		bool isCalc = false;
		String ^intPart, ^fractPart;
	public:
		MyForm(void)
		{
			InitializeComponent();
			i = 1;
			textBox1->Text = "0";
			f = 0;
			isMinus = false;
			isFract = false;
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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����ToolStripMenuItem,
					this->������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(340, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�����ToolStripMenuItem });
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(108, 22);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(68, 20);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������ToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(77, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(191, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"����� � ���������� �������������";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(77, 45);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(183, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(82, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(183, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"����� � 16-������ �������������";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 89);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(318, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(255, 171);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 52);
			this->button1->TabIndex = 5;
			this->button1->Text = L"=";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 199);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"0";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 171);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"1";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 142);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 8;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 113);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 9;
			this->button5->Text = L"7";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(174, 113);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 11;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(93, 171);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 12;
			this->button8->Text = L"2";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(174, 142);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 13;
			this->button9->Text = L"6";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(174, 171);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 14;
			this->button10->Text = L"3";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(93, 142);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 15;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(93, 113);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 16;
			this->button12->Text = L"8";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(174, 200);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 23);
			this->button14->TabIndex = 18;
			this->button14->Text = L",";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(93, 200);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 23);
			this->button15->TabIndex = 19;
			this->button15->Text = L"+/-";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(255, 115);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 23);
			this->button17->TabIndex = 21;
			this->button17->Text = L"backspace";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(255, 142);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 23);
			this->button18->TabIndex = 22;
			this->button18->Text = L"Clear";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(340, 234);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"������� �����";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void �����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { // ������ �����
		Application::Exit();
	}
	private: System::Void ������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { // ������ ������
		String ^help = "�	�������� ������ - ���������� �������������� �����,\n" +
			"�	��������� ������ - � - ����� �������������� �����, ��� � - ��������� ������� ���������, ������������ ��������� �������.\n" +
			"������� ������ ������� �� ������ ����� � ����� ��������� ��� :\n" +
			"<����><�����><�����������><�����>\n" +
			"��������� ���������� ���� n(n = i + f, ����� i - ���������� ���� � ����� �����, f - ���������� ���� � ������� �����) � ����� <�����> � <�����> ������ ������ � ��������� 1 <= n <= N, ��� N = 12.\n" +
			"���� <����> �������� ��������������, ��� ����� ��������� ������ � - � ��� ���� ������(���� ���� �� ��������).\n" +
			"���� <�����> �������� ������������, ��� ������ ��������� ���������� ����� ��� �����, ���������� ���������� ���� � ������� ������ ���� 1 = < i <= N(���������� ���� ����� �� ��������, �������� ������, ����� ���� � ���� ������������).\n" +
			"���� <�����������> �������� ��������������, ��� �������� ������ �, �, ���������� ����� ����� ����� �� ��� ������� �����.\n" +
			"���� <�����> �������� ��������������, ��� ����� ��������� ���������� ����� ������� ����� �����.���������� ���������� ���� � �� ������ ������������ ��������� 0 = < f <= N - 1.";
		MessageBox::Show(help, "������");
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) { // ������ �����
		isCalc = true;
		textBox2->Text = gcnew String(tenToThreeteen(double::Parse(textBox1->Text)));
		//textBox2->Text = (double::Parse(textBox1->Text)).ToString();
	}
private: System::Void button_Click(System::Object^  sender, System::EventArgs^  e) { // ������ ������ ��������� ����������
	if(isCalc)
	{
		clear();
	}
	Button ^button = (Button^)sender;
	String ^textButton = button->Text;
	String ^resultText = textBox1->Text;
	textBox2->Text = ""; // ������� ���� ����������
	// ������ ����� �����
	if (textButton->CompareTo("+/-") == 0)
	{
		if (resultText->Contains("-")) // ���� �� � ���� ����� - �������
		{
			resultText=resultText->Replace("-", "");
			isMinus = false;
		}
		else
		{
			if (resultText->CompareTo("0") != 0) // ���� ��� ������ � ��� �� ������ 0
			{
				resultText = "-" + resultText;
				isMinus = true;
			}
		}
	}
	// ������ �������
	else if (textButton->CompareTo(",") == 0)
	{
		if (isFract == false && i>0)
		{
			isFract = true;
			resultText += ",";
		}
	}
	// ���� ������ ���� �� ����
	else
	{
		if (i + f < N) // ���� ������ �� ������ �����
		{
			if (isFract == false) // ���� ������ ����� �����
			{
				if (i == 1 && resultText->CompareTo("0") == 0)// ���� � ��� ������� ������������ 0
				{
					resultText = textButton;
				}
				else
				{
					i++;
					resultText += textButton;
				}
			}
			else
			{
				f++;
				resultText += textButton;
			}
		}
	}
	textBox1->Text = resultText; // ���������� ��������� � ���� �����
}
 private: void clear()
 {
	textBox1->Text = "0"; // ������� ���� �����
	 i = 1;
	 f = 0;
	 isMinus = false;
	 isFract = false;
	 isCalc = false;
	 textBox2->Text = ""; // ������� ���� ����������
 }
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) { // ������ backspace
	if (isCalc)
	{
		clear();
	}
	String^ resultText = textBox1->Text;
	textBox2->Text = ""; // ������� ���� ����������
	if (isFract) // ���� ������� �����
	{
		if (f == 0) // ������� �� �� ������� �����
		{
			resultText = resultText->Replace(",", ""); // ������� �������
			isFract = false;
		}
		else
		{
			resultText = resultText->Remove(resultText->Length - 1);
			f--;
		}
	}
	else
	{
		if (i == 1) // ������� �� �� ����� �����
		{
			resultText = "0";
		}
		else
		{
			resultText = resultText->Remove(resultText->Length - 1);
			i--;
		}
	}
	textBox1->Text = resultText;
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) { // ������ clear
	clear();
}
};
}
