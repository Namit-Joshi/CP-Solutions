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
 int n,x;
 cin>>n>>x;
 int a[n],b[202];
 
 for(int i=0;i<202;i++)
  b[i]=0;
 
 
 for(int i=0;i<n;i++)
 {
  cin>>a[i];
 
  b[a[i]]=1;
 
 }
 int j=1;
 while(x>0)
 {
  if(b[j]==0)
  {
   b[j]=1;
   x--;
  }
  j++;
 }
 
 j--;
 
 while(b[j]!=0)
  j++;
 
  j--;
 
 cout<<j<<endl;
 
 
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