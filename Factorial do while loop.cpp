#include <iostream>
using namespace std;
int main(){
	int number, factorial=1;
	cout<<"Enter Number:"<<endl;
	cin>>number;
	int i= number;
	do
	{
		factorial= factorial*i;
		i--; 
	} while (i>=1);
	cout<<"Factorial is:"<<factorial<<endl;
	return 0;
}
