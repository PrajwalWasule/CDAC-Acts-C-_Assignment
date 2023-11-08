#include <iostream>
using namespace std;
int main(){ cout<<"\n Find the sum of all digit of a integer (both positive and negative).\n enter a number :- ";
	int n;
	cin>>n;
	int sum=0;
   while(n!=0){
   	if(n%10<0) sum+=-n%10;
   	else sum+=n%10;
	n=n/10;
	}
	cout<<sum;
	return 0;
}
