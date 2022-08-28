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
 string s,a;
 
 cin>>s>>a;
 
 int c = 0;
 int ap = 0,n = 0;
 
 for(int i=0;i<s.size();i++)
 {
  if(s[i]=='+')
   c++;
  else
   c--;
 }
 
 for(int i=0;i<a.size();i++)
 {
  if(a[i]=='+')
  {
   ap++;
  }
  else if(a[i]=='-')
  {
   ap--;
  }
  else
  {
   n++;
  }
 }
 
 double ans = 1;
 
 if(abs(c-ap)>n)
 {
  ans = 0;
  cout<<ans<<endl;
  return;
 }
 
 int s1 = abs(c - ap) + (n - abs(c-ap))/2;
 int s2 = (n - abs(c-ap))/2;
 
 int f1 = 1, f2 = 1;
 
 for(int i=1;i<=s1;i++)
 {
  f1 *= i;
 }
 
 for(int i=1;i<=s2;i++)
 {
  f2 *= i;
 }
 
 for(int i=1;i<=n;i++)
 {
  ans*=i;
 }
 
 for(int i=0;i<n;i++)
 {
  ans/=2;
 }
 
 ans/=f1;
 ans/=f2;
 
 cout<<ans<<endl;
}
 
int main()
{   
fast_io();
cout << fixed << setprecision(15);
int t = 1;
 
//cin>>t;
 
for(int i = 0; i < t; i++)
{
 test();
}
return 0;
}