#include<bits/stdc++.h>
using namespace std;
bool greater(int a,int b)
{
    if(b>a)
    {return true;}
    else{
        return false;
    }
}
int main()
{
    int b,n,m;
    cin>>b>>n>>m;
    vector<int> k(n);
    vector<int> d(m);
    for(int i=0;i<n;i++)
    {
        cin>>k[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>d[i];
    }
    sort(k.rbegin(),k.rend());
    sort(d.rbegin(),d.rend());
    int l=-1;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           if(k[i]+d[j]<=b)
           {
               if(k[i]+d[j]>l)
                 l=k[i]+d[j];
           }
       }
   }
   
    cout<<l;

}
