#include <iostream>
#include <sstream>
#include <stdio.h>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <sys/types.h> 
#include <dirent.h> 


using namespace std;

int genanswer(int x, int y, int z, int b );





int main(void)
{

	int choice;
	int num1;
	int num2;
	int coinflip, i, quizbit=0;
	int total, quizsum=0;
	int answer;
	int advanced=0;	
	int mod=10;

	float pct;

	float miss[9]={0};
	float corr[9]={0};
	float hint[9]={0};
	float avgtime[9]={0};
	float tottime[9]={0};
	float totnum[9]={0};
	float inarow[9]={0};
	float quiz[8]={1,0,0,0,0,0,0,0};
/*
        float miss1[9]={0};
        float corr1[9]={0};
        float hint1[9]={0};
        float avgtime1[9]={0};
        float tottime1[9]={0};
        float totnum1[9]={0};
        float inarow1[9]={0};
        float quiz1[8]={1,0,0,0,0,0,0,0};
*/

	std::string input, line;
	std::string name, dummy;
	std::string namepath;
	stringstream username;

	time_t t = time(0);
	struct tm * now = localtime( & t );


cout << "\nEnter your user name: ";
cin >> name;
username<< "users/"<<name<<".txt"<<endl;
username>>namepath;
cin.clear();
///////////////////////////////////////////////////////////////////////


ifstream myfile3 (namepath.c_str());
if(myfile3.good())
{
	getline(myfile3, dummy);
        getline(myfile3, dummy);
	cout<<"Hey, Welcome back!"<<endl;
	for(i=1;i<=7;i++){
	getline(myfile3,line,'\t');
	getline(myfile3,line,'\t');
	   tottime[i]=atof(line.c_str());
	getline(myfile3,line,'\t');
	   totnum[i]=atof(line.c_str());
	getline(myfile3,line,'\t');
	   corr[i]=atof(line.c_str());
	getline(myfile3,line,'\t');
	   miss[i]=atof(line.c_str());
	getline(myfile3,line,'\t');
	   inarow[i]=atof(line.c_str());
	getline(myfile3,line,'\t');
	getline(myfile3,line,'\t');
	getline(myfile3,line,'\t');
	}

for(i=1;i<=7;i++)
cout<<tottime[i];


}
else
cout << "Welcome to Numberland"<<endl;
myfile3.close();


///////////////////////////////////////////////////////////////////////
getout:
	do
	{
		//Get random numbers
		srand(time(0));
		num1 = rand() % 100;
		num2 = rand() % 100;

		// Show menu and get users choice
		cout << "\nWelcome to Numberland, " << name << "! Let's learn something! \n";
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
begin:
		cin>>choice;


if ((choice<1) || (choice>9) || !cin )
{
	cout << "Incorrect menu selection: please choose between 1 and 9.\n";
	cin.clear();
	cin.get();
	cin >> choice;
}

quiz:

if(choice!=1 && choice!=9)
{
   if((inarow[choice-1]<10) && (corr[choice-1]/totnum[choice-1]<.95) || totnum[choice-1]<25 )
   {
        printf("Sorry! You have to pass level %d to move on to level %d\n", choice-1, choice);
	cout << "Please choose again (1-9):\n";
	goto begin;
	cin.get();
	cin >> choice;
   }
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
   		num1 = rand() % mod;
   	cout << num1 << " + "<< num1 << endl;
	}
	else if (choice==2)
	{
		cout << "\nDoubles +/- 1: \n";
   		num1 = rand() % mod;
   		num2 = num1 + 1;

		cout << num1 << " + " << num2 << endl;
	}
	else if (choice==3)
	{
		cout << "\nCombos that make "<<mod<<":\n"<<endl;
   		num1 = rand() % mod;
   		num2 = mod-num1;
		cout << num1 << " + ___ = " <<mod<< endl;
	}
	else if (choice==4)
	{
        	cout << "\nWorking with "<<mod<<":\n"<<endl;
   		num1 = rand() % mod;
   		num2 = mod;
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
   		num1 = rand() % mod+1;
   		num2 = rand() % mod+1;
   		if(num1>num2)
        		cout << num1 << " - ___ = " << num2 << endl;
		else
		cout << num1 << " + ___ = " << num2 << endl;
	}
	else if (choice==7)
	{
        	cout << "\nCrossing over "<<mod<< ":\n"<<endl;
     		do{
      			num1 = rand() % mod;
      			num2 = rand() % mod;}
      		while(num1+num2<mod);

		coinflip=rand() %2;
		if(coinflip==0)
        		cout << num1+num2 << " - ___ = " << num2 << endl;
        	else
        	cout << num1 << " + " << num2 << endl;
	}


	else if (choice==8)
	{
        cout << "\n QUIZ: \n"<<endl;
	quizbit=1;
	choice=(rand() % 7) +1;
	goto quiz;
	}



//get answer; if 'q' then save and quit//
cin >> input;

        if((input=="Q" || input=="q")){

                switch(choice){
                case 1: pct=(corr[1]/(miss[1]+corr[1])); break;
                case 2: pct=(corr[2]/(miss[2]+corr[2])); break;
                case 3: pct=(corr[3]/(miss[3]+corr[3])); break;
                case 4: pct=(corr[4]/(miss[4]+corr[4])); break;
                case 5: pct=(corr[5]/(miss[5]+corr[5])); break;
                case 6: pct=(corr[6]/(miss[6]+corr[6])); break;
                case 7: pct=(corr[7]/(miss[7]+corr[7])); break;}


                ofstream myfile (namepath.c_str());
                if(myfile.is_open())
                        {
                myfile << "Last game: " << (now->tm_year + 1900) << '-'  << (now->tm_mon + 1) << '-' <<  now->tm_mday << '\n'
                <<"Lvl   T_Time    T_Qs   Corr   Miss   InRow   Avg.T/Q   Hints    Hints/Q" << endl;

                        }
                        myfile.close();
                ofstream myfile1 (namepath.c_str(), std::fstream::app);
	for(i=1;i<=7;i++){
        myfile1 << i<<'\t'<< tottime[i]<<'\t' << totnum[i]<<'\t' << corr[i]<<'\t' << miss[i]<<'\t' << inarow[i]<<'\t' << tottime[i]/totnum[i]<<'\t' << "n/a"<<'\t' << "n/a"<<'\t'<<endl;
                }
                        myfile1.close();



        cout << "Your percent correct was " << pct*100. << "%" <<endl; 
        break;
}
else{ answer= std::atoi(input.c_str());

time_t end = time(0);
double time = difftime(end,start);
tottime[choice]=tottime[choice]+time;
totnum[choice]++;
}

total=genanswer(choice, num1, num2, coinflip);

while(answer!=total && quizbit==0)
{
	
	cout << endl;
        cout << "Try again!" << endl;
	

 		inarow[choice]=0;
		if(advanced=0){
		switch(choice){
		case 1: miss[1]++; break;
		case 2: miss[2]++; break;
		case 3: miss[3]++; break;
		case 4: miss[4]++; break;
		case 5: miss[5]++; break;
		case 6: miss[6]++; break;
		case 7: miss[7]++; break;
		}
		}
/*	else{
		 switch(choice){
                case 1: miss1[1]++; break;
                case 2: miss1[2]++; break;
                case 3: miss1[3]++; break;
                case 4: miss1[4]++; break;
                case 5: miss1[5]++; break;
                case 6: miss1[6]++; break;
                case 7: miss1[7]++; break;
                }
*/

	cin.get();
	cin >> input;

        if((input=="Q" || input=="q")){

                switch(choice){
                case 1: pct=(corr[1]/(miss[1]+corr[1])); break;
                case 2: pct=(corr[2]/(miss[2]+corr[2])); break;
                case 3: pct=(corr[3]/(miss[3]+corr[3])); break;
                case 4: pct=(corr[4]/(miss[4]+corr[4])); break;
                case 5: pct=(corr[5]/(miss[5]+corr[5])); break;
                case 6: pct=(corr[6]/(miss[6]+corr[6])); break;
                case 7: pct=(corr[7]/(miss[7]+corr[7])); break;
		}

		ofstream myfile (namepath.c_str());
		if(myfile.is_open())
			{
		myfile << "last game: " << (now->tm_year + 1900) << '-'  << (now->tm_mon + 1) << '-' <<  now->tm_mday << '\n'
 		<< "Lvl    T_Time    T_Qs     Corr    Miss    InRow    Avg.T/Q    Hints    Hints/Q" << endl;
			}
			myfile.close();
		ofstream myfile1 (namepath.c_str(), std::fstream::app);
for(i=1;i<=7;i++){
	myfile1 << i<<'\t'<< tottime[i]<<'\t' << totnum[i]<<'\t' << corr[i]<<'\t' << miss[i]<<'\t' << inarow[i]<<'\t' << tottime[i]/totnum[i]<<'\t' << "n/a"<<'\t' << "n/a"<<'\t' << endl;
		}
			myfile1.close();

        	cout << "Your percent correct was " << pct*100. << "%" <<endl; 
        	goto getout;
		}

	else answer= std::atoi(input.c_str());
}

///QUIZ///
if(answer==total && quizbit==1){
quiz[choice]=1;
quizsum=0;
i=0;
while(i<8){
   quizsum+=quiz[i];
	i++;}
	
	
	if(quizsum>=7){
	printf("YOU PASSED THE QUIZ!");
	advanced=1;
	mod=100;
	quizbit=0;
	goto getout;
	}
	else{
	choice=(rand()% 7)+1;
	goto quiz;
	}
}
else if(answer!=total && quizbit==1)
{
choice=(rand()%7)+1;
goto quiz;
}

	cout << endl;
	cout << "You are correct!" << endl;
		
		inarow[choice]++;
		switch(choice){
                case 1: corr[1]++; break;
                case 2: corr[2]++; break;
                case 3: corr[3]++; break;
                case 4: corr[4]++; break;
                case 5: corr[5]++; break;
                case 6: corr[6]++; break;
                case 7: corr[7]++; break;}
if((inarow[choice]==10) && (corr[choice-1]/totnum[choice]>.95) || totnum[choice]==25 )
cout <<"***LEVEL CLEARED! You unlocked Level "<<choice+1<< "!"<<endl;
	cout << "Avg. time = " << tottime[choice]/totnum[choice] << " seconds | % correct =" << (corr[choice]/(miss[choice]+corr[choice]))*100. << endl;
        cout << "(Enter Q to return to main menu)\n" <<endl;
//	cout << "Running totals -- Correct:" << corr[7]<< "incorrect:" << miss[7] << endl;
//	cout << "Your answer is "<< answer << endl;
//	cout << "The correct answer is "<< total <<endl;

//	cout << " Your answer is " << answer << endl;
//	cout << " The correct answer is " << total << endl;

}
while(1);
}
while(1);
}
////////////////////////////////////////////////////////////////////




int genanswer(int choice, int num1, int num2, int coinflip){

int total;

switch(choice){

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
}
return total;
}


