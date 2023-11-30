#include<iostream>
using namespace std;
int main()
{
    int n,m,sum=0,i,j,k,prime=1;
    do{
        cout<<"enter 2 +ve number:-";
        cin>>n>>m;
    } while (n<0||m<0);

    if(n<m)
   { i=n;
   j=m;}
    else
    {i=m; j=n;}
 cout<<"\nprime numbers are:- ";
 
 for(;i<=j;i++){
 	
 	 k=2;prime=1;
    for(;k<=i/2;k++){
    	if(i%k==0)
        {prime=0;
        break;
        }
	}

    if(prime==1) cout<<i<<" ";
 }

return 0;
}
