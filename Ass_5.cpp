#include<iostream>
using namespace std;
int main()
{
    int n,digit,i;
    do{
        cout<<"enter  +ve number:-";
        cin>>n;
    } while (n<0);


for(int i=n;i!=0;n=n/10){
if(n<10){
	
    cout<<"\n1st digit:-"<<n;
    break;
}
}

   return 0;
}
