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
 
 set<int> s;
 
 for(int i=0;i<n;i++)
 {
  cin>>a;
  s.insert(a);
 }
 
 set<int> s2 = s;
 
 for(int k=1;k<=1024;k++)
 {
  int fg=0;
 
 for(auto x:s)
 {
  x = x ^ k;
 
  if(!s2.count(x))
  {
   fg=1;
   break;
  }
 
 }
 
 if(fg==0)
 {
  cout<<k<<endl;
  return;
 }
  s=s2;
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