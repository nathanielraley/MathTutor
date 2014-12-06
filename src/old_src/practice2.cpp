#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(void)
{
	int choice;
	int num1;
	int num2;
	int total;
	int answer;
	char quit;

	do
	{
		//Get random numbers
		srand(time(0));
		num1 = rand() % 100;
		num2 = rand() % 100;

		// Show menu and get users choice
		cout << " Math Tutor - Main Menu \n";
		cout << "Choose your operation to practice (1-4): \n";
		cout << "1. Addition \n";
		cout << "2. Subtraction \n";
		cout << "3. Multiplication \n";
		cout << "4. Exit program \n";
		cin>>choice;
if ((choice<1) || (choice>4))
{
	cout << "Incorrect menu selection: please choose between 1 and 4.\n";
	cin.get();
	cin >> choice;
}
do{
if (choice==4)
{
	cout << "Thank you for playing!" << endl;
	return 0;
}
else if (choice==1)
{
	cout << "\nWorking with addition: \n";
   num1 = rand() % 100;
   num2 = rand() % 100;	
cout << num1 << " + "<< num2 << endl;
}
else if (choice==2)
{
	cout << "\nWorking with subtraction: \n";
   num1 = rand() % 100;
   num2 = rand() % 100;

	cout << num1 << " - " << num2 << endl;
}
else if (choice==3)
{
	cout << "\nWorking with multiplication:\n";
   num1 = rand() % 100;
   num2 = rand() % 100;
	cout << num1 << " x " << num2 << endl;
}

//display equation

cin >> answer;

switch(choice)
{
case 1:
	total = num1+num2;
	break;
case 2:
	total = num1-num2;
	break;
case 3:
	total = num1*num2;
}

if (answer==total)
{
	cout << endl;
	cout << "Your answer is "<< answer << endl;
	cout << "The correct answer is "<< total << ". You are CORRECT!"<<endl;
}
else
{
	cout << endl;
	cout << " Your answer is " << answer << endl;
	cout << " The correct answer is " << total << ". Sorry, that's INCORRECT" << endl;
}
}while (1);} while (1);
}
