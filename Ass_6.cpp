#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,i;

 cout<<"enter- number:-";
        cin>>n;

  for(;n!=0;n=n/10){
  	i=n%10;
        sum+=i;
  }

    cout<<"\nsum of digit is :-"<<sum;
    return 0;
}
