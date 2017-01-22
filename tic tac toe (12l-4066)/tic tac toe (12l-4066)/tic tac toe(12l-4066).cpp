# include <iostream>
#include <windows.h>
#include <string>

using namespace std;
/*  
Note:-The following is the list of integers(their name and their purpose)
input(input of player 1).
input(input of player 2).
g(It helps to exit the program if you enter 0 at play again option and also its a general integer to control activition of go function)
c1,c2,c3(stores the value of check function)(these help to declare a winner)
integers co,con,cont,contr,contro are declared because if go function returns -1 the program is closed.
*/string player1, player2;//to store the name of player 1 and 2
char board[]= { '0','1','2','3','4','5','6','7','8','9'},p1,p2;
	//the function display shows the board...
void display ()
{       cout<<"                        Tic Tac Toe          "<<endl<<endl;
		cout<<"   Symbol of "<< player1 <<" is :- X"<<"              "<<"Symbol of "<< player2 <<" is:- O"<<endl;
		cout<<endl<<endl;
		cout<<"                       "<<"___________"<<endl;
		cout<<"                      |   |   |   |"<<endl;
	    cout <<"                      | "<<board[1]<<" | "<<board[2]<<" | "<<board[3]<<" |"<<endl;
   //cout<<" "<<"|"<<" "<<"|"<<endl;
		cout <<"                      |___|___|___|"<<endl;
		cout<<"                      |   |   |   |"<<endl;
		cout <<"                      | "<<  board[4]<<" | "<<board[5]<<" | "<<board[6]<<" |"<<endl;
		cout <<"                      |___|___|___|"<<endl;
		cout<<"                      |   |   |   |"<<endl;
		cout <<"                      | "<<  board[7]<<" | "<<board[8]<<" | "<<board[9]<<" |"<<endl;
		cout<<" "<<"                     |___|"<<""<<"___|"<<"___|"<<endl<<endl<<endl; 
}
	
	void print()
	{
		cout<< player1 <<" is the Winner"<<endl<<endl;
	}
	void print1()
	{
		cout<< player2 <<" is the Winner"<<endl<<endl;
	}
	//check function checks differnt sceniorios for declaring a winner.and returns 1 if player 1 wins and 2 if player 2 wins.
	int check()
	{
		if(board[1]==88 && board[1] == board[2] && board[2]==board[3])
		return 1;		
		else if(board[4]==88 && board[4]==board[5] &&board[5]==board[6])
		return 1;
		else if(board[7]==88&&board[7]==board[8] && board[8]==board[9])
		return 1;
		else if(board[1]==88&&board[1]==board[4] && board[4]==board[7])
			return 1;
		else if( board[2]==88&&board[2]==board[5] && board[5]==board[8])
			return 1;
		else if(board[3]==88&&board[3]==board[6]&& board[6]==board[9])
			return 1;
		else if(board[1]==88&&board[1]==board[5]&&board[5]==board[9])
			return 1;
		else if(board[3]==88&&board[3]==board[5]&&board[5]==board[7])
			return 1;
		else if
			(board[1]==79 && board[1] == board[2] && board[2]==board[3])
		return 2;
		else if(board[4]==79 && board[4]==board[5] &&board[5]==board[6])
		return 2;
		else if(board[7]==79&&board[7]==board[8] && board[8]==board[9])
		return 2;
		else if(board[1]==79&&board[1]==board[4] && board[4]==board[7])
		return 2;
		else if( board[2]==79&&board[2]==board[5] && board[5]==board[8])
		return 2;
		else if(board[3]==79&&board[3]==board[6]&& board[6]==board[9])
		return 2;
		else if(board[1]==79&&board[1]==board[5]&&board[5]==board[9])
			return 2;
		else if(board[3]==79&&board[3]==board[5]&&board[5]==board[7])
			return 2;
	}
	int input=0;//For taking input from both player 1 and 2.
	int wi=0;//to Allow while loop of restrict to work.
	//to restrict adding invalid by player 1 and 2.
	void restrict1()
	{ if(input>9 || input<=0 )//if input is less then 0 or greater then 9 its gives an error
{
			
	while(wi!=2)
	{
		if(input>9 || input<=0)//while loop runs till Player enter between 1 and 9.
		{
			cout<<"Your input is invalid.Please input between 1-9'"<<endl;
			cin>>input;
	      if(input<=9 && input>0)
			{	
				wi=2; 
			}
	    }
	}
}wi=0;
	              }//tor restrict adding invalid by player 2
	void restric2()
{	while(wi!=2)
	{
		if(board[input]==88 || board[input]==79 )
   {
	    cout<<"    The Slot is already taken   "<<endl<<"  Please Input again"<<endl;
		cin>>input;
   } 
	if(board[input]!=88 && board[input]!=79)
	{
		wi=2;
	}
   }wi=0;
}
	int g=0;			//If you want to play again	this function does the work
int go()
{		
		cout<<"Do you want to play again?(0/1).Enter 1 to play again.0 to Exit"<<endl;
	    cin>>g;
		if(g!=1 && g!=0)//if input is neither 0 nor 1 its gives an error
		 {
			cout<<"Your input is invalid.Please input  0/1"<<endl;
	        cin>>g;
		if(g!=1 && g!=0)//if input is neither 0 nor 1 its gives an error
		{
			cout<<"Your input is invalid.Please input  0/1"<<endl;
	        cin>>g;
		}
		 }
		 if(g==1)
		 {//if you enter 1 it shows a new board
			system("cls");//clears the screen in case you want to play again.
		    board[1] = '1';
			board[2] = '2';
			board[3] = '3';
			board[4] = '4';
			board[5] = '5';
			board[6] = '6';
			board[7] = '7';
			board[8] = '8';
			board[9] = '9';
			display();}  
		    if(g==0){//if you enter 1 the program closes
			cout<<"Thanks for playing"<<endl<<endl;
			return -1;
		}
}
HANDLE diff_clr = GetStdHandle(STD_OUTPUT_HANDLE);
void stackoverlow(){
while(!(std::cin>>input) )
	{
		
		
    std::cin.clear();
    std::cin.ignore();
	cout<<"Invalid"<<endl<<"PLease enter a number"<<endl;	
}   }
int main()
{
	system("Color Fc");
	cout<<"Player 1 Enter your Name??"<<endl;//takes the name of player 1 and 2
	cin>>player1;
	system("cls");//clears the screen after each intrval.
	system("Color Fc");
	cout<<"Player 2 Enter your Name??"<<endl;
	cin>>player2;
	system("cls");
	display ();
	//declaring symbols for player 1 and 2.these are fixed.
	char X=88,O=79;
	int w=1;//variable w helps control the while loop
//variable c is for the movement of while loop(it works 4 time).
	
while( w!=5)
{
	//If condition to control loop when go on function is called
	system("Color F1");
	cout<<player1<<":- (Enter below)"<<endl;
	
	/*cin>>input;*/
	stackoverlow();
	//these if command restricts the input to avoid any ambiguity.same for player 2.
	restrict1();
	restric2();
	restrict1();
	restric2();
	board[input]=X;
	system("cls");
	display();
    int c1=check();//the integer c1 stores the value of check and declare player 1 winner if c1=1
     if (c1==1)
{   
	print();
	//integers co,con,cont,contr,contro are declared because if go function returns -1 the program is closed.
	int con=go();
	if (con==-1)
	{
		return 0;
	}//to close the program 
	//this loops work only if player 1 wins and he wants to play again.
	if(g==1)	//THis loop take the value of player 1 if you want to play again.
	   {
		system("Color F1");
		cout<<player1<<":- (Enter below)"<<endl;
		cin>>input;
		stackoverlow();
	//these if command restricts the input to avoid any ambiguity.same for player 2.
		restrict1();
		restric2();
		restrict1();
		restric2();
      }
	board[input]=X;
	system("cls");
	display();
	//these variables are set to their original value so that program can run again.
	c1=0;
	w=1 ;
}
	system("Color Fc");//From here player 2 input starts
	cout<<player2<<":-(Enter below)"<<endl;
	//cin>>input;
	stackoverlow();
    restrict1();
	restric2();
	restrict1();
	restric2();
	board[input]=O;system("cls");
    display();
	int c2=check();//the integer c2 stores the value of check and declare player 2 winner if c2=1
	if (c2==2)
{
	print1();
	int co=go();
	if (co==-1){return 0;}//to close the program 
	//these vaiables are set to their original value
	w=0;
	c2=0;
	
}
	w++;
	if(w==5)
	{//player 1 gets an extra turn.

		system("Color F1");
		cout<<player1<<":-(Enter)."<<endl;
		//cin>>input;
		stackoverlow();
		restrict1();
		restric2();
		restrict1();
		restric2();
		board[input]=X;
		system("cls");
		display ();
		int c3=check();//the integer c3 stores the value of check and declare player 1 winner if c3=1 and 2 if c3=2
		if (c3==1)
{
			print();
		    int cont=go();
			if (cont==-1){return 0;}//to close the program 
//these variables are set to their original value
			c3=0;
			w=1;
}
else if (c3==2)
{
	print1();
	int contr=go();
	if (contr==-1){return 0;}//to close the program 
//these variables are set to their original value
	c3=0;
	w=1;
}
if (c3!=1 && c3!=2)
{
	cout<<"No body Won.it's a draw."<<endl<<endl;
	int contro=go();
	if (contro==-1){return 0;} //to close the program 
//these variables are set to their original value.
	c3=0;
	w=1;
}
	}
	}

	
	
}

