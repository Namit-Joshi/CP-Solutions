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
 
#define MOD 1000000007
#define PI 3.14159265359
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
 ll a,b,x,m,n,y,ans=0;
 cin>>a>>b;
 
 if(a==b)
 {
  cout<<0<<endl;
  return;
 }
 
 m=max(a,b);
 n=min(a,b);
 
 a=n;
 b=m;
 
 x= b%a;
 y=b/a;
 
 if(x!=0)
 {
  cout<<-1<<endl;
  return;
 }
  while(y%8==0)
  {
   ans++;
   y=y/8;
  }
  while(y%4==0)
  {
   ans++;
   y=y/4;
  }
  while(y%2==0)
  {
   ans++;;
   y=y/2;
  }
 
  if(y==1)
  {
   cout<<ans<<endl;
   return;
  }
 
  cout<<-1<<endl;
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