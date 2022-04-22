#include <iostream>
using namespace std;


void showMenu()
{
	cout << "\t\t\t\t\********************* MENU *********************" << endl;
	cout << "\t\t\t\t\ 1. Check Balance" << endl;
	cout << "\t\t\t\t\ 2. Deposit" << endl;
	cout << "\t\t\t\t\ 3. Withdraw" << endl;
	cout << "\t\t\t\t\ 4. Exit" << endl;
	cout << "\t\t\t\t\******************************************" << endl;

}


int main()
{

	int option;
	double balance = 500;

	do
	{
		showMenu();
		cout << "Please Choose option: ";
		cin >> option;
		system("cls");

		switch (option)
		{
		case 1:cout << "Balance is: " << balance << " $ " << endl; break;
		case 2:cout << "Deposit amount: ";
			double depositAmount;
			cin >> depositAmount;
			balance += depositAmount;
			break;
		case 3:cout << "Withdraw amount: ";
			double withdrawAmount;
			cin >> withdrawAmount;
			if (withdrawAmount <= balance)
			{
				balance -= withdrawAmount;
			}
			else
			{
				cout << "No sufficent money: " << endl;
			}
			break;
		}

	} while (option != 4);
	
	system("pause>0");
	
}
