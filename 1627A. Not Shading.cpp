#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,m,r,c;
      cin>>n>>m>>r>>c;
      char mat[n][m];
      int cnt=0;
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<m;j++)
          {cin>>mat[i][j];
          if(mat[i][j]=='B')
          cnt++;
          }
      }
      r=r-1;
      c=c-1;
      if(cnt==0)
      {
          cout<<"-1"<<endl;
      }
       else if(mat[r][c]=='B')
          cout<<"0"<<endl;
      else
      {
              bool ok=false;
              for(int j=0;j<m;j++)
              {
                  if(mat[r][j]=='B')
                  {
                      cout<<"1"<<endl;
                      ok=true;
                      break;
                  }
              }
              if(!ok)
              {
                  for(int i=0;i<n;i++)
                  {
                       if(mat[i][c]=='B')
                  {
                      cout<<"1"<<endl;
                      ok=true;
                      break;
                  }
                  }
              }
              if(!ok)
              {
                  cout<<"2"<<endl;
              }

      }


    }
    return 0;
}
