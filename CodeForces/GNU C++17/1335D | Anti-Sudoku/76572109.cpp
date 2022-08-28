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
 char a[9][9];
 
 for(int i=0;i<9;i++)
 {
  for(int j=0;j<9;j++)
  {
   cin>>a[i][j];
  }
 }
 
 // for(int i=0;i<9;i++)
 // {
 //  for(int j=0;j<9;j++)
 //  {
 //   cout<<a[i][j];
 //  }
 //  cout<<endl;
 // }
 a[0][0]=a[0][1];
 a[1][3]=a[1][4];
 a[2][6]=a[2][7];
 a[3][4]=a[3][5];
 a[4][1]=a[4][2];
 a[5][7]=a[5][8];
 a[6][8]=a[6][7];
 a[7][5]=a[7][4];
 a[8][2]=a[8][1];
 
 for(int i=0;i<9;i++)
 {
  for(int j=0;j<9;j++)
  {
   cout<<a[i][j];
  }
  cout<<endl;
 }
 
 cout<<endl;
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