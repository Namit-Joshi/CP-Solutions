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
 int n;
 cin>>n;
 
 int a[n];
 
 int ans=1,ex=0;
 
 map<int,int> mp;
 
 for(int i=0;i<n;i++)
 {
  cin>>a[i];
  mp[a[i]]++;
 }
 
 // for(auto x:mp)
 // {
 //  cout<<x.first<<" "<<x.second<<endl;
 // }
 
 for(auto x:mp)
 {
  x.second+=ex;
  ex=0;
 
  if(x.second + ans-1 >= x.first)
  {
   ans+=x.second;
   ex=0;
   //cout<<"@";
  }
  else
  {
   ex+=x.second;
  }
 
  // cout<<x.second<<" ";
 }
 
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