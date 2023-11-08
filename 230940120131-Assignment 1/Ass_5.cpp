#include <iostream>
using namespace std;
int main(){ cout<<"\n Find the first digit in a positive integer.";
	int n;
	cout<<"\n enter a num :- ";
	cin>>n;
   while(n>10){
		n=n/10;
	}
	cout<<n;
	return 0;
}
