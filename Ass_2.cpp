#include<iostream>
using namespace std;
int main()
{
    int n,i=1,digit,rev_num=0;

    do{
        cout<<"enter +ve number:-";
        cin>>n;

    } while(n<=0);

  for(;n!=0;n%10){
  	
        digit=n%10;
        n=n/10;
        rev_num=rev_num*10+digit;
  }
 
    cout<<"\nrevrse number:-"<<rev_num;
    return 0;
}
