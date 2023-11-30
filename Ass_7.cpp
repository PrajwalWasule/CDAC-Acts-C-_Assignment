#include<iostream>
using namespace std;
int main()
{
    int n,product=1,i;

 cout<<"enter- number:-";
        cin>>n;
        if(n==0) product=0;

for(;n!=0;n=n/10){
     i=n%10;
        n=n/10;
        product*=i;
   	
}

    cout<<"\nproduct of digit is :-"<<product;
    return 0;
}
