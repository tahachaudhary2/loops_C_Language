#include <iostream>
using namespace std;
int main(){
	int number, factorial=1;
	cout<<"Enter Number:"<<endl;
	cin>>number;
	int i= number;
	while(i>=1)
	{
		factorial= factorial*i;
		i--;
	}
	cout<<"Factorial is:"<<factorial<<endl;
	return 0;
	
}
