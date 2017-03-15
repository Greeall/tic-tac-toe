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
	/// —водка дл€ MyForm
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
			this->x_i_o = "";
			this->counter = 0;
			this->play_with_pc = 0;
			this->save_cell = 0;
			this->how_cells = 9;
			this->arr_of_cells = gcnew array<int>(9){1,2,3,4,5,6,7,8,9};
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
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
	protected: System::String^ x_i_o;
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
	private:  int how_cells;
	private: array<int>^ arr_of_cells;  
	private: int del;
		 
	private: System::Windows::Forms::Button^  button11;







	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(285, 262);
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

	private: void pc_game(array<int>^ m){
					 
					

			 }
	
		private: void del_one_cell(int k)   //удалить необходимый элемент из массива
			{
				for (int i=k-1;i<how_cells-1;i++) {arr_of_cells[i]=arr_of_cells[i+1];}
				//int f = 0;
				//for(int i=0; i<how_cells-1;i++) {  f = f + arr_of_cells[i];}
				//label1->Text = Convert::ToString(f);
			}

		private: void random_cell()  //выбрать оставшуюс€ пустую €чейку, удалить еЄ, уменьшить счечик оставшихс€ €чеек
				 {
					 
					 srand (time(NULL));
					 del = arr_of_cells[rand() % how_cells];
					 del_one_cell(del);
					 how_cells--;
				 }

		private: void switcher()
				 {
					switch(del)
					{
						case (1): button1->Text == x_i_o;
						case (2): button2->Text == x_i_o;
						case (3): button3->Text == x_i_o;
						case (4): button4->Text == x_i_o;
						case (5): button5->Text == x_i_o;
						case (6): button6->Text == x_i_o;
						case (7): button7->Text == x_i_o;
						case (8): button8->Text == x_i_o;
						case (9): button9->Text == x_i_o;
					}
				 }

	    private: void random_first_pc() //кто первый ходит: программа или человек
			 {
					 change_var();
					 srand (time(NULL));
					 int f_n_i_x = rand()%10;
					 if(f_n_i_x < 5 ) {  first_player = 0;} 
					 else {  first_player = 1;} 

			 }
		


		private: void change_var() //помен€т крестик на нолик и наоборот, если ничего нет инициализировать 
				 {					//случайным образом крестик ли нолик

					 srand (time(NULL));
					 int o_x = rand()%10;

					 if(o_x < 5 && x_i_o == "") { x_i_o = "o";} 
					 else if(x_i_o == "" && o_x >= 5) {x_i_o = "x";} 
					 else
						{
								 if(x_i_o == "x") {x_i_o="o";}
								 else {x_i_o="x";}
					    }
				 }
	
		private: void prevention_repeat_move(System::Windows::Forms::Button^ button) //чтобы на зан€тую €чейку
				 {                                                          // больше не нажимали
					 if(button->Text == "")
					 {
						 change_var();
						 button->Text = x_i_o;
						 counter++; 
						 draw();
					 }
				 }

		private: void draw() {  //провер€ем на ничью
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
				 x_i_o = "";
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
				 pc_game(arr_of_cells);
			 }
				 
			 }
    private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(play_with_pc == 0)
			 {
				finish_game(button2);
			 }
			 else
			 {
				// pc_game();
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
				// pc_game();
			 }
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(play_with_pc == 0)
			 {
				finish_game(button4);
			 }
			 else
			 {
				// pc_game();
			 }
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(play_with_pc == 0)
			 {
				finish_game(button5);
			 }
			 else
			 {
				// pc_game();
			 }
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(play_with_pc == 0)
			 {
				finish_game(button6);
			 }
			 else
			 {
				// pc_game();
			 }
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(play_with_pc == 0)
			 {
				finish_game(button7);
			 }
			 else
			 {
				// pc_game();
			 }
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(play_with_pc == 0)
			 {
				finish_game(button8);
			 }
			 else
			 {
				// pc_game();
			 }
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(play_with_pc == 0)
			 {
				finish_game(button9);
			 }
			 else
			 {
				// pc_game();
				 
			 }
		 }

private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {

			 play_with_pc = 1;
			 restart();
			// random_first_pc();
			// if(first_player == 1)		//1 - компьютер начинает игру. крестик или нолик это - инфа уже есть. 
			// {
				 random_cell();		    //выбираем €чейку и удал€ем из свободных
				// switcher();			//заполн€ем €чейку значением 
				// change_var();		    //мен€ем значок 
										//должен теперь ходить человек
										//находимс€ в режиме ожидани€ 
			// }							//если выпадает 0, то находимс€ в режиме ожидани€
		 }
};
}
