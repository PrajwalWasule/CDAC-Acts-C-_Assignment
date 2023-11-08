#include <iostream>
using namespace std;
int main(){ cout<<"\n Given a positive integer N, find its reverse \n enter a number :- ";
		int n;
	cin>>n;
	int reversed_number = 0, remainder;


  while(n != 0) {
    remainder = n % 10;
    reversed_number = reversed_number * 10 + remainder;
    n /= 10;
  }
  
  cout<<reversed_number;
	return 0;
}
