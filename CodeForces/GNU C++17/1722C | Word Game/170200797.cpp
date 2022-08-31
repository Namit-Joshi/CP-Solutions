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
 
 vector<string> a,b,c;
 
 map<string,int> mp;
 
 for(int i=0; i<n; i++)
 {
  cin>>s;
  a.pb(s);
  mp[s]++;
 }
 
 for(int i=0; i<n; i++)
 {
  cin>>s;
  b.pb(s);
  mp[s]++;
 }
 
 for(int i=0; i<n; i++)
 {
  cin>>s;
  c.pb(s);
  mp[s]++;
 }
 
 int s1 = 0,s2 = 0,s3 = 0;
 
 for(auto x:a)
 {
  if(mp[x]==1)
  {
   s1+=3;
  }
  if(mp[x]==2)
  {
   s1+=1;
  }
 }
 
 for(auto x:b)
 {
  if(mp[x]==1)
  {
   s2+=3;
  }
  if(mp[x]==2)
  {
   s2+=1;
  }
 }
 
 for(auto x:c)
 {
  if(mp[x]==1)
  {
   s3+=3;
  }
  if(mp[x]==2)
  {
   s3+=1;
  }
 }
 
 cout<<s1<<" "<<s2<<" "<<s3<<endl;
 
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