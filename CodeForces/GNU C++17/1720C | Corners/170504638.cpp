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
 int n,m;
 cin>>n>>m;
 
 int a[n+1][m+1] = {};
 
 for(int i=0; i<=m; i++)
 {
  a[n][i] = 1;
 }
 
 for(int i=0; i<=n; i++)
 {
  a[i][m] = 1;
 }
 
 int one = 0;
 char ch;
 
 for(int i=0; i<n; i++)
 {
  for(int j=0; j<m; j++)
  {
   cin>>ch;
   
   if(ch=='1')
    a[i][j] = 1;
   else
    a[i][j] = 0;
 
   if(a[i][j]==1)
    one++;
  }
 }
 
 // for(int i=0; i<n; i++)
 // {
 //  for(int j=0; j<n; j++)
 //  {
 //   cout<<a[i][j]<<" ";
 //  }
 //  cout<<endl;
 // }
 
 // cout<<endl;
 
 // cout<<one<<endl;
 
 int fg = 0;
 
 for(int i=0; i<n; i++)
 {
  for(int j=0; j<m; j++)
  {
   if(a[i][j]==0)
   {
     if(a[i+1][j]==0 || a[i][j+1]==0 || a[i+1][j+1]==0 || (i && a[i-1][j+1]==0))
     {
      fg = 1;
      break;
     }
   }
  }
 
  if(fg==1)
   break;
 }
 
 if(fg==1)
 {
  cout<<one<<endl;
  return;
 }
 
 if(one==m*n)
 {
  cout<<one-2<<endl;
  return;
 }
 
 cout<<one-1<<endl;
 
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