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
 ll n,k,sum=0; 
    cin>>n>>k;     
    
   
    string s(n, 'a');   
    for(int i=1;i<n;i++)
    { 
     sum=sum+i;
     if(k<=sum)
     {
      s[i]='b';
    s[abs(sum-k-i)-1]='b';
      break;
     }
     
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
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