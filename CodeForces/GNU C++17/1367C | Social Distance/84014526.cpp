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
 int n,k;
 cin>>n>>k;
 
 string s;
 cin>>s;
 
 vector<int> v;
 
 for(int i=0;i<n;i++)
 {
  if(s[i]=='1')
  {
   v.pb(i);
  }
 }
 
 if(v.size()==0)
 {
   int c=0;
   for(int i=0;i<n;i+=k+1)
   {
    c++;
   }
 
   cout<<c<<endl;
   return;
 }
 
 int ans = 0;
 
 ans+=v[0]/(k+1);
 
 for(int i=1;i<v.size();i++)
 {
  if(v[i]-v[i-1]>=k)
  {
   ans+=(v[i]-v[i-1]-1-k)/(k+1);
  }
 }
 
 if((n-1)-v[v.size()-1]>=k)
 {
  ans+=((n-1)-v[v.size()-1])/(k+1);
 }
 
 cout<<ans<<endl;
 return;
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