#include <iostream>
using namespace std;
int main(){ cout<<"\n Find the count of a digit in a given positive integer.\n enter a number :- ";
	int n;
	cin>>n;
	int digit;
	cin>>digit;
	int count=0;
	while(n!=0){
		if(n%10==digit) count++;
		n/=10;
		
	}
	cout<<count;
	return 0;
}
