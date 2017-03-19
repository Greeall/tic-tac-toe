#pragma once
#include <stdlib.h> 
#include <ctime>
#include <vector> 

namespace first {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòðóêòîðà
			//
			this->cross_or_zero = "";
			this->counter = 0;
			this->play_with_pc = 0;
			this->save_cell = 0;
			this->remaining_cells = 9;
			this->array_of_cells = gcnew array<int>(9){1,2,3,4,5,6,7,8,9};
			
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû ывфывы
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 

	protected: 
	protected: System::String^ cross_or_zero;
	private: System::Windows::Forms::Button^  button2;
	protected: 
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Label^  label1;
	private: int counter;
	private: int play_with_pc;
	private: int first_player;
	private: int save_cell;
	private:  int remaining_cells;
	private: array<int>^ array_of_cells;  
	
	private: int del;
	private: int del1;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;







	private:
		/// <summary>
		/// Òðåáóåòñÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Îáÿçàòåëüíûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà - íå èçìåíÿéòå
		/// ñîäåðæèìîå äàííîãî ìåòîäà ïðè ïîìîùè ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(28, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(29, 25);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(63, 25);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(29, 25);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(98, 25);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(29, 25);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(28, 60);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(29, 25);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(63, 60);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(29, 25);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(98, 60);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(29, 25);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(28, 95);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(29, 25);
			this->button7->TabIndex = 6;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(63, 95);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(29, 25);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(98, 95);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(29, 25);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(28, 211);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(99, 29);
			this->button10->TabIndex = 9;
			this->button10->Text = L"restart";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(60, 166);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 10;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(162, 27);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(91, 23);
			this->button11->TabIndex = 11;
			this->button11->Text = L"play with PC";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(218, 227);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(218, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"label3";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(285, 262);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"tic-tac";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		private: void step_of_game(System::Windows::Forms::Button^ button, int number_of_delete_cell)
				 {
					  if(play_with_pc == 0)
						 {
							finish_game(button);
						 }
					 else
						 {
							 finish_game(button);
							 delete_one_cell(number_of_delete_cell);
							 remaining_cells--;
							 change_var();
							 random_cell();		    
							 switcher();
						 }
				 }
			
		private: void delete_one_cell(int k)
				{
					for (int i=k;i<remaining_cells;i++) {array_of_cells[i]=array_of_cells[i+1];}
				}

		private: void random_cell()  
				 {
					 srand (time(NULL));
					 del = rand() % remaining_cells;
					 delete_one_cell(del);
					 remaining_cells--;
				 }

		private: void switcher() 
				 {
					switch(del)
					{
						case (1): button1->Text = cross_or_zero; break;
						case (2): button2->Text = cross_or_zero; break;
						case (3): button3->Text = cross_or_zero; break;
						case (4): button4->Text = cross_or_zero; break;
						case (5): button5->Text = cross_or_zero; break;
						case (6): button6->Text = cross_or_zero; break;
						case (7): button7->Text = cross_or_zero; break;
						case (8): button8->Text = cross_or_zero; break;
						case (9): button9->Text = cross_or_zero; break;
					}
				 }

	    private: void random_first_pc() 
			 { 
					 srand (time(NULL));
					 int i = rand()%10;
					 if(i < 5 ) {  first_player = 0;} 
					 else {  first_player = 1;} 
			 }
		


		private: void change_var()
				 {					
					 srand (time(NULL));
					 int i = rand()%10;

					 if(i < 5 && cross_or_zero == "") { cross_or_zero = "o";} 
					 else if(cross_or_zero == "" && i >= 5) {cross_or_zero = "x";} 
					 else
						{
								 if(cross_or_zero == "x") {cross_or_zero="o";}
								 else {cross_or_zero="x";}
					    }
				 }
	
		private: void prevention_repeat_move(System::Windows::Forms::Button^ button) //÷òîáû íà çàíÿòóþ ÿ÷åéêó
				 {                                                          // áîëüøå íå íàæèìàëè
					 if(button->Text == "")
					 {
						 change_var();
						 button->Text = cross_or_zero;
						 counter++; 
						 draw();
					 }
				 }

		private: void draw() {  //ïðîâåðÿåì íà íè÷üþ
					 if(counter == 9 && label1->Text == "")
					 {label1->Text = "DRAW";}
				 }

		private: void line_win(System::Windows::Forms::Button^ button1, System::Windows::Forms::Button^ button2, System::Windows::Forms::Button^ button3){
					 
					if(button1->Text == button2->Text && button2->Text == button3->Text) 
					 {
						 if(button1->Text == "x") { label1->Text = "WIN X"; }
						 else if(button1->Text == "o") { label1->Text = "WIN O";}
					 }
				 }

		private: void check_win()
				 {
					 line_win(button1, button2, button3);
					 line_win(button4, button5, button6);
					 line_win(button7, button8, button9);
					 line_win(button1, button4, button7);
					 line_win(button2, button5, button8);
					 line_win(button3, button6, button9);
					 line_win(button1, button5, button9);
					 line_win(button3, button5, button7);
				 }

		private: void finish_game(System::Windows::Forms::Button^ button)
				 {
					  if(label1->Text != "") 
					  counter = 100;
					   if(counter != 100)
							{
								prevention_repeat_move(button);
								check_win();
							 }
				 }


		private: void restart(){

				 button1->Text = "";
				 button2->Text = "";
				 button3->Text = "";
				 button4->Text = "";
				 button5->Text = "";
				 button6->Text = "";
				 button7->Text = "";
				 button8->Text = "";
				 button9->Text = "";
				 label1->Text = "";
				 cross_or_zero = "";
				 counter = 0;
				 }
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 if(play_with_pc == 0)
					 {
						finish_game(button1);
					 }
				else
					 {
				
				  finish_game(button1);
				 delete_one_cell(1);
				 how_cells--;
				 change_var();
				 random_cell();		    //âûáèðàåì ÿ÷åéêó è óäàëÿåì èç ñâîáîäíûõ
				 switcher();
					 }
				 
			 }
    private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(play_with_pc == 0)
			 {
				finish_game(button2);
			 }
			 else
			 {
				
				  finish_game(button2);
				 delete_one_cell(2);
				 how_cells--;
				 change_var();
				 random_cell();		    //âûáèðàåì ÿ÷åéêó è óäàëÿåì èç ñâîáîäíûõ
				 switcher();
			 }
		 }
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
				 restart();
			 }


private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(play_with_pc == 0)
			 {
				finish_game(button3);
			 }
			 else
			 {
				 
				 finish_game(button3);
				 delete_one_cell(3);
				 how_cells--;
				 change_var();
				 random_cell();		    //âûáèðàåì ÿ÷åéêó è óäàëÿåì èç ñâîáîäíûõ
				 switcher();
			 }
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(play_with_pc == 0)
			 {
				finish_game(button4);
			 }
			 else
			 {
				 
				  finish_game(button4);
				 delete_one_cell(4);
				 how_cells--;
				 change_var();
				 random_cell();		    //âûáèðàåì ÿ÷åéêó è óäàëÿåì èç ñâîáîäíûõ
				 switcher();
			 }
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(play_with_pc == 0)
			 {
				finish_game(button5);
			 }
			 else
			 {
				
				 finish_game(button5);
				 delete_one_cell(5);
				 how_cells--;
				 change_var();
				 random_cell();		    //âûáèðàåì ÿ÷åéêó è óäàëÿåì èç ñâîáîäíûõ
				 switcher();
			 }
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(play_with_pc == 0)
			 {
				finish_game(button6);
			 }
			 else
			 {
				
				  finish_game(button6);
				 delete_one_cell(6);
				 how_cells--;
				 change_var();
				 random_cell();		    //âûáèðàåì ÿ÷åéêó è óäàëÿåì èç ñâîáîäíûõ
				 switcher();
			 }
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(play_with_pc == 0)
			 {
				finish_game(button7);
			 }
			 else
			 {
				 
				 finish_game(button7);
				 delete_one_cell(7);
				 how_cells--;
				 change_var();
				 random_cell();		    //âûáèðàåì ÿ÷åéêó è óäàëÿåì èç ñâîáîäíûõ
				 switcher();
			 }
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(play_with_pc == 0)
			 {
				finish_game(button8);
			 }
			 else
			 {
				
				 finish_game(button8);
				 delete_one_cell(8);
				 how_cells--;
				 change_var();
				 random_cell();		    //âûáèðàåì ÿ÷åéêó è óäàëÿåì èç ñâîáîäíûõ
				 switcher();
			 }
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(play_with_pc == 0)
			 {
				finish_game(button9);
			 }
			 else
			 {
				 finish_game(button9);
				 delete_one_cell(9);
				 how_cells--;
				 change_var();
				 random_cell();		    //âûáèðàåì ÿ÷åéêó è óäàëÿåì èç ñâîáîäíûõ
				 switcher();
			 }
		 }

private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {

			 
			 array_of_cells = gcnew array<int>(9){1,2,3,4,5,6,7,8,9};
			 play_with_pc = 1;
			 how_cells = 9;
			 restart();
			 random_first_pc();
			
			 if(first_player == 1)		
			 {
				 random_cell();		
				 change_var();
				 switcher();			
				 
			 }							
		 }
};
}
