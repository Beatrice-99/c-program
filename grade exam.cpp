//program to grade examination
#include<iostream>
using namespace std;
int main()
{
	int maths, english, french,science,CRE,avg;
	cout<<"enter marks for five units"<<endl;
	cin>>maths>>english>>french>>science>>CRE ;
	avg=maths+english+french+science+CRE/5;
	if(avg>=70&&avg<=100)
	{
		cout<<"grade A";
	}
	else if(avg>=60&&avg<=69)
	{
		cout<<"grade B"; 
	}
	else if(avg>=50&&avg<=59)
	{
		cout<<"grade C";
	}
	else if (avg>=40&&avg<=49)
	{
		cout<<"grade D";
	}
	else{
		cout <<"FAIL";
	}
	return 0;
}