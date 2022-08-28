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
 
const long long MAX_SIZE = 10000005;
 
vector<long long>isprime(MAX_SIZE , true); 
vector<long long>prime; 
vector<long long>SPF(MAX_SIZE);
 
void manipulated_seive(int N) 
{  
 N=N+1;
    isprime[0] = isprime[1] = false ; 
 
    for (long long int i=2; i<N ; i++) 
    { 
        if (isprime[i]) 
        {  
            prime.push_back(i); 
            SPF[i] = i; 
        } 
  
        for (long long int j=0; j < (int)prime.size() && i*prime[j] < N && prime[j] <= SPF[i]; j++) 
        { 
            isprime[i*prime[j]]=false; 
            SPF[i*prime[j]] = prime[j] ; 
        } 
    } 
} 
void test()
{
 ll n,d1,d2;
 vector<pair<ll,ll>> v;
 
 cin>>n;
 
 manipulated_seive(MAX_SIZE);
 
 for(ll i=0;i<n;i++)
 {
  int a;
  d1 = d2 = 1;
  cin>>a;
 
  // for(ll l=0;l<prime.size() && prime[l]<=a;l++)
  // {
  //  cout<<prime[l]<<" ";
  // }
  // cout<<endl;
 
  d1 = SPF[a];
  
  int x = a;
 
  while(x%d1==0)
  {
   x=x/d1;
  }
 
  d2 = x;
  
 
  if(d1>1 && d2>1 && __gcd(d1,d2)==1)
   v.pb({d1,d2});
  else
   v.pb({-1,-1});
  
    }
 
 for(auto x:v)
 {
  cout<<x.F<<" ";
 }
 cout<<endl;
 for(auto x:v)
 {
  cout<<x.S<<" ";
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