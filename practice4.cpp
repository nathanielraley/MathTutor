#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>
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
	float pct;

	float miss[9]={0};
	float corr[9]={0};
	float avgtime[9]={0};
	float tottime[9]={0};
	float totnum[9]={0};
	std::string quit;
	std::string username;

cout << "\nEnter your user name: ";
cin >> username;


///////////////////////////////////////////////////////////////////////

	do
	{
		//Get random numbers
		srand(time(0));
		num1 = rand() % 100;
		num2 = rand() % 100;

		// Show menu and get users choice
		cout << "\nWelcome to Numberland, " << username << "! Let's learn something! \n";
		cout << "\nChoose your level (1-9) \n";
		cout << "1. Doubles\n"; 
		cout << "2. Doubles +/- 1\n"; 
		cout << "3. 10 Combos\n"; 
		cout << "4. Working with 10\n"; 
		cout << "5. How Far Apart?\n"; 
		cout << "6. Break Down\n"; 
		cout << "7. Crossing over 10\n"; 
		cout << "8. Quiz\n"; 
		cout << "9. EXIT PROGRAM\n\n"; 

		cin>>choice;



if ((choice<1) || (choice>9))
{
	cout << "Incorrect menu selection: please choose between 1 and 9.\n";
	cin.get();
	cin >> choice;
}
do{

time_t start = time(0);

if (choice==9)
{
	cout << "Thanks for playing!" << endl;
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
time_t end = time(0);
double time = difftime(end,start);
tottime[choice]=tottime[choice]+time;
totnum[choice]++;


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
		switch(choice){
		case 1: miss[1]++; break;
		case 2: miss[2]++; break;
		case 3: miss[3]++; break;
		case 4: miss[4]++; break;
		case 5: miss[5]++; break;
		case 6: miss[6]++; break;
		case 7: miss[7]++; break;
}
	cin.get();
	cin >> answer;
}
	cout << endl;
	cout << "You are correct!" << endl;
		switch(choice){
                case 1: corr[1]++; break;
                case 2: corr[2]++; break;
                case 3: corr[3]++; break;
                case 4: corr[4]++; break;
                case 5: corr[5]++; break;
                case 6: corr[6]++; break;
                case 7: corr[7]++; break;}
	cout << "Avg. time = " << tottime[choice]/totnum[choice] << " seconds | % correct =" << (corr[choice]/(miss[choice]+corr[choice]))*100. << endl;
        cout << "Enter N for a new problem (Enter Q to return to main menu)\n" <<endl;
//	cout << "Running totals -- Correct:" << corr[7]<< "incorrect:" << miss[7] << endl;
	cin >> quit;
        if((quit=="Q" || quit=="q")){
		
		switch(choice){
                case 1: pct=(corr[1]/(miss[1]+corr[1])); break;
                case 2: pct=(corr[2]/(miss[2]+corr[2])); break;
                case 3: pct=(corr[3]/(miss[3]+corr[3])); break;
                case 4: pct=(corr[4]/(miss[4]+corr[4])); break;
                case 5: pct=(corr[5]/(miss[5]+corr[5])); break;
                case 6: pct=(corr[6]/(miss[6]+corr[6])); break;
                case 7: pct=(corr[7]/(miss[7]+corr[7])); break;}


ofstream myfile ("user_name.txt");
if(myfile.is_open())
{
myfile << username << "\tlevel = " << choice <<  "\t% correct = " << pct*100. << "\tavg time (seconds) = " << tottime[choice]/totnum[choice] << endl;
myfile.close();
}
	cout << "Your percent correct was " << pct*100. << "%" <<endl; 
	break;}
//	cout << "Your answer is "<< answer << endl;
//	cout << "The correct answer is "<< total <<endl;

//	cout << " Your answer is " << answer << endl;
//	cout << " The correct answer is " << total << endl;

}while (1);} while (1);

////////////////////////////////////////////////////////////////////
}
