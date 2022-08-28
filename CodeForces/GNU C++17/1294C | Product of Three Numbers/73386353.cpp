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
 long long int n;
 cin>>n;
 set<int> check;
 
 for (int i = 2; i*i <= n; ++i)
  {
   if(n%i==0 && !check.count(i))
   {
    check.insert(i);
    n=n/i;
    break;
   }
  } 
 for (int i = 2; i*i <= n; ++i)
  {
   if(n%i==0 && !check.count(i))
   {
    check.insert(i);
    n=n/i;
    break;
   }
  } 
 if(check.size()<2 || check.count(n) || n==1)
 {
  cout<<"NO"<<endl;
 } 
 else
 {
  cout<<"YES"<<endl;
  check.insert(n);
  for(auto it:check)
  {
   cout<<it<<" ";
  }
  cout<<endl;
 }
 
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