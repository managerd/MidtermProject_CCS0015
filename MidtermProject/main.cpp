#include <iostream>
#include <cstring>
#include <iomanip>
#include "staticStacks.h"
#include "dynamicStacks.h"
using namespace std;

bool TryAgain(char);
void menu();
int Choice();

int main()
{
	char tryAgain;
	do {
		menu();

		cout <<setw(72)<< "Do you want to repeat again? [Y/N]: ";
		cin.get(tryAgain);
		cin.ignore();
		tryAgain = toupper(tryAgain);

	} while (TryAgain(tryAgain));
}


void menu()
{
	
	system("cls");
	cout << setw(5);
	for (int i = 0; i <= 100; i++)
	{
		cout << "=";
	}
	cout << setw(90) << "Welcome to a Compilation of Data Structures" << setw(43) << "\n";
	cout << setw(5);
	for (int i = 0; i <= 100; i++)
	{
		cout << "=";
	}
	cout << "\n\n\n";
	bool inValid = true;
	switch (Choice())
	{
	case 1:
		cout << setw(5);
		for (int i = 0; i <= 100; i++)
		{
			cout << "=";
		}
		int choice;
		
		do {
			cout << endl <<endl << setw(64) << "You Picked Array!\n";
			
			cout << setw(62) << "1. Static Array" << endl << setw(63) << "2. Dynamic Array" << setw(55) << endl << "Choice: ";
			cin >> choice;

			if (choice == 1)
			{
				//staticArray here
				inValid = false;
				
			}
			else if (choice ==2 )
			{
				//dynamicArray Here
				inValid = false;
			}
			else 
			{
				cout << "INVALID INPUT!!!!";
				system("cls");
			}

		} while (inValid == true);

		cin.ignore();
		break;
	case 2:
		cout << setw(5);
		for (int i = 0; i <= 100; i++)
		{
			cout << "=";
		}
		cout << endl << endl << setw(64) << "You Picked Linked List!\n";
		//linked list here
		cin.ignore();
		break;
	case 3:
		cout << setw(5);
		for (int i = 0; i <= 100; i++)
		{
			cout << "=";
		}
		//stack here
		//pick if static or dynamic stack

		int choice2;
		do{
			cout << endl << endl << setw(64) << "You Picked Stack!\n";

			cout << setw(62) << "1. Static Stack" << endl << setw(63) << "2. Dynamic Stack" << setw(55) << endl << "Choice: ";
			cin >> choice2;

			if (choice2 == 1)
			{
				//staticArray here
				inValid = false;

			}
			else if (choice2 == 2)
			{
				//dynamicArray Here
				inValid = false;
			}
			else
			{
				cout << "INVALID INPUT!!!!";
				system("cls");
			}

		} while (inValid == true);

		cin.ignore();
		break;


	}

 	

}

int Choice()
{
	int choice;
	cout << setw(76) << "Pick the data structure that you want to use:" << endl << setw(55) << "1. Array" << endl << setw(61) << "2. Linked List" << endl << setw(55) << "3. Stack" << endl << setw(55) << "4. Queue" << endl << setw(55) << "Choice: ";
	cin >> choice;
	cin.ignore();
	cout << endl;

	return choice;
}


bool TryAgain(char tryAgain)
{
	return tryAgain == 'Y';
}