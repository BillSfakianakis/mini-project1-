#include <iostream>
#include <cstdlib>
#include <ctime>


//PROJECT 1 CASINO

using namespace std;

int main()
{	
	//dilwsh metavlitwn
	char name[20],choice;
	float balance,amount;
	int number;
	int random;
	
	cout << "\t\t--------------------------------" << "WELCOME TO CASINO WORLD" << "-------------------------------------- " << endl;
	
	cout << left << "What's your name ? : " ;
	cin >> name ;
	
	cout << endl; //allagi grammis
	
	cout << left << "Enter the starting balance to play game: ";
	cin >> balance;
	
	cout << endl; //allagi grammis
	
	cout << "\t\t-----------------------------" << "CASINO NUMBER GUESSING RULES!" << "-----------------------------------" << endl << endl;
	
	cout << "\t1. Choose a number between 1 to 10" << endl;
	cout << "\t2. Winner gets 10 time of the money bet" << endl;
	cout << "\t3. Wrong bet...and you lose the amount you bet" << endl << endl << endl << endl;
	
	while (balance>0)
	{
	
	cout << "Your current balance is $" << balance << endl;
		
	cout << "Enter amount to bet:$ ";
	cin >> amount;	
	
	if (amount>balance)
	{
		cout << "Invalid bet amount...Please enter a valid amount \n\n\n";
		continue ;
	} //end of if
		
	cout << "Guess any betting number between 1-10 : ";
	cin >> number;
	cout << endl;
	
	if (number<=0 || number>10)
	{
		cout << "Invalid number...Please enter a valid number \n\n\n";
		continue;
	}//end of if
	
	srand(time(0)); //random choice number between 1-10
	random=(rand()%10+1); //random number 1-10
	

	if (number==random)
	{
		cout << "You are in luck!!! you have won Rs.200" << endl ;
		cout << "the winning number was: " << random << endl;
		cout << name << ", You have balance of " << balance+(amount*10) << "$" << endl << endl;
		balance+=(10*amount);
	} //end of if
	else 
	{
		cout << "Oops,better luck next time !!! you lost " << amount  << "$" << endl << endl << endl;
		cout << "The winning number was : " << random << endl;
		cout << name << ", You have balance of " << balance-amount << "$" << endl;
		balance-=amount ;
	} //end of else 
		
 cout << "-->Do you want to continue? (y/n): ";
	cin >> choice;	
	cout << endl;
	if (choice!='y' && choice!='Y')
		break;
			
	if (balance==0)
		cout << "Sorry but you don't have enough money to play :( \n\nMaybe the next time" << endl;
	} //end of while
	
	cout << "Thanks for playing the game " << name << "!!!" << endl;
	cout << "Your final balance is $ " << balance << endl;
	
	return 0;
	}//end of main
		
			
	
	
	
	
	
	
	
