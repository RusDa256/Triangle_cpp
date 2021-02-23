#pragma once
#include <vector>
#include "Trngl.h"
#include <iostream>
namespace Pop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;


	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

			penAB = gcnew Pen(System::Drawing::Color::Red, 4); // drawing pointer
			penAC = gcnew Pen(System::Drawing::Color::LightBlue, 4);
			penBC = gcnew Pen(System::Drawing::Color::Green, 4);
			graphics = panel->CreateGraphics(); // getting the canvas
			A = new vector<Triangle>();
			bool drawn = false;

			//Add triangle on form

			//A->push_back(Triangle(40, 50, 100, 200, 300, 50)); // 3 points
			A->push_back(Triangle(100, 90.0f, 40.0f)); // side and 2 corners
			//A->push_back(Triangle(200, 230, 45.0f)); // 2 sides and the angle between them
			//A->push_back(Triangle(200, 230, 185, -1, -1)); // 3 sides and point not defined
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel;
		     bool drawn = false;
	protected:

		   Pen^ penAB;
		   Pen^ penAC;
		   Pen^ penBC;
		   Graphics^ graphics;
		   vector <Triangle>* A;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button20;


	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->panel = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// panel
			// 
			this->panel->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel->ForeColor = System::Drawing::Color::Black;
			this->panel->Location = System::Drawing::Point(0, 0);
			this->panel->Name = L"panel";
			this->panel->Size = System::Drawing::Size(393, 461);
			this->panel->TabIndex = 0;
			this->panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button1->Location = System::Drawing::Point(399, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(78, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Нарисовать";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button4->Location = System::Drawing::Point(399, 61);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(78, 24);
			this->button4->TabIndex = 3;
			this->button4->Text = L"↑";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(399, 85);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(35, 28);
			this->button5->TabIndex = 4;
			this->button5->Text = L"←";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(399, 113);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(78, 24);
			this->button2->TabIndex = 5;
			this->button2->Text = L"↓";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(442, 85);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(35, 28);
			this->button3->TabIndex = 6;
			this->button3->Text = L"→";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(399, 141);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(37, 31);
			this->button6->TabIndex = 7;
			this->button6->Text = L"+10°";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(440, 141);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(37, 31);
			this->button7->TabIndex = 8;
			this->button7->Text = L"-10°";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(426, 178);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(25, 21);
			this->button9->TabIndex = 10;
			this->button9->Text = L"↑";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(426, 216);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(25, 21);
			this->button8->TabIndex = 11;
			this->button8->Text = L"↓";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(450, 197);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(18, 23);
			this->button10->TabIndex = 12;
			this->button10->Text = L"→";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(409, 197);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(18, 23);
			this->button11->TabIndex = 13;
			this->button11->Text = L"←";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Info;
			this->textBox1->Enabled = false;
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(426, 197);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(25, 23);
			this->textBox1->TabIndex = 14;
			this->textBox1->Text = L"A";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(426, 244);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(25, 21);
			this->button12->TabIndex = 15;
			this->button12->Text = L"↑";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(409, 264);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(18, 23);
			this->button13->TabIndex = 16;
			this->button13->Text = L"←";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(450, 264);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(18, 23);
			this->button14->TabIndex = 13;
			this->button14->Text = L"→";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(426, 284);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(25, 21);
			this->button15->TabIndex = 12;
			this->button15->Text = L"↓";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(426, 312);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(25, 21);
			this->button16->TabIndex = 17;
			this->button16->Text = L"↑";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(410, 332);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(18, 23);
			this->button17->TabIndex = 17;
			this->button17->Text = L"←";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(450, 332);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(18, 23);
			this->button18->TabIndex = 14;
			this->button18->Text = L"→";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(426, 354);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(25, 21);
			this->button19->TabIndex = 13;
			this->button19->Text = L"↓";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Info;
			this->textBox2->Enabled = false;
			this->textBox2->ForeColor = System::Drawing::Color::Black;
			this->textBox2->Location = System::Drawing::Point(426, 264);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(25, 23);
			this->textBox2->TabIndex = 18;
			this->textBox2->Text = L"B";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Info;
			this->textBox3->Enabled = false;
			this->textBox3->ForeColor = System::Drawing::Color::Black;
			this->textBox3->Location = System::Drawing::Point(426, 332);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(25, 23);
			this->textBox3->TabIndex = 19;
			this->textBox3->Text = L"C";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button20->ForeColor = System::Drawing::Color::FloralWhite;
			this->button20->Location = System::Drawing::Point(399, 416);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(78, 33);
			this->button20->TabIndex = 20;
			this->button20->Text = L"Clear";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 461);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Text = "Треугольники";
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		for (Triangle& elem : *this->A)
		{
			elem.Draw(penAB, penAC, penBC, graphics);
		}
		drawn = true;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (drawn)
		{
			for (Triangle& elem : *this->A)
			{
				graphics->Clear(Color::White);
				elem.Shift(0, -5);
				for (Triangle& elem : *this->A)
				{
					elem.Draw(penAB, penAC, penBC, graphics);
				}
			}
		}
	}
    private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (drawn)
		{
			for (Triangle& elem : *this->A)
			{
				graphics->Clear(Color::White);
				elem.Shift(-5, 0);
				for (Triangle& elem : *this->A)
				{
					elem.Draw(penAB, penAC, penBC, graphics);
				}
			}
		}
    }
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (drawn)
		{
			for (Triangle& elem : *this->A)
			{
				panel->Refresh();
				elem.Shift(5, 0);
				for (Triangle& elem : *this->A)
				{
					elem.Draw(penAB, penAC, penBC, graphics);
				}
			}
		}
    }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (drawn)
		{
			for (Triangle& elem : *this->A)
			{
				graphics->Clear(Color::White);
				elem.Shift(0, 5);
				for (Triangle& elem : *this->A)
				{
					elem.Draw(penAB, penAC, penBC, graphics);
				}
			}
		}
    }
    private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (drawn)
		{
			for (Triangle& elem : *this->A)
			{
				graphics->Clear(Color::White);
				elem.turn(-10.0f);
				for (Triangle& elem : *this->A)
				{
					elem.Draw(penAB, penAC, penBC, graphics);
				}
			}
		}
    }
    private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (drawn)
		{
			for (Triangle& elem : *this->A)
			{
				graphics->Clear(Color::White);
				elem.turn(10.0f);
				for (Triangle& elem : *this->A)
				{
					elem.Draw(penAB, penAC, penBC, graphics);
				}
			}
		}
    }
    private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (drawn)
		{
			for (Triangle& elem : *this->A)
			{
				graphics->Clear(Color::White);
				elem.ShiftA(0, -5);
				for (Triangle& elem : *this->A)
				{
					elem.Draw(penAB, penAC, penBC, graphics);
				}
			}
		}
    }
    private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (drawn)
		{
			for (Triangle& elem : *this->A)
			{
				graphics->Clear(Color::White);
				elem.ShiftA(0, 5);
				for (Triangle& elem : *this->A)
				{
					elem.Draw(penAB, penAC, penBC, graphics);
				}
			}
		}
    }
    private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		if (drawn)
		{
			for (Triangle& elem : *this->A)
			{
				graphics->Clear(Color::White);
				elem.ShiftA(-5, 0);
				for (Triangle& elem : *this->A)
				{
					elem.Draw(penAB, penAC, penBC, graphics);
				}
			}
		}
    }
    private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (drawn)
		{
			for (Triangle& elem : *this->A)
			{
				graphics->Clear(Color::White);
				elem.ShiftA(5, 0);
				for (Triangle& elem : *this->A)
				{
					elem.Draw(penAB, penAC, penBC, graphics);
				}
			}
		}
    }
    private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		if (drawn)
		{
			for (Triangle& elem : *this->A)
			{
				graphics->Clear(Color::White);
				elem.ShiftB(0, -5);
				for (Triangle& elem : *this->A)
				{
					elem.Draw(penAB, penAC, penBC, graphics);
				}
			}
		}

    }
    private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		if (drawn)
		{
			for (Triangle& elem : *this->A)
			{
				graphics->Clear(Color::White);
				elem.ShiftC(-5, 0);
				for (Triangle& elem : *this->A)
				{
					elem.Draw(penAB, penAC, penBC, graphics);
				}			}
		}
    }
    private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		if (drawn)
		{
			for (Triangle& elem : *this->A)
			{
				graphics->Clear(Color::White);
				elem.ShiftB(-5, 0);
				for (Triangle& elem : *this->A)
				{
					elem.Draw(penAB, penAC, penBC, graphics);
				}
			}
		}
    }
    private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		if (drawn)
		{
			for (Triangle& elem : *this->A)
			{
				graphics->Clear(Color::White);
				elem.ShiftB(5, 0);
				for (Triangle& elem : *this->A)
				{
					elem.Draw(penAB, penAC, penBC, graphics);
				}
			}
		}
    }
    private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		if (drawn)
		{
			for (Triangle& elem : *this->A)
			{
				graphics->Clear(Color::White);
				elem.ShiftB(0, 5);
				for (Triangle& elem : *this->A)
				{
					elem.Draw(penAB, penAC, penBC, graphics);
				}
			}
		}
    }
    private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		if (drawn)
		{
			for (Triangle& elem : *this->A)
			{
				graphics->Clear(Color::White);
				elem.ShiftC(0, -5);
				for (Triangle& elem : *this->A)
				{
					elem.Draw(penAB, penAC, penBC, graphics);
				}
			}
		}
    }
    private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		if (drawn)
		{
			for (Triangle& elem : *this->A)
			{
				graphics->Clear(Color::White);
				elem.ShiftC(5, 0);
				for (Triangle& elem : *this->A)
				{
					elem.Draw(penAB, penAC, penBC, graphics);
				}
			}
		}
    }
    private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		if (drawn)
		{
			for (Triangle& elem : *this->A)
			{
				graphics->Clear(Color::White);
				elem.ShiftC(0, 5);
				for (Triangle& elem : *this->A)
				{
					elem.Draw(penAB, penAC, penBC, graphics);
				}
			}
		}
    }
    private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		graphics->Clear(Color::White);
		drawn = false;
    }
};

}

