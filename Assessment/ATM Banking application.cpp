#include<iostream>
using namespace std;

class Bank{
	public:
		string name;
		int balance=5000,ac_no=434563655,we,de;
		void Create_ac()
		{
			cout<<"enter name: ";
			cin>>name;
			
			cout<<"Account number is created: "<<ac_no<<endl;
			cout<<"Balance: "<<balance<<endl;
		}
		
		void Deposit()
		{
			cout<<"enter number for deposit: "<<endl;
			cin>>de;
			
			balance+=de;
			cout<<"Deposit sucessfully!!"<<de<<endl;
		}
		
		void withdraw()
		{
			cout<<"Enter number for withdraw: "<<endl;
			cin>>we;
			
			balance-=we;
			cout<<"Withdraw Sucessfully!!"<<we<<endl;
		}
		
		void check_bal()
		{
			cout<<"balance is: "<<balance<<endl;
		}
};

main()
{
	Bank obj;
	
	cout<<"press 1 for create account"<<endl;
	cout<<"press 2 for exit"<<endl;
	
	int ch;
	
	cout<<"enter choice: ";
	cin>>ch;
	
	if(ch==1)
	{
		obj.Create_ac();
	
	while(1)
	{
		cout<<"press 1 for deposit"<<endl;
		cout<<"press 2 for withdraw"<<endl;
		cout<<"press 3 for check balance"<<endl;
		cout<<"press 4 for exit"<<endl;
		
		int ch1;
		
		cout<<"enter choice: ";
		cin>>ch1;
		
		if(ch1==1)
		{
			obj.Deposit();
		}
		
		else if(ch1==2)
		{
			obj.withdraw();
		}
		
		else if(ch1==3)
		{
			obj.check_bal();
		}
		
		else if(ch1==4)
		{
			cout<<"Thank you!!"<<endl;
			break;
		}
		else
		{
			cout<<"Invalid choice!!"<<endl;
			break;
		}
	}
}
else
{
	cout<<"Thank you";
}
}
