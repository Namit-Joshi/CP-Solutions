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
 
 string s;
 cin>>s;
 
 int l[n],r[n];
 
 vector<ll> v;
 
 ll ans = 0;
 
 for(int i=0; i<n; i++)
 {
  l[i] = i;
  r[i] = n-1-i;
 }
 
 for(int i=0; i<n; i++)
 {
  if(s[i]=='L')
   ans+= l[i];
  else
   ans+= r[i];
 }
 
 for(int i=0; i<n; i++)
 {
  if(s[i]=='L')
  {
   if(r[i]>l[i])
    v.pb(r[i]-l[i]);
  }
 
  if(s[i]=='R')
  {
   if(l[i]>r[i])
    v.pb(l[i]-r[i]);
  }
 }
 
 sort(v.begin(),v.end(),greater<ll>());
 
 for(int i=0;i<n;i++)
 {
  if(i>=v.size())
   cout<<ans<<" ";
  else
  {
   ans = ans + v[i];
   cout<<ans<<" ";
  }
 }
 cout<<endl;
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