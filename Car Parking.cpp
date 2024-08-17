#include<iostream>
using namespace std;

int main()
{
	system("color E");
	int input,amount=0,count=0;
	int c=0,b=0,r=0;
	
	while(true)
	{
	system("cls");
	cout<<"\nPress 1 for 'Rickshaw'"<<endl;
	cout<<"Press 2 for 'Cars'"<<endl;
	cout<<"Press 3 for 'Buses'"<<endl;
	cout<<"Press 4 'To show Records'"<<endl;
	cout<<"Press 5 'To Delete all Records' \n"<<endl;
	cin>>input;
	
	// parking is full ke liye nested if lagake count<=50 wali condition use kari hai 
	// teeno cases me !
 
	if(input==1)
	{
	if(count<50)
	{
	r=r+1; // r++;
	amount=amount+100;
	count=count+1;
	}else{
    cout<<"No more Cars , Parking is fulllll"<<endl;
	}}
    
    else if(input==2)
	{
	if(count<50)
	{
	c=c+1; // c++;
	amount=amount+200;
	count=count+1;
	}else{
    cout<<"Parking is fulllll"<<endl;
	}}
    
    else if(input==3)
	{
	if(count<50)
	{
	b=b+1; // b++;
	amount=amount+200;
	count=count+1;
	}else{
    cout<<"Parking is fulllll"<<endl;
    }}
	
    else if(input==4)
	{
		
	system("cls");

	cout<<"******************************************"<<endl;
	cout<<"The Total Amount = "<<amount<<endl;
	cout<<"The Total No. of Vehicles parked = "<<count<<endl;  
	cout<<"The Total No. of Rickshaws parked = "<<r<<endl;   
	cout<<"The Total No. of Cars parked = "<<c<<endl;   
	cout<<"The Total No. of Buses parked = "<<b<<endl;    
	cout<<"******************************************"<<endl;
    system("pause");
	}
	
	else if(input==5)
	{
	amount=0;
	count=0;
	r=0;
	c=0;
	b=0;
	cout<<"******************************************"<<endl;
	cout<<"Record Deleted !!"<<endl;
	cout<<"******************************************"<<endl;
	system("pause");
    }
    else{
    cout<<"Invalid Input. Try Again !!!!"<<endl;
    system("pause");
	}
	}
	/*
	Clearing Screen at the Start: system("cls"); is placed right at the beginning of each 
	loop iteration. This clears the screen before the menu is displayed again.
	Pausing for User Input: Added system("pause"); after displaying records or error 
	messages to pause the output so the user can read it before the screen is cleared again. 
	This makes sure the information is visible.
	*/

	return 0;
}
