#include <iostream>
using namespace std;
int main(){
	int factorial=1 , number;
	cout<<"Enter Number:"<<endl;
	cin>>number;
	for( int i=number; i>=1; i--)
	{
		factorial= factorial*i;
	}
	cout<<"Factorial is:"<<factorial<<endl;
	return 0;
}
