#include <iostream>
#include <stdio.h>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(void)
{
	int choice;
	int num1;
	int num2;
	int coinflip;
	int total;
	int answer;
	std::string quit;

	do
	{
		//Get random numbers
		srand(time(0));
		num1 = rand() % 100;
		num2 = rand() % 100;

		// Show menu and get users choice
		cout << "Welcome to Numberland! Let's learn something! \n";
		cout << "Choose your level (1-9) \n";
		cout << "1. Doubles\n"; 
		cout << "2. Doubles +/- 1\n"; 
		cout << "3. 10 Combos\n"; 
		cout << "4. Working with 10\n"; 
		cout << "5. How Far Apart?\n"; 
		cout << "6. Break Down\n"; 
		cout << "7. Crossing over 10\n"; 
		cout << "8. Quiz\n"; 
		cout << "9. EXIT PROGRAM\n"; 

		cin>>choice;
if ((choice<1) || (choice>9))
{
	cout << "Incorrect menu selection: please choose between 1 and 9.\n";
	cin.get();
	cin >> choice;
}
do{
if (choice==9)
{
	cout << "Thank's for playing!" << endl;
	return 0;
}
else if (choice==1)
{
	cout << "\nDoubles: \n";
   num1 = rand() % 10;
   cout << num1 << " + "<< num1 << endl;
}
else if (choice==2)
{
	cout << "\nDoubles +/- 1: \n";
   num1 = rand() % 10;
   num2 = num1 + 1;

	cout << num1 << " + " << num2 << endl;
}
else if (choice==3)
{
	cout << "\nCombos that make 10: \n";
   num1 = rand() % 10;
   num2 = 10-num1;
	cout << num1 << " + ___ = 10" << endl;
}
else if (choice==4)
{
        cout << "\nWorking with 10: \n";
   num1 = rand() % 10;
   num2 = 10;
   coinflip = rand() % 2;
	if(coinflip == 0)
        cout << num2 << " + " << num1 << endl;
	else 
	cout << num1 << " + " << num2 << endl;
}
else if (choice==5)
{
        cout << "\nHow far apart are these two numbers? \n";
   num1 = rand() % 10;
   num2 = rand() % 10;
        cout << num1 << " ___ " << num2 << endl;
}
else if (choice==6)
{
        cout << "\nBreakdown: \n";   
   num1 = rand() % 11;
   num2 = rand() % 11;
   if(num1>num2)
        cout << num1 << " - ___ = " << num2 << endl;
	else
	cout << num1 << " + ___ = " << num2 << endl;
}
else if (choice==7)
{
        cout << "\nCrossing over 10: \n";
      do{
      num1 = rand() % 10;
      num2 = rand() % 10;}
      while(num1+num2<10);

	coinflip=rand() %2;
	if(coinflip==0)
        cout << num1+num2 << " - ___ = " << num2 << endl;
        else
        cout << num1 << " + " << num2 << endl;
}

/*
else if (choice==8)
{
        cout << "\nQUIZ: \n";
	choice=rand() % 8;
	continue;
}
*/


//display equation

cin >> answer;

switch(choice)
{
case 1:
	total = num1+num1;
	break;
case 2:
	total = num1+num2;
	break;
case 3:
	total = 10-num1;
	break;
case 4:
	total = num1+num2;
	break;
case 5:
	if(num1>=num2)
	total=num1-num2;
	else
	total=num2-num1;
	break;
case 6:
	if(num1>=num2)
        total=num1-num2;
        else
        total=num2-num1;
        break;
case 7:
	if(coinflip==0)
	total=num1;
	else
	total=num2+num1;
//case 8: TBD

}

while(answer!=total)
{
	cout << endl;
        cout << "Try again!" << endl;
	cin.get();
	cin >> answer;
}
	cout << endl;
	cout << "You are correct!" << endl;
        cout << "Press N for a new problem" <<endl;
	cout << "Press Q to quit" <<endl;
	cin >> quit;
        if((quit=="Q" || quit=="q"))
	break;
//	cout << "Your answer is "<< answer << endl;
//	cout << "The correct answer is "<< total <<endl;

//	cout << " Your answer is " << answer << endl;
//	cout << " The correct answer is " << total << endl;

}while (1);} while (1);
}
