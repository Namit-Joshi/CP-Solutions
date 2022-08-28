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
 int n,fg=0;
 cin>>n;
 
 string s,ans1,ans2;
 cin>>s;
 
 for(int i=0;i<n-1;i++)
 {
  if(s[i]=='1' && s[i+1]=='0')
   fg=1;
 }
 
 if(fg==0)
 {
  cout<<s<<endl;
  return;
 }
 
 for(int i=0;i<n-1;i++)
 {
  if(s[i]=='1')
   break;
 
  if(s[i]=='0')
   ans1+='0';
 }
 
 for(int i=n-1;i>=0;i--)
 {
  if(s[i]=='0')
   break;
 
  if(s[i]=='1')
   ans2+='1';
 }
 
 cout<<ans1+"0"+ans2<<endl;
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