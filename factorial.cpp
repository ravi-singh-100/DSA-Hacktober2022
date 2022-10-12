#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,fact=1;
    cout<<"enter the number to get factorial :";
    cin>>n;
    if(n>0){
        for(int i=2;i<=n;i++)
        {
            fact=fact*i;
        }
    }
        cout<<"factorial is:"<<fact;
        return 0;
    
}