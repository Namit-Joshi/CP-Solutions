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
 
    int a[n],b[n],c[n];
 
    int p[n];
 
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
 
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
 
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
 
    p[0] = a[0];
 
    for(int i=1;i<n;i++)
    {
        if(a[i]!=p[i-1])
            p[i] = a[i];
        else if(b[i]!=p[i-1])
            p[i] = b[i];
        else
            p[i] = c[i];
    }
 
    if(p[n-1]==p[0])
    {
        if(a[n-1]!=p[n-2] && a[n-1]!=p[0])
            p[n-1] = a[n-1];
 
        if(b[n-1]!=p[n-2] && b[n-1]!=p[0])
             p[n-1] = b[n-1];
 
        if(c[n-1]!=p[n-2] && c[n-1]!=p[0])
            p[n-1] = c[n-1];
    }
 
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
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