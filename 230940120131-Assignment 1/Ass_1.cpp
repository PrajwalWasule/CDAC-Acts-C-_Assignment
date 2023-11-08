#include <iostream>
using namespace std;
int main(){	cout<<"\n Given a positive integer N, find all factors of N.\n enter a number :- ";
	int n;
	cin>>n;
	int i=1;
	
	while(i<=n/2){
		if(n%i==0)cout<<i<<" ";
		i++;
	}
	cout<<n;
	return 0;
}
