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
#define dbg(x) cout << #x << " = " << x << '\n'
#define dbg2(x,y) cout<<#x<<" = "<<x<<" & "<<#y<<" = "<<y<<endl;
 
void test()
{
 int n,k;
 
 vector<int> v;
 
 cin>>n>>k;
 
 if(k>=n)
 {
  cout<<1<<endl;
  return;
 }
 
 for(int i=1;i<=sqrt(n);i++)
 {
  if(n%i==0)
  {
   v.pb(i);
   v.pb(n/i);
  }
 }
 
 sort(v.rbegin(),v.rend());
 
 // for(int x:v)
 // {
 //  cout<<x<<" ";
 // }
 // cout<<endl<<endl;
 
 for(int i=0;i<v.size();i++)
 {
  if(v[i]<=k)
  {
   cout<<n/v[i]<<endl;
   return;
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