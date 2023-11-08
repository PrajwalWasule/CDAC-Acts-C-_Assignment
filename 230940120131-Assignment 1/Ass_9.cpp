#include <iostream>
using namespace std;
int main(){ cout<<"\n Given a positive integer N, check if it is a perfect number or not. \n enter a number :- ";
	int n;
	cin>>n;
	int i=1;
	int fac=0;
	while(i<=n/2){
		if(n%i==0){
			fac+=i;
		}
		i++;
	}
//	cout<<fac<<endl;
	if(fac==n)cout<<"perferct number";
	else cout<<"not perfect number";
	
	return 0;
}
