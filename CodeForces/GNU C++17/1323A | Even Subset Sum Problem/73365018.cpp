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
 int n,fg=0,pos;
 cin>>n;
 int a[n];
 vector<int> v;
 for (int i = 1; i <=n; ++i)
 {
  cin>>a[i];
  if(a[i]%2==0)
   { 
    fg=1;
    pos=i;
   }
   else
   {
    v.pb(i);
   }
 }
 if(fg==1)
 {
   cout<<1<<endl;
   cout<<pos<<endl;
   return;
 }
 if(v.size()>=2)
 {
  cout<<2<<endl;
  for(auto i=v.begin(); i<v.begin()+2; i++)
  {
   cout<<*i<<" ";
  }
  cout<<endl;
 }
 else
  cout<<-1<<endl;
 
}
 
int main()
{   
fast_io();
int t = 1;
 
cin>>t;
 
for(int i = 0; i < t; i++)
{
 test();
}
return 0;
}