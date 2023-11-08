#include <iostream>
#include <math.h>
using namespace std;
int main(){ cout<<"\n Given a positive integer N, check if it is an armstrong number or not\n enter a number :- ";
	int n;
	cin>>n;
	int a=n;
	int count=0;
	while(n!=0){
		count++;
		n=n/10;
	}

	int i=0;
	int arm=0;
	while(i<count){
		arm+=pow(a%10,count);
		i++;
		a=a/10;
		
	}	
	cout<<arm;
	return 0;
}
