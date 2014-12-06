#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
double A, B, C;
int choice, num1, num2, total, answer;
char next;

srand(time(0));

do{
//main menu for selection

cout << "Welcome to Numberland! Let's learn something! \n";
cout << "Choose your level (1-9) \n";
cout << "1. Doubles\n"; 
cout << "2. Doubles +/- 1\n"; 
cout << "3. 10 Combos\n"; 
cout << "4. Working with 10\n"; 
cout << "5. How Far Apart?\n"; 
cout << "6. Break Down\n"; 
cout << "7. Up To and Over 10\n"; 
cout << "8. Down to and Under 10 \n"; 
cout << "9. Quiz \n"; 
cin >> choice;

//selection OK?
while((choice<1) || choice


A = 1 + rand() % 350;
B = 1 + rand() % 350;
C = A + B;

cout << "\n";
cout << A << " + " << B << " = " << endl;
cout << "Hit any key and then Enter to show the answer";
cin >> next;
cout << "" << endl;
cout << A << " + " << B << " = " << C << endl;
return 0;
}
