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
 int n,l;
 cin>>n>>l;
 
 int a[n];
 
 for(int i=0;i<n;i++)
 {
  cin>>a[i];
 }
 
 double t1,t2;
 double s1 = 1,s2 = 1;
 double p1 = 0,p2 = l;
 double ans = 0;
 
 for(int i=0,j=n-1;i<=j;)
 {
  t1 = abs(a[i]-p1)/s1;
  t2 = abs(a[j]-p2)/s2;
 
  if(t1<t2)
  {
   p1 = a[i];
   p2 = p2 - (s2*t1);
   i++;
   s1++;
 
   ans+=t1;
  }
  else if(t2<t1)
  {
   p2 = a[j];
   p1 = p1 + s1*t2;
   j--;
   s2++;
   ans+=t2;
  }
  else
  {
   p1 = a[i];
   p2 = a[j];
   s1++;
   s2++;
   i++;
   j--;
   ans+=t1;
  }
 
  // dbg2(p1,p2);
  // dbg(ans);
 }
 // dbg2(p1,p2);
 ans+=abs(p1-p2)/(s1+s2);
 
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