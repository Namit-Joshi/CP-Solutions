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
 int a[3][3];
 
 int r[3],k=0;
 
 for(int i=0;i<3;i++)
 {
  int sum = 0;
 
  for(int j=0;j<3;j++)
  {
   cin>>a[i][j];
   sum += a[i][j];
  }
 
  r[k] = sum;
  k++;
 }
 
 a[0][0] = (r[1] + r[2] - r[0])/2;
 
 a[1][1] = (r[0] + r[2] - r[1])/2;
 
 a[2][2] = (r[0] + r[1] - r[2])/2;
 
 for(int i=0;i<3;i++)
 {
  for(int j=0;j<3;j++)
  {
   cout<<a[i][j]<<" ";
  }
  cout<<endl;
 }
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