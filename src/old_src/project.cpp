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
void teach(int x);
void hints(int x);

string encourage(void);



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

	std::string input, line, congrats;
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

ifstream myfile3 (namepath.c_str());
if(myfile3.good())
{
   getline(myfile3, dummy);
   getline(myfile3, dummy);
   cout<< "\nHey " << name << ", welcome back! Let's learn some math! \n";
   for(i=1;i<=7;i++)
        {
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
}
//for(i=1;i<=7;i++)
//cout<<tottime[i];


else{
cout << "********************************************"<<endl;
cout << "Welcome to NumberLand, "<< name << endl;
cout << "Become the Master of Adding and Subtracting!"<<endl;
cout << "Are you ready to play?"<<endl;
cout << "********************************************"<<endl;
}
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
		cout << "\nHey, " << name << "! Let's learn some math! \n";
		cout << "\nChoose your level (1-9) \n";
		cout << "1. Doubles\n"; 
		cout << "2. Doubles +/- 1\n"; 
		cout << "3. 10 Combos\n"; 
		cout << "4. Working with 10\n"; 
		cout << "5. How Far Apart?\n"; 
		cout << "6. Break Down\n"; 
		cout << "7. Crossing over 10\n"; 
		cout << "8. Quiz\n"; 
		cout << "9. EXIT PROGRAM\n";
		cout << "0. View My Stats\n\n";
begin:
cin.clear();
cin.get();		
cin>>choice;


if(choice==0)
{
FILE * pipe = popen ("gnuplot", "w");

fprintf(pipe,"\nset term x11 0\nset key left \nset grid y \nset style data histograms \nset style histogram rowstacked" 
"\nset boxwidth 0.5 \nset style fill solid 1.0 border \nset ytics 10 nomirror \nset xrange [0:8] \nset yrange [0:]"
"\nset ylabel 'Number of Questions' \nset xlabel 'Level (1-7)' \nset ytics 10 \nset title 'Number of Questions Correct for Each Level'"
"\nplot '%s' every ::1 using 4 t 'Correct' ls 2, '' every ::1 using 5 t 'Incorrect' ls 1 \n",namepath.c_str());
fflush(pipe);

/*
FILE * pipe2 =popen("gnuplot","w");

fprintf(pipe2,"\nset term x11 1 \n unset key \nset grid y \n set style data histograms \nset boxwidth 0.5"
"\nset style fill solid 1.0 border \nset ytics 10 nomirror \nset xrange [0:8] \nset yrange [0:]"
"\nset ylabel 'Average Time Per Question (seconds)' \nset xlabel 'Level (1-7)' \nset ytics .1"
"\nset title 'Average Time Per Question (seconds) on Each Level' \n plot '%s' every ::1 using 7 ls 3",namepath.c_str());
fflush(pipe2);

*/
cout<< "Please choose a level\n"<<endl;
goto getout;
}



    if (choice==9)
        {
                cout << "Thanks for playing!" << endl;
                return 0;
        }


if ((choice<1) || (choice>9) || !cin )
{
	cout << "Incorrect menu selection: please choose between 1 and 9.\n";
	cin.clear();
	cin.get();
	cin >> choice;
}

//quiz:

if(choice!=1 && choice!=9)
{
   if((inarow[choice-1]<15) || (corr[choice-1]/totnum[choice-1]<.95) || (avgtime[choice-1]>7))
   {
        printf("Sorry! You have to pass level %d to move on to level %d\n", choice-1, choice);
	cout << "Please choose again (1-9):\n";
	goto begin;
	cin.get();
	cin >> choice;
   }
}

if(corr[choice]==0)
{
teach(choice);
cin.get();
}

newq:

do{
	time_t start = time(0);
	
	if (choice==1)
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
	goto newq;
	}



//get answer; if 'q' then save and quit//
cin >> input;

        if((input=="Q" || input=="q" || input=="quit")){

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
        myfile1 << i<<'\t'<< tottime[i]<<'\t' << totnum[i]<<'\t' << corr[i]<<'\t' << miss[i]<<'\t' << inarow[i]<<'\t' << tottime[i]/totnum[i]<<'\t' << hint[i]<<'\t' << hint[i]/totnum[i]<<'\t'<<endl;
                }
                        myfile1.close();



        cout << "Your overall percent correct in Level "<<choice<< " is " << pct*100. << "%" <<endl; 
        goto getout;
}

else if(input=="h"|| input=="H"|| input=="hint"){
hints(choice);
hint[choice]++;
cin.get();
goto newq;
}

else{ answer= std::atoi(input.c_str());

time_t end = time(0);
double time = difftime(end,start);
if(time>=15)time=0;
tottime[choice]=tottime[choice]+time;
totnum[choice]++;
}

total=genanswer(choice, num1, num2, coinflip);

while(answer!=total && quizbit==0)
{
	
	cout << endl;
        cout << "Try again!" << endl;
	
 		inarow[choice]=0;
		if(advanced==0){
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

        if((input=="Q" || input=="q" || input=="quit")){

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
	myfile1 << i<<'\t'<< tottime[i]<<'\t' << totnum[i]<<'\t' << corr[i]<<'\t' << miss[i]<<'\t' << inarow[i]<<'\t' << tottime[i]/totnum[i]<<'\t' << hint[i]<<'\t' << hint[i]/totnum[i]<<'\t' << endl;
		}
			myfile1.close();

        	cout << "Your overall percent correct in level "<< choice<<" is " << pct*100. << "%" <<endl; 
        	goto getout;
		}
else if(input=="h"|| input=="H"|| input=="help")
hints(choice);


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
	printf("YOU PASSED THE QUIZ!\n YOU UNLOCKED ADVANCED MODE!\n WOOHOO!\n");
	advanced=1;
	mod=100;
	quizbit=0;
	goto getout;
	}
	else{
	choice=(rand()% 7)+1;
	goto newq;
	}
}
else if(answer!=total && quizbit==1)
{
choice=(rand()%7)+1;
goto newq;
}

	cout << endl;
	congrats=encourage();
	cout << "************ You are CORRECT, " << congrats << '\n' << endl;
		
		inarow[choice]++;
		switch(choice){
                case 1: corr[1]++; break;
                case 2: corr[2]++; break;
                case 3: corr[3]++; break;
                case 4: corr[4]++; break;
                case 5: corr[5]++; break;
                case 6: corr[6]++; break;
                case 7: corr[7]++; break;}
if((inarow[choice]==15) && (corr[choice]/totnum[choice]>.95) && (avgtime[choice]<7))

{cout <<"\n****************************************\n"
     <<"**LEVEL CLEARED! You unlocked Level "<<choice+1<< "!**\n"
     <<"****************************************\n"; cin.get();}
	cout << "Avg. time = " << tottime[choice]/totnum[choice] << " seconds | % correct =" << (corr[choice]/(miss[choice]+corr[choice]))*100. << endl;
        cout << "(Press 'q' to return to main menu...)\n" <<endl;
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




string encourage(void){

int x=rand()%4+1;
string good;

switch(x){
case 1:  good="Way to go!";
	break;
case 2:  good="Great job!";
	break;
case 3:  good="Awesome!";
	break;
case 4: good="Excellent work!";
	break;
case 5: good="Perfect!";
	break;
}
return good; 
}




//doubles//

void teach(int choice){
cin.clear();
switch(choice){
case 1:
cout	<< "*******************************************************************************\n"
        << "| \n"
        << "| Lesson 1: Doubles \n"
        << "| \n"
        << "| What does it mean to double something? Here's what the dictionary says: \n"
	<< "| Double (v.) to make twice as large; to add an equal amount to\n"
        << "| \n"
	<< "| When you double a number, you can just add the number to itself:\n"
        << "| To double 3, just add 3 to itself. Since 3+3=6, when you double 3, you get 6!\n"
        << "| Do you think that 6 is twice as big as 3? Look: (***) + (***) = (******)!\n" 
        << "| Here comes one for you to try! If you have any questions, press 'h' for a hint\n"
        << "| Also, try not to go too slowly; if you need to stop, press 'q' to escape.\n"
        << "| \n"
        << "| Press any key to try some questions! \n"
	<< "| \n"
	<< "*******************************************************************************"
	<< endl;
break;

//doubles +/- 1//
case 2:
cout    << "*******************************************************************************\n"
        << "| \n"
        << "| Lesson 2: Doubles Plus/Minus 1 \n"
	<< "| \n"
        << "| Now you are AWESOME at doubling numbers. But what if someone asked you, \n"
        << "| What is 6+7? You already know how to double 6: you just add it to itself.\n"
        << "| That would be 6+6...but here we have 6+7, which is just 1 more than 6+6! \n"
        << "| Since 6+6=12, and 6+7 is just one more than 6+6, what do you think 6+7 is? \n"
        << "| Give it a try, and just press 'h' if you need a hint!\n"
        << "| \n"
        << "| Press any key to try some questions! \n"
	<< "| \n"
        << "*******************************************************************************"
        << endl;
break;

//10 Combos//
case 3:
cout	<< "*******************************************************************************\n"
	<< "| \n"
        << "| Lesson 3: Combinations that Make 10\n"
        << "| \n"
        << "| What numbers can you think of that add up to 10?\n"
	<< "| 9 plus what makes 10? 9+1! 8 plus what makes 10? 8+2! 7 plus what makes 10? 7+3! \n" 
	<< "| Notice a pattern?\n"
	<< "| \n"
	<< "| 0 + 10= 10	|oooooooooo\n"
	<< "| 1 + 9 = 10 	x|ooooooooo\n"
	<< "| 2 + 8 = 10 	xx|oooooooo\n"
	<< "| 3 + 7 = 10 	xxx|ooooooo\n"
	<< "| 4 + 6 = 10 	xxxx|oooooo\n"
	<< "| 5 + 5 = 10 	xxxxx|ooooo\n"
	<< "| 6 + 4 = 10 	xxxxxx|oooo\n"
	<< "| 7 + 3 = 10 	xxxxxxx|ooo\n"
	<< "| 8 + 2 = 10 	xxxxxxxx|oo\n"
	<< "| 9 + 1 = 10 	xxxxxxxxx|o\n"
	<< "| 10+ 0 = 10 	xxxxxxxxxx|\n"
	<< "| \n"
	<< "| What two numbers add up to 10? Well, we know can double 5 to make 10: 5+5=10 \n"
	<< "| What if we made one 5 bigger and one 5 smaller? What number comes before 5? \n"
	<< "| What number comes after 5? Since 5+5=10, then 4+6=10! We can do it again:\n"
	<< "| What number comes before 4? What number comes after 4? Since 4+6=10, 3+7=10!\n" 
	<< "| \n"
        << "| Press any key to try some questions! \n"
        << "| \n"	
	<< "*******************************************************************************"
	<< endl;
	getchar();
break;


//Working with 10//
case 4:
cout 	<< "******************************************************************************\n"
        << "| \n"
        << "| Lesson 4: Working with 10 \n"
	<< "| \n"
	<< "| In this level, place value is important. Do you know place value? Let's see: \n"
	<< "| In the number 17, what number is in the 10s place? What about the 1s place?\n"
	<< "| How do you know? [enter to continue...]\n"<<endl;
cin.ignore();
cin.get();
cin.clear();
cout	<< "| \n"
	<< "| Let's count from zero to 10: 0,  1,  2,  3,  4,  5,  6,  7,  8,  9, ... 10 \n"
	<< "| Now let's go from 10 to 20: 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, ... 20 \n"
	<< "| What about doing 20 to 30:  20, 21, 22, 23, 24, 25, 26, 27, 28, 29, ... 30!\n"
	<< "| \n"
	<< "| Going across each row, the number in the ones place goes up by 1 each time\n"
	<< "| Going down each column, the number in the tens place goes up by 1 each time\n"
	<< "| When the number in the 10s place goes up by 1, the number is 10 bigger! \n"
	<< "| [enter to continue...]"<<endl;
cin.get();
cout	<< "| \n"
	<< "| Here's an example: 23. What does the 2 mean in the number 23? \n"
	<< "| It means there are 2 tens! What does the 3 mean? It means there are 3 ones!\n"
	<< "| 23 is the same as 2x10 + 3x1, or 10+10+1+1+1 (two tens and three ones)!\n"
	<< "| \n"
	<< "| So, if we have 10 + 6, we have to add the 1s places and 10s places separately\n"
	<< "| Six has 6 in the ones place; what does 10 have in the one's place? Zero!\n"
	<< "| So let's add them 6 to 10 to make 16! The 10s place doesn't change because \n"
	<< "| we only have one whole 10 (and six ones). How many more 1s do we need to \n"	
	<< "| get another 10? If we add 4 more 1s, 16+4=20. Two whole tens (no extra 1s)!\n"
	<< "| \n"
	<< "| This is one reason it's easy to add like this:         10 \n"
	<< "|						        + 6 \n"
	<< "|						       -----\n"
	<< "| It lines up the places for us! \n"
	<< "| \n"
	<< "| Press any key to try some questions! \n"
	<< "| \n"
	<< "******************************************************************************"
	<< endl;
break;

//How Far Apart//
case 5:
cout 	<< "******************************************************************************\n"
        << "| \n"
        << "| Level 5: How Far Apart? \n"
        << "| \n"
	<< "| It might sound weird, but if someone asks you 'what is 9 take away 2', they\n"
	<< "| want to know how far away 9 is from 2. Think about a number line:\n"
	<< "| \n"	
	<< "|  0   1   2   3   4   5   6   7   8   9  \n"
	<< "|  |___|___|___|___|___|___|___|___|___|___...\n"<<endl;
//cin.ignore();
cin.get();
cin.clear();
cout	<< "| 	    \\__/\\__/\\__/\\__/\\__/\\__/\\__/\n"
	<< "| 	     1   2   3   4   5   6   7\n"<<endl;
//cin.ignore();
cin.get();
cin.clear();
cout	<< "| \n"
	<< "| So 9 is 7 more then 2! 9 and 2 are 7 apart! And, 9-2=7!\n"
	<< "| It is even easier when the numbers are close together. '8-5' is the same as\n"
	<< "| 'how far apart are 8 and 5?' Start at five, count up to eight. What did you get?\n"
	<< "| \n"
        << "| Let's try some questions! If you need a hint, press 'h'. To quit, press 'q' \n"
	<< "| \n"
	<< "******************************************************************************"
	<< endl;
break;
//Breakdown//
case 6:
cout 	<< "******************************************************************************\n"
        << "| \n"
        << "| Level 6: Breakdown \n"
	<< "| \n"
	<< "| These questions are a lot like the ones in Level 5 (how far apart). They will \n"
	<< "| look like this 7 - ___ = 3. Seven take away SOMETHING equals 3. Your job is to\n"
	<< "| figure out what that SOMETHING is. What goes in the blank? Well, the equals sign\n"
	<< "| means that the stuff on the left equals the stuff on the right. How far apart\n"
	<< "| are 3 and 7? Does that fit in the blank? Try it!\n"
	<< "| \n"
	<< "| There may also be some with addition, like this: 3 + ___ = 8. Three plus SOMETHING\n"
	<< "| equals 8. Well, how far apart are 3 and 8? Does that work in the blank? HA!\n"
	<< "| \n"
	<< "| As you've probably noticed, these problems are very similar to 'how far apart'!\n"
        << "| \n"
        << "| Press any key to try some questions! Press 'h' for a hint and 'q' to quit. \n"
	<< "| \n"
	<< "******************************************************************************"
	<< endl;
break;


//Crossing 10//
case 7:
cout 	<< "******************************************************************************\n"
        << "| \n"
        << "| Level 7: Crossing Over 10 \n"
	<< "| \n"
	<< "| This may be the last level, but it is DEFINITELY THE MOST IMPORTANT LEVEL\n"
	<< "| It uses all of the skills from Levels 1-6 and it is SUPER IMPORTANT. Let's go!\n"
	<< "| \n"
	<< "| We can cross over ten using addition (8+4) or subtraction (15-9), and we have\n"
	<< "| two different techniques for each of these. Let's start with the addition:\n"
	<< "| \n"
	<< "| Our strategy will use '10 combos'...we will make 10 and add what's leftover:\n"
	<< "| For 8+4, STOP! Take the first number, 8. What number plus 8 makes 10?\n"
	<< "| 8+2 is 10, but we have to add 4, not just 2. How much bigger is 4 than 2? \n"
	<< "| 4-2 is 2, so we have to add 2 more! 8+4 = 8+2+2 = 10+2 = 12!\n"
	<< "| \n"	
	<< "|  0   1   2   3   4   5   6   7   8   9  10  11  12  13  14\n"
	<< "|  |___|___|___|___|___|___|___|___|___|___|___|___|___|___|...\n"<<endl;
cin.ignore();
cin.get();
cout	<< "| 	                            \\______/\\______/\n"
	<< "| 	         		        2       2\n"<<endl;
cin.ignore();
cin.get();
cout	<< "| We want 8 plus 4; we know 8 plus 2 is 10, so 10 plus the leftover (4-2=2) is 12!\n"
	<< "| [enter to continue...] \n";
cin.ignore();
cin.get();
cout	<< "| \n"
	<< "| For subtraction, our strategy is different. Let's use 'how far apart' with\n"
	<< "| 10 in the middle! Pretend we have 16-9. How far apart are 16 and 10? (6).\n"
	<< "| Now, how far apart are 9 and 10? (1). Add those together (6+1=7) and you got it!\n"
	<< "| 16 - 9 = 7\n"
	<< "| Why does that work? Well, check out this number line:\n"
	<< "| \n"	
	<< "|  0   1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18 \n"
	<< "|  |___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|...\n"<<endl;
cin.ignore();
cin.get();
cout	<< "| 	                                \\__/\\_____________________/\n"
	<< "| 	         			  1             6\n"<<endl;
cin.ignore();
cin.get();
cout	<< "| 9 up to 10 is just 1, and 10 up to 16 is just 6. Thus, 9 up to 16 is 1+6=7\n"	
	<< "| \n"
	<< "| \n"
	<< "| Let's try a couple to get the feel for it\n"
	<< "| We will do five questions together; then you're on your own! Ready?\n"
	<< "| \n" 
	<< "******************************************************************************"
	<< endl;


int j=0, num1, num2, combo, leftover, tota;

for(j=1;j<=5;j++){
	do{
                   num1 = rand() % 10;
                   num2 = rand() % 10;}
	 	while(num1+num2<10);

                int coinflip=rand() %2;
                if(coinflip==0){
			cout << num1 << " + " << num2 <<" = ___\n"<< endl;                        
			cout << "Wait, how far is it from "<<num1<<" up to 10?\n";
			cin >> combo;
						
			while(combo!=10-num1){
			cout<<"Try again!\n"<<endl;
			cin>>combo;}			

		        cout << "Good, now since we added "<<combo<<" from "<<num2<<", how much is leftover?\n";
			cin >> leftover;
			
			while(leftover!=num2-(combo)){
			cout<<"Try again!\n"<<endl;
			cin >> leftover;}
			cout << "Awesome, now since "<<num1<<" + "<<combo<<" = 10, what's 10 plus the leftover?\n";
			cin >>  tota;
			while(tota!=num1+num2){
			cout<<"Try again!\n"<<endl;
			cin>>tota;}
			cout << "So "<<num1<<" + "<<num2<<" = "<<tota<<", exactly right!\n"<<endl;
}		else{
                cout << num1+num2 << " - " << num2 <<" = ___" << endl;
		cout << "\nLet's put 10 in the middle. How far from "<<num1+num2<<" down to 10?"<<endl;
		cin >> combo;
		while (combo!=num1+num2-10){
		cout<<"Try again!\n"<<endl;
		cin >> combo;}
		cout << "Great! Now how far from 10 down to "<<num2<<" ?"<<endl;
		cin >> leftover;
		while (leftover!=10-num2){
		cout<<"Try again!\n"<<endl;
		cin >> leftover;}
		cout << "Got it! Just add those two steps to get "<< num1+num2 << " - "<< num2 <<endl;
		cin >> tota;
		while(tota!=num1){
		cout<<"Try again!\n";		
		cin>>tota;}
         	cout << "That's the correct answer!" << num1+num2 << " - "<< num2<<" = "<< num1 <<endl;
		cout << "\n\n";
}
}
break;	
}
cin.get();
}


void hints(int choice){
cout << "***HINT";

switch(choice){
case 1: 
cout 	<< "************************************************************************\n"
	<< "| \n"
	<< "| Double 5, and you get 10. That means if we double anything bigger than 5,\n"
     	<< "| the answer is BIGGER than 10. A good way to double a big number is to break\n"
     	<< "| 5 off, double the 5, double whatever was leftover, and put them back together\n"
     	<< "| For example, to double 9, turn 9 into 5 plus something. Five plus what is 9? 4!\n"
     	<< "| So 5+4=9. The equal sign means both sides are the same, so if you want to\n"
     	<< "| double 9, you double 5 and double 4, then add them together. Double 5 is 10,\n"
     	<< "| and double 4 is 8, so (5+5) + (4+4) = 10 + 8 = 18!\n" 
	<< "| \n"
        << "| You're doing great! Press any key to resume game... \n"
	<< "| \n"
	<< "*******************************************************************************"
	<< endl;
break;

//hint doubles +- 1//
case 2:
cout	<< "***********************************************************************\n"
	<< "| \n"
	<< "| We talked about 'doubles plus 1' where 6+6=12, so 6+7=13. But it works \n"
	<< "| backwards too! Say you have 8+7. If you know your doubles, you know that \n"
	<< "| 8+8=16. But here you have 8+7, which is 1 less! Since 7 is 1 less than 8 \n"
	<< "| 8+7=15! Keep up the good work, and keep practicing!\n"
	<< "| \n" 
        << "| Press any key to resume game... \n"
	<< "| \n"
	<< "******************************************************************************"
	<< endl;
break;

 //hint 10s combos//
case 3:
cout 	<< "***********************************************************************\n"
	<< "| \n"
	<< "| Here's a cool trick: you only actually have to remember 4 pairs of numbers!\n"
	<< "| 1 goes with 9, 2 goes with 8, 3 goes with 7, 4 goes with 6. That's it!\n"
	<< "| Since you already know 5+5 and 10+0, that's all you have to remember!\n"
	<< "| 9 goes with 1, 8 goes with 2, 7 goes with 3, 6 goes with 4. You got it!\n"
	<< "| Here's all the possible pairs of numbers that make 10:\n"
	<< "| (10,0) (0,10) (9,1) (1,9) (2,8) (8,2) (3,7) (7,3) (4,6) (6,4) (5,5)\n"
	<< "| \n"
	<< "| Great work! Keep it up! Press any key to continue...\n"
	<< "| \n"
	<< "******************************************************************************"
	<< endl;
break;

//working with 10 hint//
case 4:
cout 	<< "***********************************************************************\n"
	<< "| \n"
	<< "| Hey, how's it going? \n"
	<< "| You've tried a few questions! Have you noticed any patterns?" 
	<< "| All of the questions have you add 10 plus a single digit number (like 4).\n"
	<< "| When you have 10 + 4, the 4 just goes in the place where the zero is, so\n"
	<< "| 10 + 4 = 14. In fact, it's called 'Four-teen' because its a 4 and a 10!\n"
	<< "| Even though 'teen' is a weird way to say 'ten', it's a good way to remember!\n"
	<< "| All of the 'teens' are like that: 'eighteen' (18) = 'eight' (8) + 'ten' (10)\n"
	<< "| \n"
	<< "| Also, when we add two numbers, the order DOESN'T matter. 10+6 = 6+10 = 16!\n"
	<< "| \n"
        << "| Press any key to resume game... \n"
	<< "| \n"
	<< "******************************************************************************"
	<< endl;
break;

//hint how far apart//
case 5:
cout 	<< "***********************************************************************\n"
	<< "| \n"
	<< "| Sometimes it's easier to think 'how much is left'. In our 9-2 example, it is\n"
	<< "| a little easier to think 'how much is left when you take 2 away from 9'. \n"
	<< "| You get the very same answer when you do it this way, and it is 100% OK!\n"
	<< "| \n"
	<< "| The toughest ones are probably 9-2, 7-3, 8-3, 9-4. Can you do them in your head?\n";
cin.get();
cout	<< "| Here are the answers: 9-2=7, 7-3=4, 8-3=5, 9-4=5\n"
	<< "| Practice those and you'll have it down perfectly in no time at all!\n"
	<< "| \n"
        << "| Press any key to resume game... \n"
	<< "| \n"
	<< "******************************************************************************"
	<< endl;
break;

//hint for breakdown//
case 6:
cout 	<< "***********************************************************************\n"
	<< "| \n"
	<< "| You can also think about these questions using algebra! It's not bad, I promise!\n"
	<< "| What about 3 + __ = 8. Eight equals 3 plus SOMETHING. If we want to know what\n"
	<< "| SOMETHING is, we can subtract 3 from both sides.\n"
	<< "| \n"
	<< "|  3 + ___ = 8\n"
	<< "| -3        -3\n"
	<< "| ---       ---\n"
	<< "|      ___ = 5\n"
	<< "| \n"
	<< "| So 5 goes in the blank! There are many different ways do do these problems!\n"
        << "| \n"
        << "| Press any key to resume game... \n"
	<< "| \n"
	<< "******************************************************************************"
	<< endl;
break;

case 7:
cout 	<< "***********************************************************************\n"
	<< "| \n"
	<< "| \n"
	<< "| \n"
	<< "| \n"
	<< "| \n"
	<< "| \n"
	<< "| \n"
	<< "| \n"
	<< "| \n"
	<< "| \n"
	<< "| \n"
	<< "| \n"
	<< "******************************************************************************"
	<< endl;
break;
}
cin.get();
}
