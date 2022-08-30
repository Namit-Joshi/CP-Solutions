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
 
 map<int,int> mp,m,x;
 
 for(int i=0; i<n; i++)
 {
  cin>>a[i];
 
  mp[a[i]%10]++;
 }
 
 int fg = 0;
 
 for(auto i:mp)
 {
  m = mp;
 
  if(m[i.F]>0)
   m[i.F]--;
  else if(m[i.F]==0) 
   continue;
  else
   m[i.F]=0;
 
  for(auto j:m)
  {
   x = m;
 
   if(x[j.F]>0)
    x[j.F]--;
   else if(x[j.F]==0)
    continue;
   else
    x[j.F]=0;
 
   // cout<<i.F<<" "<<j.F<<" "<<3-(i.F + j.F)<<" "<<endl;
   // cout<<i.F<<" "<<j.F<<" "<<13-(i.F + j.F)<<endl;
   // cout<<i.F<<" "<<j.F<<" "<<23-(i.F + j.F)<<endl;
 
 
   if((i.F + j.F)<=3 && x[3-(i.F + j.F)])
   {
    fg = 1;
    // cout<<i.F<<" "<<j.F<<" "<<3-(i.F + j.F)<<endl;
    break;
   }
   if((i.F + j.F)>3 && (i.F + j.F)<=13 && x[13-(i.F + j.F)])
   {
    fg = 1;
    // cout<<i.F<<" "<<j.F<<" "<<13-(i.F + j.F)<<endl;
    break;
   }
   if((i.F + j.F)>13 && x[23-(i.F + j.F)])
   {
    fg = 1;
    // cout<<i.F<<" "<<j.F<<" "<<23-(i.F + j.F)<<endl;
    break;
   }
 
  }
 }
 
 if(fg)
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