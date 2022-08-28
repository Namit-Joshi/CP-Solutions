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
 
    set<int> s;
 
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
 
        s.insert(a[i]);
    }
 
    if(s.size()==1)
    {
        cout<<"NO"<<endl;
        return;
    }
 
    vector<pair<int,int>> v;
    vector<int> b;
 
    int p;
 
    for(int i=1;i<n;i++)
    {
        if(a[i]!=a[0])
        {
            v.pb(make_pair(1,i+1));
            p = i;
        }
        else
        {
            b.pb(i);
        }
    }
 
    for(auto x:b)
    {
        v.pb(make_pair(x+1,p+1));
    }
 
    cout<<"YES"<<endl;
 
    for(auto x:v)
    {
        cout<<x.F<<" "<<x.S<<endl;
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