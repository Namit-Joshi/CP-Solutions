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
 
 int a[n];
 
 for(int i=0;i<n;i++)
 {
  cin>>a[i];
 }
 
//  for(int i=0;i<n-1;i++)
//  {
//      for(int j=i+1;j<n;j++)
//      {
//          mp[a[i]+a[j]]++;
//      }
//  }
    sort(a,a+n);
    int ans = 2*a[0];
   
 int sol = 0,f = 0;
 
 while(ans<=2*a[n-1])
 {
     sol=0;
     int b[n];
     
     for(int k=0;k<n;k++)
     b[k] = a[k];
     
     for(int i=0;i<n-1;i++)
     {
         for(int j=i+1;j<n;j++)
         {
             if(b[i]+b[j]==ans)
             {
                 sol++;
                 b[i]=-200;
                 b[j]=-200;
             }
         }
     }
    // cout<<ans<<" "<<sol<<endl;
     f = max(f,sol);
      
      ans++;
 }
 
 cout<<f<<endl;
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