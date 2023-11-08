#include <iostream>
using namespace std;
int main(){ cout<<"\n Find sum of all numbers between two positive integers N and M, including N and M. ";
	int n;
	int m;
	cout<<"\n enter 1st num :- ";
	cin>>n;
	cout<<"\n enter 2nd num ";
	cin>>m;
	int i=1;
	int sum=n+m;
	n++;m--;
	while(n<=m){
		sum+=n+m;
		n++;m--;
	}
	cout<<sum;
	return 0;
}
