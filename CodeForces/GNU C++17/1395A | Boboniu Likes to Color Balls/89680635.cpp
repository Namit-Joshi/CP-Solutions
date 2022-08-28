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
 ll r,g,b,w,c=0;
 cin>>r>>g>>b>>w;
 
 ll rd = min(min(r,g),b);
 
 if(rd==0)
 {
  if(r%2!=0)
   c++;
  if(g%2!=0)
   c++;
  if(b%2!=0)
   c++;
  if(w%2!=0)
   c++;
 
  if(c>1)
  {
   cout<<"No"<<endl;
   return;
  }
  else
  {
   cout<<"Yes"<<endl;
   return;
  }
 }
 
 c=0;
 ll d=0;
 
  if(r%2!=0)
   c++;
  else
   d++;
  if(g%2!=0)
   c++;
  else
   d++;
  if(b%2!=0)
   c++;
  else
   d++;
  if(w%2!=0)
   c++;
  else
   d++;
 
  // cout<<c<<" "<<d<<endl;
 
  if(c<=1 || d<=1)
  {
   cout<<"Yes"<<endl;
   return;
  }
  else
  {
   cout<<"No"<<endl;
   return;
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