#include<iostream>
using namespace std;
int main()
{
    int n,m,sum=0,i,j;
    do{
        cout<<"enter 2 +ve number:-";
        cin>>n>>m;
    } while (n<0||m<0);

    if(n<m)
   { i=n;
   j=m;}
    else
    {i=m; j=n;}
    

	


    for(;i<=j;i++)
    {
        sum+=i;
        
    }
    cout<<"\nsum is :-"<<sum;
    return 0;
}
