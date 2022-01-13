/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int gcd(int a,int b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,l;
        cin>>n>>l;
        vector<int>x(l+1,0);
        vector<int>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        for(int i=0;i<=l;i++)
        {
             int p=1<<i;
            for(int j=0;j<n;j++)
            {
                if(v[j]&p)
                x[i]++;
            }
        }
        int r=(n+1)/2;
        int j=0;
        long int num=0;
        string s="";
        for(int i=0;i<x.size();i++)
        {
            if(x[i]>=r)
            {
               num+=1*pow(2,j);
            }
            j++;
        }

        cout<<num<<endl;
    }

    return 0;
}
