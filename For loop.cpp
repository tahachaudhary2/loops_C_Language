#include <iostream>
using namespace std;
int main(){
	int number, sum, average;
	for (int i=1; i<=10; i++)
	{
		cout<<"Enter number:"<<endl;
		cin>>number;
		sum = sum + number;
		average= sum/10;
	}
	cout<<"Total sum is:"<<sum<<endl;
	cout<<"Average of above is:"<<average<<endl;
	return 0;
}
