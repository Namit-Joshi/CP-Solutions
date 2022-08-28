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
 
 int mp[1000001] = {0}, s[1000001] = {0}, f[1000001] = {0};
 
 // for(int i=0;i<1000001;i++)
 // {
 //  mp[i] = 0;
 // }
 
 int c,m = -1;
 
 for(int i=0;i<n;i++)
 {
  cin>>c;
 
  mp[c]++;
 
  m = max(m,mp[c]);
 
  if(mp[c]==1)
  {
   s[c] = i;
   f[c] = i;
  } 
  else
  {
   f[c] = i;
  }
 }
 
 int diff = INT_MAX;
 int l = 0,r = 0;
 
 for(int i=0;i<1000001;i++)
 {
  if(mp[i] == m)
  {
   if(f[i] - s[i] < diff)
   {
    r = f[i];
    l = s[i];
 
    diff = f[i] - s[i];
   }
  }
 }
 
 cout<<l+1<<" "<<r+1<<endl;
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