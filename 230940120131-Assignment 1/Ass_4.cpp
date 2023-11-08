#include <iostream>
using namespace std;
int main(){ cout<<"\n Find prime numbers between two positive integers N and M, including N and M";
	int n;
	int m;
	cout<<"\n enter 1st num :- ";
	cin>>n;
	cout<<"\n enter 2nd num ";
	cin>>m;
	for(int i=n;i<=m;i++){
		bool flag=true;
		for(int j=2;j<=i/2;j++){
			if(i%j==0) flag=false;
		}
		if(flag) cout<<i;
	}
	return 0;
	
}
