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
 int n,fg=0,c=0,suma=0,sumb=0;
 cin>>n;
 
 int ar[n],a=0,b=0;
 
 for(int i=0;i<n;i++)
 {
  cin>>ar[i];
 }
 
 a=ar[0];
 suma+=ar[0];
 c++;
 
 int i=1,j=n-1;
 
 while(i<=j)
 {
 if(fg==0)
 {b=0;
  while(b<=a)
  {
  b+=ar[j];
  j--;
  if(j<i)
  break;
  }
  sumb+=b;
 
  fg=1;
  c++;
 }
 else
 {a=0;
  while(a<=b)
  {
  a+=ar[i];
  i++;
  if(i>j)
  break; 
  } 
  suma+=a;
 
  fg=0;
  c++;
 }
 }
 
 cout<<c<<" "<<suma<<" "<<sumb<<endl;
 
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