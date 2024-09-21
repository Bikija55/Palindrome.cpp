#include<iostream>
using namespace std;
int main()
{
	int n,num,digit,rev=0;
	
	cout<<"enter a possitive number:";
	cin>>num;
	
	n=num;
	do{
		digit = num% 10;
		rev= (rev * 10) +digit;
		num=num / 10;
		
	}while (num != 0);
	
	cout<<"the revvrse number is:"<<rev<<endl;
	
	if(n==rev and n > 0)
		cout<<"numebr is pallindrome number.";
	else
		cout<<"numebr is not pallindrome number.";
	
	return 0;
}
