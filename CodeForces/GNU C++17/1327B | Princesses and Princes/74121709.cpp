#include <bits/stdc++.h>
using namespace std;
 
typedef double db;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef complex<double> com;
 
#define endl '\n'
#define eb emplace_back
#define pb push_back
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define unique_sort(x) (sort(x.begin(), x.end()), x.resize(distance(x.begin(), unique(x.begin(), x.end()))))
#define fast_io() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
void test()
{
 int n,k,a,pos=-1;
 cin>>n;
 vector<int> v[n];
 set<int> s;
 for(int i=0;i<n;i++)
 {
     cin>>k;
     for(int j=0;j<k;j++)
     {
         cin>>a;
         v[i].pb(a);
     }
 }
 for(int i=0;i<n;i++)
 {
     int fg=1;
     if(v[i].empty())
     {
         pos=i+1;
         continue;
     }
     for (auto it = v[i].begin();it != v[i].end(); it++)
     {
             if(!s.count(*it))
             {
             fg=0;     
             s.emplace(*it);
             break;
             }
             else 
             continue;
         }
         if(fg==1)
         {
             pos=i+1;
         }
     }
     
     if(pos==-1)
     {
         cout<<"OPTIMAL"<<endl;
         return;
     }
     else
     {
         for(int i=1;i<=n;i++)
     {
         if(!s.count(i))
         {
             cout<<"IMPROVE"<<endl;
             cout<<pos<<" "<<i<<endl;
             return;
         }
     }
     }
}
 
int main()
{   
fast_io();
cout << fixed << setprecision(15);
int t = 1;
 
cin>>t;
 
for(int i = 0; i < t; i++)
{
 test();
}
return 0;
}