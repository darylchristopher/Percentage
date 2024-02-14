#include<iostream>
using namespace std;
int main()
{
	float percent;
	int x;
	cout<<"Enter your percentage: ";
	cin>>percent;
	cout<<"You scored "<<percent<<"%"<<endl;
	x=percent/10;
	switch(x)
	{
		case 10:
		case 9:
		case 8:
			cout<<"You have passed with Distinction";
		break;
		case 7:
		case 6:
			cout<<"You have passed with First Division";
		break;
		case 5:
			cout<<"You have passed with Second division";
		break;
		case 4:
			cout<<"You have passed with Third division";
		break;
		default:
			cout<<"Sorry: You have failed";
	}
	return 0;
}
