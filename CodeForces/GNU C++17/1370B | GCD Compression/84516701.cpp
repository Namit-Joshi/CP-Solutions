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
 int n;
 cin>>n;
 
 vector<int> o,e;
 
 for(int i=0;i<2*n;i++)
 {
  int a;
 
  cin>>a;
 
  if(a%2==0)
   e.pb(i+1);
  else
   o.pb(i+1);
 }
 
 // for(auto x:e)
 //  cout<<x<<" ";
 // cout<<endl;
 // for(auto x:o)
 //  cout<<x<<" ";
 // cout<<endl;
 
 int c = 0;
 
 if(e.size()%2==0 && e.size()!=0)
 {
  for(int i=0;i<e.size()-1;i+=2)
  {
   cout<<e[i]<<" "<<e[i+1]<<endl;
   c++;
 
   if(c==n-1)
    return;
  }
 
  for(int i=0;i<o.size()-1;i+=2)
  {
   cout<<o[i]<<" "<<o[i+1]<<endl;
   c++;
 
   if(c==n-1)
    return;
  }
 }
 
 else if(o.size()%2==0 && o.size()!=0)
 {
  for(int i=0;i<o.size()-1;i+=2)
  {
   cout<<o[i]<<" "<<o[i+1]<<endl;
   c++;
 
   if(c==n-1)
    return;
  }
 
  for(int i=0;i<e.size()-1;i+=2)
  {
   cout<<e[i]<<" "<<e[i+1]<<endl;
   c++;
 
   if(c==n-1)
    return;
  }
 }
 
 else
 {
  o.pop_back();
  e.pop_back();
 
 
   if(o.size()!=0)
  for(int i=0;i<o.size()-1;i+=2)
  {
   cout<<o[i]<<" "<<o[i+1]<<endl;
   c++;
 
   if(c==n-1)
    return;
  }
 
   if(e.size()!=0)
  for(int i=0;i<e.size()-1;i+=2)
  {
   cout<<e[i]<<" "<<e[i+1]<<endl;
   c++;
 
   if(c==n-1)
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