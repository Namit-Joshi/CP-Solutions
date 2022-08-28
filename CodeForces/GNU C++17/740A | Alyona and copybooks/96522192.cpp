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
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
 
    if(n%4==0)
    {
        cout<<0<<endl;
        return;
    }
 
    if(n%4==1)
    {
        cout<<min(b+a,min(3*a,c))<<endl;
        return;
    }
 
    if(n%4==2)
    {
        cout<<min(min(b,2*c),2*a)<<endl;
        return;
    }
 
    if(n%4==3)
    {
        cout<<min(min(a,3*c),c+b)<<endl;
        return;
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