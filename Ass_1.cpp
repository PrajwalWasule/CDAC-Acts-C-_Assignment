#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    do{
        cout<<"enter a +ve number:-";
        cin>>n;

    } while(n<=0);

for(int i=1;i<=n;i++){
	if(n%i==0)
        cout<<i<<" ";
        i++;
}

    return 0;
    
}
