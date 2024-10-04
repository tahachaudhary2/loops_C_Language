#include <iostream>
using namespace std;
int main(){
	int number, average, sum=0, i=0;
	while (i<10)
	{
	cout<<"Enter number:"<<endl;
	cin>>number;
	sum = sum + number;
	average= sum/10;
	i++;
}  
	cout<<"Total sum is:"<<sum<<endl;
	cout<<"Average of above is:"<<average<<endl;
	return 0;
}
