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
            this->current_sign = "";
			this->counter = 0;
			this->game_with_pc = false;
			this->save_cell = 0;
			this->remaining_cells = 9;
			this->array_of_cells = gcnew array<int>(9){1,2,3,4,5,6,7,8,9};
            this->init_first_sign();
		}

	protected:
		/// <summary>
		/// ывфывы
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
    protected: System::String^ current_sign;
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
	private: bool game_with_pc;
    private: bool is_pc_first_player;
<<<<<<< HEAD
	private: int remaining_cells;
	private: int level_game;
=======
	private: int save_cell;
	private: int remaining_cells;
>>>>>>> 720d2aea89e5d3180abbfc1ef19ef0f8c70ab9b2
	private: array<int>^ array_of_cells;  
	private: System::Windows::Forms::Button^  button11;









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
<<<<<<< HEAD
=======


		private: void step_of_game(System::Windows::Forms::Button^ button, int number_of_delete_cell)
				 {
                    try_select_button(button);
				 }
>>>>>>> 720d2aea89e5d3180abbfc1ef19ef0f8c70ab9b2
			
		private: void delete_one_cell(int button_remaining_index)
				{
                    for (int i = button_remaining_index; i<remaining_cells - 1; i++)
                    {
                        array_of_cells[i] = array_of_cells[i+1];
                    }
                    remaining_cells--;
				}

        private: void select_random_cell()
				 {
					 srand(time(NULL));
					 int random_cell = rand() % remaining_cells;
                     System::Windows::Forms::Button^ random_button = convert_button_remaining_index_to_button(random_cell);
                     select_button(random_button);
				 }

        private: void write_sign_on_button(System::Windows::Forms::Button^ button)
				 {
                     button->Text = current_sign;
				 }

        private: System::Windows::Forms::Button^ convert_button_remaining_index_to_button(int button_remaining_index)
        {
                     System::Windows::Forms::Button^ button;
                     int button_number = array_of_cells[button_remaining_index];
                     switch (button_number)
                     {
                         case (1) : button = button1; break;
                         case (2) : button = button2; break;
                         case (3) : button = button3; break;
                         case (4) : button = button4; break;
                         case (5) : button = button5; break;
                         case (6) : button = button6; break;
                         case (7) : button = button7; break;
                         case (8) : button = button8; break;
                         case (9) : button = button9; break;
                     }

                     return button;
        }

        private: int convert_button_to_number(System::Windows::Forms::Button^ button)
        {
                     if (button == button1)
                         return 1;
                     else if (button == button2)
                         return 2;
                     else if (button == button3)
                         return 3;
                     else if (button == button4)
                         return 4;
                     else if (button == button5)
                         return 5;
                     else if (button == button6)
                         return 6;
                     else if (button == button7)
                         return 7;
                     else if (button == button8)
                         return 8;
                     else if (button == button9)
                         return 9;
        }

        private: void init_first_sign()
        {
                     srand(time(NULL));
                     if (rand() % 2)
                         current_sign = "o";
                     else
                         current_sign = "x";
        }

        private: void toggle_sign()
        { 
				    if(current_sign == "x") 
                        current_sign = "o";
				    else 
                        current_sign = "x";
        }
	
<<<<<<< HEAD
		private: bool check_unfinished_game()
				 {
					 bool is_game_unfinished = label1->Text == "";
					 return is_game_unfinished;
				 }
        private: void try_select_button(System::Windows::Forms::Button^ button) 
				 {                                                          
                     bool is_it_finish = check_unfinished_game();
                     if (is_it_finish && button->Text == "")
					 {
                         select_button(button);
						 bool is_it_finish = check_unfinished_game();
                         if (game_with_pc && is_it_finish)
                         select_random_cell();
=======
        private: void try_select_button(System::Windows::Forms::Button^ button) //÷òîáû íà çàíÿòóþ ÿ÷åéêó
				 {                                                          // áîëüøå íå íàæèìàëè
                     bool is_game_unfinished = label1->Text == "";
                     if (is_game_unfinished && button->Text == "")
					 {
                         select_button(button);
                         if (game_with_pc)
                            select_random_cell();
>>>>>>> 720d2aea89e5d3180abbfc1ef19ef0f8c70ab9b2
					 }
				 }

        private: void select_button(System::Windows::Forms::Button^ button)
        {
                toggle_sign();
                counter++;
                write_sign_on_button(button);
                int button_number = convert_button_to_number(button);
<<<<<<< HEAD
                int button_remaining_index = convert_button_number_to_remaining_index(button_number);
=======
                int button_remaining_index = convet_button_number_to_remaining_index(button_number);
>>>>>>> 720d2aea89e5d3180abbfc1ef19ef0f8c70ab9b2
                delete_one_cell(button_remaining_index);

                check_win();
                check_draw();
<<<<<<< HEAD
        }

        private: int convert_button_number_to_remaining_index(int button_number)
=======

                label2->Text = "";
                for (int x = 0; x < 9; x++) {
                    label2->Text += array_of_cells[x];
                }
        }

        private: int convet_button_number_to_remaining_index(int button_number)
>>>>>>> 720d2aea89e5d3180abbfc1ef19ef0f8c70ab9b2
        {
                for (int i = 0; i < remaining_cells; i++)
                {
                    if (array_of_cells[i] == button_number)
                    {
                        return i;
                    }
                }
        }

<<<<<<< HEAD
		private: void check_draw() {  
=======
		private: void check_draw() {  //ïðîâåðÿåì íà íè÷üþ
>>>>>>> 720d2aea89e5d3180abbfc1ef19ef0f8c70ab9b2
                     bool is_game_unfinished = label1->Text == "";
					 if(counter == 9 && is_game_unfinished)
					    label1->Text = "DRAW";
				 }

		private: void line_win(System::Windows::Forms::Button^ button1, System::Windows::Forms::Button^ button2, System::Windows::Forms::Button^ button3){
					 
					if(button1->Text == button2->Text && button2->Text == button3->Text) 
					 {
						 if(button1->Text == "x") 
                            label1->Text = "WIN X";
						 else if(button1->Text == "o") 
                            label1->Text = "WIN O";
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


		private: void restart()
            {
                 remaining_cells = 9;
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
                 init_first_sign();
				 counter = 0;
			}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
<<<<<<< HEAD
				 try_select_button(button1);
			 }

    private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 try_select_button(button2);
		    }

    private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			     try_select_button(button3);
		     }
    private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			     try_select_button(button4);
		     }
    private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			     try_select_button(button5);
		     }
    private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			     try_select_button(button6);
		     }
    private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			     try_select_button(button7);
		     }
    private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			     try_select_button(button8);
		     }
    private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			     try_select_button(button9);
=======
				 step_of_game(button1, 1);
			 }

    private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 step_of_game(button2, 2);
		    }

    private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			     step_of_game(button3, 3);
		     }
    private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			     step_of_game(button4, 4);
		     }
    private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			     step_of_game(button5, 5);
		     }
    private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			     step_of_game(button6, 6);
		     }
    private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			     step_of_game(button7, 7);
		     }
    private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			     step_of_game(button8, 8);
		     }
    private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			     step_of_game(button9, 9);
>>>>>>> 720d2aea89e5d3180abbfc1ef19ef0f8c70ab9b2
		     }

    private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
                restart();
            }


    private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
                 restart();
                 initiate_pc_game();
		    }

    private: void initiate_pc_game() {
        array_of_cells = gcnew array<int>(9){ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
        game_with_pc = true;
        select_randomly_first_player();
        if (is_pc_first_player)
        {
            select_random_cell();
        }
    }

    private: void select_randomly_first_player()
        {
            srand(time(NULL));
            int i = rand() % 10;
            if (i < 5) 
            { 
                is_pc_first_player = false;
            }
            else 
            { 
                is_pc_first_player = true; 
            }
        }
    };
<<<<<<< HEAD
}
=======
}
>>>>>>> 720d2aea89e5d3180abbfc1ef19ef0f8c70ab9b2
