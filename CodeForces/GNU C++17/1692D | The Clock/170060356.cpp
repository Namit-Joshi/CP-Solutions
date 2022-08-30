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
 string s;
 int x;
 
 cin>>s>>x;
 
 set<pair<int,int>> ss;
 
 int h = stoi(s.substr(0,2));
 int m = stoi(s.substr(3,2));
 
 // cout<<h<<" "<<m<<endl;
 
 ss.insert({h,m});
 
 string a,b,sum;
 
 int ans = 0;
 
 while(1)
 {
  m+=x;
 
  if(m>=60)
  {
   h += m/60;
   m = m%60;
  }
 
  if(h>=24)
   h = h%24;
 
  a = to_string(h);
  b = to_string(m);
 
  // cout<<a<<" "<<b<<endl;
 
  if(a.size()==1)
   a = "0" + a;
  if(b.size()==1)
   b = "0" + b;
 
  sum = a+b;
 
  int fg = 1;
 
  for(int i=0,j=3; i<4,j>=0; i++,j--)
  {
   // cout<<sum[i]<<" "<<sum[j]<<endl;
   if(sum[i]!=sum[j])
   {
    fg = 0;
    break;
   }
  }
 
  if(fg)
   ans++;
 
  // cout<<sum<<" "<<h<<" "<<m<<" "<<ans<<endl;
 
  if(ss.count({h,m}))
   break;
 
  ss.insert({h,m});
 }
 
 cout<<ans<<endl;
 
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