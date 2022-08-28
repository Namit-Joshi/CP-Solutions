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
 ll a,b,c,d,fg=0,f=0;
 cin>>a>>b>>c>>d;
 
 ll x,y,x1,y1,x2,y2;
 cin>>x>>y>>x1>>y1>>x2>>y2;
 
 if((x1==x2 && (a>0||b>0)) || (y1==y2 && (c>0||d>0)))
 {
  cout<<"NO"<<endl;
  return;
 }
 
 if((c>=d && ((c-d)<=(y-y1))))
  {
   fg=1;
  }
 else if((c<d && ((d-c)<=(y2-y))))
  {
   fg=1;
  }
 if((a>=b && ((a-b)<=(x-x1))))
  {
   f=1;
  }
 else if((a<b && (b-a<=(x2-x)))) 
  {
   f=1;
  }
 if(fg==1 && f==1) 
  cout<<"YES"<<endl;
 else 
  cout<<"NO"<<endl;
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