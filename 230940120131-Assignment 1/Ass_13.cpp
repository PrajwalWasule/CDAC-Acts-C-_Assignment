#include <iostream>
using namespace std;
void words(int n){
	switch(n){
		case 1:
			cout<<"one";
			break;
		case 2:
			cout<<"two";
			break;
		case 3:
			cout<<"three";
			break;
		case 4:
			cout<<"four";
			break;
		case 5:
			cout<<"five";
			break;
		case 6:
			cout<<"six";
			break;
		case 7:
			cout<<"seven";
			break;
		case 8:
			cout<<"eight";
			break;
		case 9:
			cout<<"nine";
			break;
	}
}
int main(){ cout<<"\n Given a positive integer N, print the digits in the number as words.\n enter a number :- ";
	int n;
	cin>>n;
	int  reversed_number = 0, remainder;


  while(n != 0) {
    remainder = n % 10;
    reversed_number = reversed_number * 10 + remainder;
    n /= 10;
  }
  
while(reversed_number!=0){
	words(reversed_number%10);
	cout<<" ";
	reversed_number/=10;
}

	return 0;
}
