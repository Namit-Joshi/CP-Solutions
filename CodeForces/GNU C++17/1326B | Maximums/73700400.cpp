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
 
void test()
{
 int n;
 cin>>n;
 ll b[n];
 ll a[n];
 for(int i=0;i<n;i++)
 {
     cin>>b[i];
 }
 ll v[n];
 v[0]=0;
 for(auto i=0;i<n;i++)
 {
     a[i]=v[i]+b[i];
     v[i+1]=max(a[i],v[i]);
 }
 for(int i=0;i<n;i++)
 {
     cout<<a[i]<<" ";
 }
 cout<<endl;
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