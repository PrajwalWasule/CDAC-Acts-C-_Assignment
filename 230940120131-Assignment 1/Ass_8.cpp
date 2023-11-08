#include <iostream>
using namespace std;
int main(){ cout<<"\n Find the product of all digit of a positive integer.\n enter a number :- ";
	int n;
	cin>>n;
	int sum=1;
   while(n!=0){
   	sum*=n%10;
		n=n/10;
	}
	cout<<sum;
	return 0;
}
