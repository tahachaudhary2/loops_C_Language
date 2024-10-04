#include <iostream>
using namespace std;
int main(){
	int number, average, sum, i;
	do
	{
	cout<<"Enter number:"<<endl;
	cin>>number;
	sum = sum + number;
	average= sum/10;
	i++;
}   while (i<=10);
	cout<<"Total sum is:"<<sum<<endl;
	cout<<"Average of above is:"<<average<<endl;
	return 0;
}
