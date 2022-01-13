

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
        int n;
        cin>>n;
        vector<int>v(n);
        map<int,vector<int>>m;
        set<int>st;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(st.find(v[i])==st.end())
            {
                st.insert(v[i]);
                m[v[i]].push_back(i);
            }
            else
            {
               m[v[i]].push_back(i);
            }
        }
        int maxx=-1;
        for(auto it:m)
        {
            if(it.second.size()==1)
            continue;
            else
            {
                for(int i=0;i<it.second.size()-1;i++)
                {
                int x=it.second[i];
                int y=it.second[i+1];
                int start=y-x+1;
                int len=n-start+1;
                maxx=max(maxx,len);
                }

            }
        }
        cout<<maxx<<endl;

    }

    return 0;
}
