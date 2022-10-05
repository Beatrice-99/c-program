// a program to sum up 1-10
#include<iostream>
using namespace std;
int main()
{
	int i, sum=0;
	for(i=1;i<=10;i++)
	{
		cout<<i<<"";
		sum=sum+i;
	}
	cout<<"sum of the 10 numbers"<<sum;
	return 0;
}