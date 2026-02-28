#pragma once
#include <string>

namespace GravelCalc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Button^ button6;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(108, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 64);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(111, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 103);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(108, 20);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(15, 142);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(108, 20);
			this->textBox4->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(15, 181);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(108, 20);
			this->textBox5->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Масса навески 1, кг";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Масса навески 2, кг";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 87);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Масса навески 3, кг";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 126);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Масса навески 4, кг";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 165);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(111, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Масса навески 5, кг";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(126, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(166, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Масса примесей фракции 1, кг";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(126, 48);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(166, 13);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Масса примесей фракции 2, кг";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(126, 87);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(166, 13);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Масса примесей фракции 3, кг";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(126, 126);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(166, 13);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Масса примесей фракции 4, кг";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(126, 165);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(169, 13);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Масса примесей  фракции 5, кг";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(129, 25);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(108, 20);
			this->textBox6->TabIndex = 15;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(129, 64);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(108, 20);
			this->textBox7->TabIndex = 16;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(129, 103);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(108, 20);
			this->textBox8->TabIndex = 17;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(132, 142);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(108, 20);
			this->textBox9->TabIndex = 18;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(132, 181);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(108, 20);
			this->textBox10->TabIndex = 19;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(301, 9);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(137, 13);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Содержание примесей, %";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(301, 48);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(137, 13);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Содержание примесей, %";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(301, 87);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(137, 13);
			this->label13->TabIndex = 22;
			this->label13->Text = L"Содержание примесей, %";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(301, 126);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(137, 13);
			this->label14->TabIndex = 23;
			this->label14->Text = L"Содержание примесей, %";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(301, 165);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(137, 13);
			this->label15->TabIndex = 24;
			this->label15->Text = L"Содержание примесей, %";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(304, 25);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(108, 20);
			this->textBox11->TabIndex = 25;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(304, 64);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(108, 20);
			this->textBox12->TabIndex = 26;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(304, 103);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(108, 20);
			this->textBox13->TabIndex = 27;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(304, 142);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(108, 20);
			this->textBox14->TabIndex = 28;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(304, 181);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(108, 20);
			this->textBox15->TabIndex = 29;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(12, 250);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(221, 13);
			this->label16->TabIndex = 30;
			this->label16->Text = L"Среднее арифметическое содержание, %:";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(15, 277);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(108, 20);
			this->textBox16->TabIndex = 31;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 303);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 20);
			this->button1->TabIndex = 32;
			this->button1->Text = L"V";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 207);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 23);
			this->button2->TabIndex = 34;
			this->button2->Text = L"Расчёт";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(132, 207);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(108, 23);
			this->button3->TabIndex = 35;
			this->button3->Text = L"Очистить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(6, 11);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(0, 13);
			this->label17->TabIndex = 36;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(6, 24);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(0, 13);
			this->label18->TabIndex = 37;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(6, 37);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(0, 13);
			this->label19->TabIndex = 38;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Location = System::Drawing::Point(15, 323);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(108, 57);
			this->groupBox1->TabIndex = 39;
			this->groupBox1->TabStop = false;
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(15, 71);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(108, 23);
			this->button4->TabIndex = 40;
			this->button4->Text = L"Итоговый рассчёт";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(132, 334);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(101, 44);
			this->button5->TabIndex = 41;
			this->button5->Text = L"Очистить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(12, 16);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(196, 26);
			this->label20->TabIndex = 42;
			this->label20->Text = L"Итоговое содержание слабых зёрен,\r\nпримесей и включений металла, %:";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(15, 45);
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(222, 20);
			this->textBox17->TabIndex = 43;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->textBox17);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->label21);
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Controls->Add(this->label22);
			this->groupBox2->Controls->Add(this->label23);
			this->groupBox2->Location = System::Drawing::Point(286, 277);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(252, 103);
			this->groupBox2->TabIndex = 40;
			this->groupBox2->TabStop = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(6, 11);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(0, 13);
			this->label21->TabIndex = 36;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(6, 24);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(0, 13);
			this->label22->TabIndex = 37;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(6, 37);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(0, 13);
			this->label23->TabIndex = 38;
			// 
			// button6
			// 
			this->button6->Enabled = false;
			this->button6->Location = System::Drawing::Point(129, 71);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(108, 23);
			this->button6->TabIndex = 44;
			this->button6->Text = L"Очистить";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(550, 392);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Name = L"MyForm";
			this->Text = L"Щебень";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!(textBox1->Text == "") && !(textBox6->Text == "")) {
		textBox11->Text = System::Convert::ToString(System::Convert::ToDouble(textBox6->Text) / System::Convert::ToDouble(textBox1->Text) * 100);
	}
	if (!(textBox2->Text == "") && !(textBox7->Text == "")) {
		textBox12->Text = System::Convert::ToString(System::Convert::ToDouble(textBox7->Text) / System::Convert::ToDouble(textBox2->Text) * 100);
	}
	if (!(textBox3->Text == "") && !(textBox8->Text == "")) {
		textBox13->Text = System::Convert::ToString(System::Convert::ToDouble(textBox8->Text) / System::Convert::ToDouble(textBox3->Text) * 100);
	}
	if (!(textBox4->Text == "") && !(textBox9->Text == "")) {
		textBox14->Text = System::Convert::ToString(System::Convert::ToDouble(textBox9->Text) / System::Convert::ToDouble(textBox4->Text) * 100);
	}
	if (!(textBox5->Text == "") && !(textBox10->Text == "")) {
		textBox15->Text = System::Convert::ToString(System::Convert::ToDouble(textBox10->Text) / System::Convert::ToDouble(textBox5->Text) * 100);
	}
	Double sum = 0.0;
	Double divider = 0;
	array<TextBox^>^ boxes = { textBox11, textBox12, textBox13, textBox14, textBox15 };
	for each (TextBox ^ box in boxes) {
		if (!(box->Text == "")) {
			sum += System::Convert::ToDouble(box->Text);
			divider++;
		}
			}
	if (!(divider == 0)) {
		textBox16->Text = System::Convert::ToString(sum/divider);
	}
	else {
		textBox16->Text = "Не удалось посчитать";
	}
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!(textBox16->Text == "Не удалось посчитать") && (label17->Text == "")) {
		label17->Text = textBox16->Text;
	}
	else if (!(textBox16->Text == "Не удалось посчитать") && (label18->Text == "")) {
		label18->Text = textBox16->Text;
	}
	else if (!(textBox16->Text == "Не удалось посчитать") && (label19->Text == "")) {
		label19->Text = textBox16->Text;
		button4->Enabled = true;
	}
}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		array<TextBox^>^ boxes = { textBox1, textBox2, textBox3, textBox4, textBox5, textBox6, textBox7, textBox8, textBox9, textBox10, textBox11, textBox12, textBox13, textBox14, textBox15, textBox16 };
		for each (TextBox ^ box in boxes) {
			if (!(box->Text == "")) {
				box->Text = "";
			}
		}
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	label17->Text = "";
	label18->Text = "";
	label19->Text = "";
	button4->Enabled = false;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox17->Text = System::Convert::ToString((System::Convert::ToDouble(label17->Text)+ System::Convert::ToDouble(label18->Text)+ System::Convert::ToDouble(label19->Text))/3.0);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox17->Text = "";
}
};
}
