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
 int n,a;
 cin>>n;
 
 vector<int> v;
 
 for(int i=0;i<n;i++)
 {
  cin>>a;
  v.pb(a);
 }
 
 int mn = *min_element(v.begin(),v.end());
 
 int mx = *max_element(v.begin(),v.end());
 
 for(int i=0;i<n;i++)
 {
  if(v[i]==mx)
  {
   mx = i;
   break;
  }
 }
 
 for(int i=mx;i>0;i--)
 {
  swap(v[i],v[i-1]);
 }
 
 int mnn = -1;
 
 for(int i=0;i<n;i++)
 {
  if(v[i]==mn)
  {
   mnn = i;
  }
 }
 
 cout<<mx + (n-1 - mnn);
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