#include<iostream>
using namespace std;

int main()
{
	int i=10,j=5;
	int modResult=0;
	int divResult=0;
	modResult =i%j;
	cout<<i/modResult;
	divResult=i/modResult; //unhandled exception at interger division by zero
	cout<<divResult;
	
	return 0;
}
