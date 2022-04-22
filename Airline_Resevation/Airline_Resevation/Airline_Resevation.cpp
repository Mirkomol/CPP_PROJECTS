#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;


void mainMenu();

class Management
{
public:
	Management()
	{
		mainMenu();
	}
};

class Details
{
public:
	static string name, gender;
	int phoneNo;
	int age;
	string add;
	static int cID;
	char arr[100];

	void information(){
		cout << "\n Enter the Customer Id: ";
		cin >> cID;
		cout << "\n Enter Name Please: ";
		cin >> name;
		cout << "\n Enter th age: ";
		cin >> age;
		cout << "\n Enter the Address: ";
		cin >> add;
		cout << "\n Gender: ";
		cin >> gender;
		cout << "Your Details are saved with us\n" << endl;
	}
};

int Details::cID;
string Details::name;
string Details::gender;


class registration
{
public:
	static int choice;
	int choice1;
	int back;
	static float charges;


	void flights()
	{
		string flightN[] = { "Dubai","Canada","UK","USA","Australia","Europe","Turkey" };

		for(int a = 0;a<6;a++)
		{
			cout << (a + 1) << ".flight to" << flightN[a] << endl;

		}
		cout << "Welcome to the Airlines!" << endl;
		cout << "Press the number of the country that you want to flight" << endl;
		cin >> choice;

		switch(choice)
		{
		case 1:
			{
				cout << "________________Welcome To Dubai Emirates_____________\n" << endl;

				cout << "Your comfort is our priority.Enjoy the journey! " << endl;

				cout << "Following are  the flights \n" << endl;

				cout << "1. DUB - 498" << endl;
				cout << "\t08-01-2022 8:00AM 10HRS rS. 1400" << endl;
				cout << "1. DUB - 49328" << endl;
				cout << "\t08-01-2022 8:00AM 10HRS rS. 1413130" << endl;
				cout << "1. DUB - 4128" << endl;
				cout << "\t08-01-2022 8:00AM 10HRS rS. 12132" << endl;

				cout << "\n Select the flight you want to book :";
				cin>>choice1;

				if(choice1==1)
				{
					charges = 500;
					cout << "\n You have succesfully booked flight DUB -498" << endl;
					cout << "\n You can go bakc and take ticket " << endl;
				}
				else if (choice1 == 2)
				{
					charges = 700;
					cout << "\n You have succesfully booked flight DUB - 1413130 " << endl;
					cout << "\n You can go bakc and take ticket " << endl;
				}
				else if (choice1 == 3)
				{
					charges = 900;
					cout << "\n You have succesfully booked flight DUB -12132" << endl;
					cout << "\n You can go bakc and take ticket " << endl;
				}
				else
				{
					cout << "Invaliud Input, shifting to previuo menu" << endl;
					flights();
				}

				cout << "Press any key to go back to main menu: " << endl;

				cin >> back;

				if (back == 1)
				{
					mainMenu();
				}
				else
				{
					mainMenu();
				}
				break;
				
			}
		case 2:
		{
			cout << "________________Welcome To Dubai Emirates_____________\n" << endl;

			cout << "Your comfort is our priority.Enjoy the journey! " << endl;

			cout << "Following are  the flights \n" << endl;

			cout << "1. DUB - 498" << endl;
			cout << "\t08-01-2022 8:00AM 10HRS rS. 1400" << endl;
			cout << "1. DUB - 49328" << endl;
			cout << "\t08-01-2022 8:00AM 10HRS rS. 1413130" << endl;
			cout << "1. DUB - 4128" << endl;
			cout << "\t08-01-2022 8:00AM 10HRS rS. 12132" << endl;

			cout << "\n Select the flight you want to book :";
			cin >> choice1;

			if (choice1 == 1)
			{
				charges = 500;
				cout << "\n You have succesfully booked flight DUB -498" << endl;
				cout << "\n You can go bakc and take ticket " << endl;
			}
			else if (choice1 == 2)
			{
				charges = 700;
				cout << "\n You have succesfully booked flight DUB - 1413130 " << endl;
				cout << "\n You can go bakc and take ticket " << endl;
			}
			else if (choice1 == 3)
			{
				charges = 900;
				cout << "\n You have succesfully booked flight DUB -12132" << endl;
				cout << "\n You can go bakc and take ticket " << endl;
			}
			else
			{
				cout << "Invaliud Input, shifting to previuo menu" << endl;
				flights();
			}

			cout << "Press any key to go back to main menu: " << endl;

			cin >> back;

			if (back == 1)
			{
				mainMenu();
			}
			else
			{
				mainMenu();
			}
			break;

		}
		case 3:
		{
			cout << "________________Welcome To Dubai Emirates_____________\n" << endl;

			cout << "Your comfort is our priority.Enjoy the journey! " << endl;

			cout << "Following are  the flights \n" << endl;

			cout << "1. DUB - 498" << endl;
			cout << "\t08-01-2022 8:00AM 10HRS rS. 1400" << endl;
			cout << "1. DUB - 49328" << endl;
			cout << "\t08-01-2022 8:00AM 10HRS rS. 1413130" << endl;
			cout << "1. DUB - 4128" << endl;
			cout << "\t08-01-2022 8:00AM 10HRS rS. 12132" << endl;

			cout << "\n Select the flight you want to book :";
			cin >> choice1;

			if (choice1 == 1)
			{
				charges = 500;
				cout << "\n You have succesfully booked flight DUB -498" << endl;
				cout << "\n You can go bakc and take ticket " << endl;
			}
			else if (choice1 == 2)
			{
				charges = 700;
				cout << "\n You have succesfully booked flight DUB - 1413130 " << endl;
				cout << "\n You can go bakc and take ticket " << endl;
			}
			else if (choice1 == 3)
			{
				charges = 900;
				cout << "\n You have succesfully booked flight DUB -12132" << endl;
				cout << "\n You can go bakc and take ticket " << endl;
			}
			else
			{
				cout << "Invaliud Input, shifting to previuo menu" << endl;
				flights();
			}

			cout << "Press any key to go back to main menu: " << endl;

			cin >> back;

			if (back == 1)
			{
				mainMenu();
			}
			else
			{
				mainMenu();
			}
			break;

		}
			default:
			{
				cout << "Invalu=id Input, SHiftin" << endl;

			}
		}
	}
};

float registration::charges;
int registration::choice;


class ticket : public registration,Details
{
public:
	void Bill()
	{
		string destination = "";
		ofstream outf("records.txt");
		{
			outf << "____________XYZ AIRLINE________" << endl;
			outf << "____________Ticket________" << endl;
			outf << "__________________________" << endl;

			outf << "Customer ID:" << Details::cID << endl;
			outf << "Customer Name:" << Details::name << endl;
			outf << "Customer Gender:" << Details::gender << endl;
			outf << "\tDescription" << endl << endl;

			if(registration::choice == 1)
			{
				destination == "Dubai";
			}

			else if (registration::choice == 2)
			{
				destination == "Canada";
			}


			else if (registration::choice == 3)
			{
				destination == "Uk";
			}

			outf << "Destinatin\t\t" << destination << endl;
			outf << "Flight COst: \t\t" <<registration::charges << endl;
		}
		outf.close();

	}

	void dispBill()
	{
		ifstream ifs("record.txt");
		{
			if(!ifs)
			{
				cout << "File error!" << endl;
			}
			while(!ifs.eof())
			{
				ifs.getline(arr, 100);
				cout << arr << endl;
			}
		}
		ifs.close();
	}
};

void mainMenu()
{
	int lchoice;
	int rchoice;
	int back;

	cout << "\t              XYZ Airlines \n" << endl;
	cout << "\t__________________Main Menu______________________" << endl;

	cout << "\t_______________________________________________" << endl;
	cout << "\t\t\t\t\t\t\t\t\|" << endl;


	cout << "\t\t Press 1 to add to the Customer Details   \t|" << endl;
	cout << "\t\t Press 2 to Flight to the Registration    \t|" << endl;
	cout << "\t\t Press 3 to add to the Ticket and Charges \t|" << endl;
	cout << "\t\t Press 4 to Exit \t|" << endl;
	cout << "\t\t\t\t\t\t\t\t\|" << endl;
	cout << "\t_______________________________________________" << endl;


	cout << "Enter the choice : ";
	cin >> lchoice;

	Details d;
	registration r;
	ticket t;

	switch(lchoice)
	{
	case 1:
		{
			cout << "________Customers_________\n" << endl;
			d.information();
			cout << "Press any to o back to Main Menu ";
			cin >> back;

			if(back ==1)
			{
				mainMenu();
			}else
			{
				mainMenu();
			}
			break;
		}
	case 2:
		{
			cout << "_____Book a flight using this system__________\n" << endl;
			r.flights();
			break;
		}
	case 3:
		{
			cout << "____Get Your Ticket___\n" << endl;
			t.Bill();


			cout << "Your ticket is printed, you can collect it \n" << endl;
			cout << "Press 1 to display your ticket ";

			cin >> back;

			if(back==1)
			{
				t.dispBill();
				cout << "Press any key to go back to main Meny: ";
				cin >> back;
				if(back==1)
				{
					mainMenu();
				}
				else
				{
					mainMenu();
				}
			}
			else
			{
				mainMenu();
			}
			break;
		}
	case 4:
		{
			cout << "\n\t_____Thank you_____" << endl;
			break;
		}
		default:
		{
			cout << "Invalid Input,Please Try again \n" << endl;
			break;
		}
	}

}



int main()
{
	system("color a");
	system("cls");
	Management Mobj;
}
