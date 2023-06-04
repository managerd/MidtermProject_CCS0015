#include <iostream>
#include <cstring>
#include <iomanip>
#include <limits>

//HEADER FILES	
#include "staticStacks.h"//CLAMOR
#include "dynamicStacks.h"//CLAMOR
#include "staticQueue.h"//DELA ROSA
#include "dynamicQueue.h"// DELA ROSA
//#include "staticArray.h" //BAY
#include "LinkedList.h" //REBENITO

using namespace std;

bool TryAgain(char);
void menu(),linkedList(), staticS(), dynamicS(), staticQ(), dynamicQ();
int Choice();

//DRIVER FILE - MALABANAN
int main()
{
	char tryAgain;
	do {
		menu();

		cout <<endl<<setw(72)<< "Do you want to repeat again? [Y/N]: ";
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
	cout << setw(86) << "You are allowed to only allowed to input integers(whole numbers)" << setw(43) << "\n";
	cout << setw(5);
	for (int i = 0; i <= 100; i++)
	{
		cout << "=";
	}
	cout << "\n\n\n";
	bool inValid = true;
	switch (Choice())
	{
	case 1://linkedlist
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

			switch(choice )
			{
			case 1:
				//staticArray here
				//staticA();
				inValid = false;
				break;
			case 2: 
				//dynamicArray here
				//dynamicA();
				inValid = false;
				break;
			default:

				cout << "INVALID INPUT!!!!";
				system("cls");
				return menu();
				break;
			}

		} while (inValid == true);

		cin.ignore();
		break;
	case 2://linkedlist
		cout << setw(5);
		for (int i = 0; i <= 100; i++)
		{
			cout << "=";
		}
		cout << endl << endl << setw(64) << "You Picked Linked List!\n";
		//linked list here
		linkedList();
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
			cout << setw(5);
			for (int i = 0; i <= 100; i++)
			{
				cout << "=";
			}
			cout << endl << endl;
			switch (choice2)
			{
			case 1:
				//staticArray here
				staticS();
				inValid = false;
				break;

			case 2:

				//dynamicArray Here
				dynamicS();
				inValid = false;
				break;
			default:

				cout << "INVALID INPUT!!!!";
				system("cls");
				return menu();
				break;
			}

		} while (inValid == true);

		cin.ignore();
		break;
	case 4:
		cout << setw(5);
		for (int i = 0; i <= 100; i++)
		{
			cout << "=";
		}
		cout << endl;
		cout << endl << endl << setw(64) << "You Picked Queue!\n";
		cout << setw(62) << "1. Static Queue" << endl << setw(63) << "2. Dynamic Queue" << setw(55) << endl << "Choice: ";
		cin >> choice;
		
		cin.ignore();
		cout << setw(5);
		for (int i = 0; i <= 100; i++)
		{
			cout << "=";
		}


		switch(choice)
		{
		case 1:
			//staticQueue here
			staticQ();
			break;
		case 2:
			//dynamicQueue here
			dynamicQ();
			break;
		default:
			cout << "INVALID INPUT!!!!";
			system("cls");
			return menu();
			break;
		}

		break;
	
	case 5:
		exit(1);
		break;
	default:
		cout << "INVALID INPUT!!";
		system("cls");
		return menu();
		break;
	}

 	

}

int Choice()
{
	int choice;
	cout << setw(76) << "Pick the data structure that you want to use:" << endl << setw(55) << "1. Array" << endl << setw(61) << "2. Linked List" << endl << setw(55) << "3. Stack" << endl << setw(55) << "4. Queue" << endl<<setw(54)<<"5. Exit" <<endl<< setw(55) << "Choice: ";
	cin >> choice;
	if (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		system("cls");
		menu();
		
	}
	cin.ignore();
	cout << endl;

	return choice;
}

bool TryAgain(char tryAgain)
{
	return tryAgain == 'Y';
}



void linkedList()
{
	LinkedList listMain;
	int listMenu, listPosition, listValue;
	char caseChoice;
	bool begVal = false;
	cout << setw(5);
	for (int i = 0; i <= 100; i++)
	{
		cout << "=";
	}
	cout << endl;
	
	

	do {
		cout << setw(65) << "Linked List Functions: \n"
			<< setw(63) << "1. Insert (Position)\n"
			<< setw(64) << "2. Insert (Beginning)\n"
			<< setw(58) << "3. Insert (End)\n" //insertEnd
			<< setw(63) << "4. Remove (Position)\n"
			<< setw(52) << "5. Search\n"
			<< setw(55) << "6. List Size\n"
			<< setw(68) << "7. Check if list is Empty\n"
			<< setw(58) << "8. Display List\n"
			<< setw(60) << "9. Return to Main\n"
			<< setw(68) << "Enter your choice of function: ";

		cin >> listMenu;

		switch (listMenu) {

			//insert a value at a specific position
		case 1:
			cout << setw(5);
			for (int i = 0; i <= 100; i++)
			{
				cout << "=";
			}
			cout << endl;
			cout <<setw(63)<< "Enter a value: ";
			cin >> listValue;
			cout << setw(63) << "Enter a position: ";
			cin >> listPosition;

			if (begVal != true) {
				cout <<endl<< setw(85) << "Cannot insert at first position, must have a value first!" << endl;
				cout << endl;
				break;
			}

			else {
				listMain.insertPos(listValue, listPosition);
				cout << setw(33) << listValue << " has been inserted at position " << listPosition << endl;
				cout << endl;
			}

			break;

			//insert a value at a beginning of the list	
		case 2:
			cout << setw(5);
			for (int i = 0; i <= 100; i++)
			{
				cout << "=";
			}
			cout << endl;
			cout << setw(63) << "Enter a value: ";
			cin >> listValue;

			listMain.insertBeg(listValue);
			begVal = true;

			cout << setw(33) << listValue << " has been inserted at the beginning of the list." << endl;
			cout << endl;
			break;

			//insert a value at the end of the list
		case 3:
			cout << setw(5);
			for (int i = 0; i <= 100; i++)
			{
				cout << "=";
			}
			cout << endl;
			cout << setw(63) << "Enter a value: ";
			cin >> listValue;

			listMain.insertEnd(listValue);

			cout << setw(33) << listValue << " has been inserted at the end of the list." << endl;
			cout << endl;
			break;

			//remove a value at a specific position
		case 4:
			cout << setw(5);
			for (int i = 0; i <= 100; i++)
			{
				cout << "=";
			}
			cout << endl;
			if (listMain.isEmpty()) {
				cout << endl;
				cout << setw(63) << "List is empty, nothing to remove" << endl;
				cout << endl;
				break;
			}

			else {
				cout << endl;
				cout << setw(63) << "Enter a position: ";
				cin >> listPosition;

				do {
					cout << setw(73) << "Delete the value inserted at position " << listPosition << "? [Y/N] ";
					cin >> caseChoice;

					if (caseChoice == 'Y' || caseChoice == 'y') {
						listMain.deleteVal(listPosition);
						cout << setw(53) << "Value of position " << listPosition << " has been deleted from the list." << endl;
						cout << endl;
						break;
					}

					else if (caseChoice == 'N' || caseChoice == 'n') {
						cout << setw(63) << "Deletion of position " << listPosition << " has been cancelled." << endl;
						cout << endl;
						break;
					}

					else {
						cout << setw(63) << "Invalid Input! Please Try Again" << endl;
						cout << endl;
					}
				} while ((caseChoice != 'Y' || caseChoice != 'y') || (caseChoice != 'N' || caseChoice != 'n'));
			}
			break;

			//Search for a value in the list
		case 5:
			cout << setw(5);
			for (int i = 0; i <= 100; i++)
			{
				cout << "=";
			}
			cout << endl;
			if (listMain.isEmpty()) {
				cout << endl;
				cout << "List is empty, nothing to search" << endl;
				cout << endl;
				break;
			}

			else {
				cout << endl;
				cout<<setw(63) << "Enter a value: ";
				cin >> listValue;

				if (listMain.findVal(listValue)) {
					cout<<setw(53) << "The value " << listValue << " exists in the list." << endl;
					cout << endl;
				}

				else {
					cout <<setw(43)<< "The value " << listValue << " does not exist in the list." << endl;
					cout << endl;
				}

				break;
			}

			//Get the size of the list
		case 6:
			cout << setw(5);
			for (int i = 0; i <= 100; i++)
			{
				cout << "=";
			}
			cout << endl;
			cout <<setw(63)<< "The size of the list is " << listMain.getSize() << endl;
			cout << endl;
			break;

			//check if the list is empty or not
		case 7:
			cout << setw(5);
			for (int i = 0; i <= 100; i++)
			{
				cout << "=";
			}
			cout << endl;
			if (listMain.isEmpty()) {
				cout << endl;
				cout << setw(63)<<"The list is empty" << endl;
				cout << endl;
			}

			else {
				cout << endl;
				cout << setw(73)<< "The list is not empty and has the value of the ff: { ";
				listMain.listDisplay();
				cout << " }" << endl;
				cout << endl;
			}

			break;

			//displays the list
		case 8:
			cout << setw(5);
			for (int i = 0; i <= 100; i++)
			{
				cout << "=";
			}
			cout << endl;
			cout << setw(63) << "Current values of the list: { ";
			listMain.listDisplay();
			cout << " }" << endl;
			cout << endl;
			break;
		case 9:
			return menu();
			break;
		default:
			cout << setw(5);
			for (int i = 0; i <= 100; i++)
			{
				cout << "=";
			}
			cout << endl;
			cout << setw(68) << "Invalid Input! Please Try Again" << endl;
			cout << endl;
			break;
		}
	} while (listMenu != 0);
}

void staticS()
{
	staticStacks sStack;

	int choice;
	int inp;
	char cont;
	//options of staticstack
	cout << setw(67) << "You Picked Static Stack!" <<endl;
	
	do {
		cout << setw(5);
		for (int i = 0; i <= 100; i++)
		{
			cout << "=";
		}
		cout << endl;
		cout << setw(54) << "1. Push" << setw(53)<< endl << "2. Pop" << setw(54) << endl <<"3. Peek" << setw(57) << endl<< "4. Display" << endl <<  setw(64)<< "5. Return to Main"<<endl << setw(55) << "Choice: ";
		cin >> choice;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input. Please enter a number." << endl;
			system("cls");
			
			return staticS();
		}
		cin.ignore();
		cout << setw(5);
		for (int i = 0; i <= 100; i++)
		{
			cout << "=";
		}
	
		switch (choice)
		{
		case 1:

			cout << endl << endl << setw(64) << "You Picked Push!\n";
			cout << setw(5);
			
			cout << endl << endl;
			cout << setw(63) << "Enter a number: ";
			cin >> inp;
			if (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				system("cls");
				return staticS();
			}
			sStack.push(inp);
			cin.ignore();
			break;
		case 2:
			cout << endl << endl << setw(64) << "You Picked Push!\n";
			cout << setw(5);

			cout << endl << endl;
			sStack.pop();
			
			
			break;
		case 3:
			cout << endl << endl << setw(64) << "You Picked Peek!\n";
			cout << setw(5);

			cout << endl << endl;
			cout<<setw(58) <<"Peeked: " << sStack.peek() << endl;
			
			break;
		case 4:
			cout << endl << endl << setw(64) << "You Picked Display!\n";
			cout << setw(5);

			cout << endl << endl;
			sStack.displayStat();
			break;
		case 5:
			return menu();
			break;
		default:
			cout << endl << endl << setw(64) << "INVALID INPUT!\n";
			cout << setw(5);
			return menu();
			break;
		}

		cout << setw(78) << "Do you want to use other functions? [Y/N]: ";
		cin>> cont;
		cont = toupper(cont);
		cin.ignore();
	} while (cont == 'Y');
	system("cls");
	return menu();
}

void dynamicS() 
{
	dynamicStacks dStack;
	int choice, inp;

	char cont;

	cout << setw(67) << "You Picked Dynamic Stack!" << endl;

	do {
		cout << setw(5);
		for (int i = 0; i <= 100; i++)
		{
			cout << "=";
		}
		cout << endl;
		cout << setw(54) << "1. Push" << setw(53) << endl << "2. Pop" << setw(54) << endl << "3. Peek" << setw(57) << endl << "4. Display" << endl << setw(64) << "5. Return to Main" << endl << setw(55) << "Choice: ";
		cin >> choice;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input. Please enter a number." << endl;
			system("cls");
			
			return dynamicS();
		}
		cin.ignore();
		cout << setw(5);
		for (int i = 0; i <= 100; i++)
		{
			cout << "=";
		}

		switch (choice)
		{
		case 1:

			cout << endl << endl << setw(64) << "You Picked Push!\n";
			cout << setw(5);

			cout << endl << endl;
			cout << setw(63) << "Enter a number: ";
			cin >> inp;
			cin >> inp;
			if (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				system("cls");
				return dynamicS();
			}
			dStack.push(inp);
			cin.ignore();
			break;
		case 2:
			cout << endl << endl << setw(64) << "You Picked Push!\n";
			cout << setw(5);

			cout << endl << endl;
			dStack.pop();


			break;
		case 3:
			cout << endl << endl << setw(64) << "You Picked Peek!\n";
			cout << setw(5);

			cout << endl << endl;
			cout << setw(58) << "Peeked: " << dStack.peek() << endl;

			break;
		case 4:
			cout << endl << endl << setw(64) << "You Picked Display!\n";
			cout << setw(5);

			cout << endl << endl;
			dStack.displayDyn();
			break;
		case 5:
			return menu();
			break;
		default:
			cout << endl << endl << setw(64) << "INVALID INPUT!\n";
			cout << setw(5);
			break;
		}

		cout << setw(78) << "Do you want to use other functions? [Y/N]: ";
		cin >> cont;
		cont = toupper(cont);
		cin.ignore();
	} while (cont == 'Y');
	system("cls");
	return menu();
}

void staticQ() 
{
	staticQueue sQueue;

	int choice, inp;

	char cont;

	cout<<endl << setw(67) << "You Picked Static Queue!" << endl;

	

	do {
		cout << setw(5);
		for (int i = 0; i <= 100; i++)
		{
			cout << "=";
		}
		cout << endl;
		cout << setw(57) << "1. Enqueue" << setw(57) << endl << "2. Dequeue" << setw(57) << endl << "3. Display"<< endl << setw(64) << "4. Return to Main" << endl << setw(55) << "Choice: ";
		cin >> choice;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input. Please enter a number." << endl;
			system("cls");

			return staticQ();
		}
		cin.ignore();
		cout << setw(5);
		for (int i = 0; i <= 100; i++)
		{
			cout << "=";
		}

		switch (choice)
		{
		case 1:

			cout << endl << endl << setw(64) << "You Picked Enqueue!\n";
			cout << setw(5);

			cout << endl << endl;
			cout << setw(63) << "Enter a number: ";
			cin >> inp;
			
			if (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				system("cls");
				return staticQ();
			}
			cin.ignore();
			sQueue.enqueue(inp);
			
			break;
		case 2:
			cout << endl << endl << setw(64) << "You Picked Dequeue!\n";
			cout << setw(5);

			cout << endl << endl;
			sQueue.dequeue();


			break;
		
		case 3:
			cout << endl << endl << setw(64) << "You Picked Display!\n";
			cout << setw(5);

			cout << endl << endl;
			sQueue.display();
			break;
		case 4:
			return menu();
			break;
		default:
			cout << endl << endl << setw(64) << "INVALID INPUT!\n";
			cout << setw(5);
			break;
		}

		cout << setw(78) << "Do you want to use other functions? [Y/N]: ";
		cin >> cont;
		cont = toupper(cont);
		cin.ignore();
	} while (cont == 'Y');
	system("cls");
	return menu();

}

void dynamicQ() 
{
	dynamicQueue dQueue;
	int choice, inp;

	char cont;

	cout << endl << setw(67) << "You Picked Dynamic Queue!" << endl;

	do {
		cout << setw(5);
		for (int i = 0; i <= 100; i++)
		{
			cout << "=";
		}
		cout << endl;
		cout << setw(57) << "1. Enqueue" << setw(57) << endl << "2. Dequeue" << setw(57) << endl << "3. Display" << endl << setw(64) << "4. Return to Main" << endl << setw(55) << "Choice: ";
		cin >> choice;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input. Please enter a number." << endl;
			system("cls");

			return dynamicQ();
		}
		cin.ignore();
		cout << setw(5);
		for (int i = 0; i <= 100; i++)
		{
			cout << "=";
		}

		switch (choice)
		{
		case 1:

			cout << endl << endl << setw(64) << "You Picked Enqueue!\n";
			cout << setw(5);

			cout << endl << endl;
			cout << setw(63) << "Enter a number: ";
			cin >> inp;

			if (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				system("cls");
				return dynamicQ();
			}
			cin.ignore();
			dQueue.enqueue(inp);

			break;
		case 2:
			cout << endl << endl << setw(64) << "You Picked Dequeue!\n";
			cout << setw(5);

			cout << endl << endl;
			dQueue.dequeue();

			break;

		case 3:
			cout << endl << endl << setw(64) << "You Picked Display!\n";
			cout << setw(5);

			cout << endl << endl;
			dQueue.display();
			break;
		case 4:
			return menu();
			break;
		default:
			cout << endl << endl << setw(64) << "INVALID INPUT!\n";
			cout << setw(5);
			break;
		}

		cout << setw(78) << "Do you want to use other functions? [Y/N]: ";
		cin >> cont;
		cont = toupper(cont);
		cin.ignore();
	} while (cont == 'Y');
	system("cls");
	return menu();

}