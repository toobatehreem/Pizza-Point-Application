#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
float gst=0.13;
int dc=50;
class pizza
{
	public:
		int choice, order, order1, order2, order3, order4, order5,pizza_size, deals;
		string name, address;
		float phone_no;
		
	void process()
	{
		cin>>choice;
		if(choice==1)
		{
			cout<<"What would you like to order.\n\n";
			cout<<"1. Pizza Fries.\n";
			cout<<"2. Salad.\n";
			cout<<"3. Pizzas.\n";
			cout<<"4. Pastas.\n";
			cout<<"5. Beverages.\n";
			cout<<"Enter your choice.\n";
			cin>>order;
			if(order==1)
			{
				cout<<"1. Mexican Pizza Fries.\t\tRs. 399/-"<<endl;
				cout<<"2. Cracker Pizza Fries.\t\tRs. 299/-"<<endl;
				cin>>order1;
				if(order1==1)
				{
					cout<<"\nYou have ordered Mexican Pizza Fries.\nTotal cost of your order is : Rs. "<<399+(399*gst)+dc<<endl;
				}
				else if(order1==2)
				{
					cout<<"\nYou have ordered Cracker Pizza Fries.\nTotal cost of your order is : Rs. "<<299+(299*gst)+dc<<endl;
				}
				else
			cout<<"Invalid Choice.";
			}
			else if(order==2)
			{
				cout<<"1. Salad.\t\tRs. 499/-"<<endl;
				cin>>order2;
				if(order2==1)
				{
					cout<<"\nYou have ordered Salad.\nTotal cost of your order is : Rs. "<<499+(499*gst)+dc<<endl;
				}
				else
			cout<<"Invalid Choice.";
			}
			else if(order==3)
			{
				cout<<"1. Cheese Lovers.\n";
				cout<<"2. Fajita Sensation.\n";
				cout<<"3. Malai Boti.\n";
				cin>>order3;
				if(order3==1 || order3==2 || order3==3)
				{
					cout<<"Kindly Select Sizes.\n";
					cout<<"1. Small.\t\tRs. 599/-\n";
					cout<<"2. Regular.\t\tRs. 899/-\n";
					cout<<"3. Large.\t\tRs. 1349/-\n";
					cin>>pizza_size;
				}
				if(order3==1 && pizza_size==1)
				{
					cout<<"You have ordered a Small Cheese Lovers Pizza.\nTotal cost of your order is : Rs. "<<599+(599*gst)+dc<<endl;
				}
				if(order3==2 && pizza_size==1)
				{
					cout<<"You have ordered a Small Fajita Sensation Pizza.\nTotal cost of your order is : Rs. "<<599+(599*gst)+dc<<endl;
				}
				if(order3==3 && pizza_size==1)
				{
					cout<<"You have ordered a Small Malai Boti Pizza.\nTotal cost of your order is : Rs. "<<599+(599*gst)+dc<<endl;
				}
				if(order3==1 && pizza_size==2)
				{
					cout<<"You have ordered a Medium Cheese Lovers Pizza.\nTotal cost of your order is : Rs. "<<899+(899*gst)+dc<<endl;
				}
				if(order3==2 && pizza_size==2)
				{
					cout<<"You have ordered a Medium Fajita Sensation Pizza.\nTotal cost of your order is : Rs. "<<899+(899*gst)+dc<<endl;
				}
				if(order3==3 && pizza_size==2)
				{
					cout<<"You have ordered a Medium Malai Boti Pizza.\nTotal cost of your order is : Rs. "<<899+(899*gst)+dc<<endl;
				}
				if(order3==1 && pizza_size==3)
				{
					cout<<"You have ordered a Large Cheese Lovers Pizza.\nTotal cost of your order is : Rs. "<<1349+(1349*gst)+dc<<endl;
				}
				if(order3==2 && pizza_size==3)
				{
					cout<<"You have ordered a Large Fajita Sensation Pizza.\nTotal cost of your order is : Rs. "<<1349+(1349*gst)+dc<<endl;
				}
				if(order3==3 && pizza_size==3)
				{
					cout<<"You have ordered a Large Malai Boti Pizza.\nTotal cost of your order is : Rs. "<<1349+(13499*gst)+dc<<endl;
				}
				else
				cout<<"Invalid Choice";
			}
			else if(order==4)
			{
				cout<<"Pastas.\n";
				cout<<"1. Chicken Pasta.\t\tRs. 399/-\n";
				cin>>order4;
				if(order4==1)
				{
					cout<<"\nYou have ordered Chicken Pasta.\nTotal cost of your order is : Rs. "<<399+(399*gst)+dc<<endl;
				}
				else
				cout<<"Invalid Choice.";
			}
			else if(order==5)
			{
				cout<<"Beverages.\n";
				cout<<"1. Soft Drink.\t\tRs. 50/-\n";
				cin>>order5;
				if(order5==1)
				{
					cout<<"\nYou have ordered Soft Drink.\nTotal cost of your order is : Rs. "<<50+(50*gst)+dc<<endl;
				}
				else
				cout<<"Invalid Choice.";
			}
	}
		else if(choice==2)
		{
			cout<<"Deals.\n";
			cout<<"1. 1 Small Pizza + 345 ml Drink.\t\tRs. 299/-\n";
			cout<<"2. 1 Regular Pizza + 2 X 345 ml Drink.\t\tRs. 649/-\n";
			cout<<"3. 1 Large Pizza + 1.5 Ltr. Drink.\t\tRs. 999/-\n";
			cin>>deals;
			if(deals==1)
			{
				cout<<"\nYou have ordered Deal 1.\nTotal cost of your order is : Rs. "<<299+(299*gst)+dc<<endl;
			}
			else if(deals==2)
			{
				cout<<"\nYou have ordered Deal 2.\nTotal cost of your order is : Rs. "<<649+(649*gst)+dc<<endl;
			}
			else if(deals==3)
			{
				cout<<"\nYou have ordered Deal 3.\nTotal cost of your order is : Rs. "<<999+(999*gst)+dc<<endl;
			}
			else
			cout<<"Invalid Choice.";
		}
		else if(choice==3)
		{
			cout<<"\t\tOur Branch Locations.\n";
			cout<<"\nHead Office:\n Plot # 2K, Block # 6, Sharah-e-Faisal, Near Nursery Bus Stop, PECHS Karachi."<<endl;
			cout<<"\nGulshan-E-Iqbal Branch:\n Block-2, Gulshan-E-Iqbal Karachi."<<endl;
			cout<<"\n\nPress Enter to Continue.";
			getch();
			system("cls");
		}
		else if(choice==4)
		{
			exit(0);
		}
		else
			cout<<"Invalid Choice.";
	}	
	void menuchoice()
	{
		cout<<"\n__________________________________________"<<endl;
		cout<<"\n\t\tWelcome to Pizza Point"<<endl<<endl;
		cout<<"__________________________________________"<<endl;
		cout<<endl;
		cout<<"1. Menu.\n";
		cout<<"2. Deals.\n";
		cout<<"3. Locations.\n";
		cout<<"4. Exit.\n\n";
		cout<<"Enter your choice.\n";
	}
	int choicee()
	{
		return choice;
	}
	void getaddress()
	{
		cout<<endl<<endl;
		cout<<"Enter your name: "<<endl;
		cin>>name;
		cout<<"Enter Phone Number: \n";
		cin>>phone_no;
		cout<<"Enter your address: \n";
		cin>>address;
		displayinfo();
	}
	void displayinfo()
	{
		cout<<endl<<endl;
		cout<<"Your order will be delivered to the following:\n";
		cout<<"Name: "<<name<<endl;
		cout<<"Phone Number: "<<phone_no<<endl;
		cout<<"Address: "<<address<<endl;
		cout<<"\n\nPress Enter to Continue.";
		getch();
		system("cls");
	}
};
int main()
{
	pizza p;
	cout<<"\n\n\t\t\t\tWelcome";
	Sleep(1000);
	cout<<"\n\n\n\t\t\t\t\t\t\tDeveloped by Tooba Tehreem Sheikh";
	Sleep(600);
	while(p.choicee()!=4)
	{
	p.menuchoice();
	p.process();
	p.getaddress();
}
}
