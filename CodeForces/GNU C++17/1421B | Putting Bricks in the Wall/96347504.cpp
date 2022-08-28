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
 
    char a[n][n];
 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            char x;
            cin>>x;
 
            a[i][j] = x;
        }
    }
 
    vector<pair<int,int>> v;
 
    int z=0,o=0,ans=0;
 
    if(a[0][1]=='1')
        o++;
    else
        z++;
 
    if(a[1][0]=='1')
        o++;
    else
        z++;
 
    if(a[n-1][n-2]=='1')
        o++;
    else
        z++;
 
    if(a[n-2][n-1]=='1')
        o++;
    else
        z++;
 
    // dbg2(z,o);
 
    if(a[0][1] == a[1][0])
    {
        if(a[n-1][n-2]==a[0][1])
        {
            ans++;
            v.pb(make_pair(n-1,n-2));         
        }
 
        if(a[n-2][n-1]==a[0][1])
        {
            ans++;
            v.pb(make_pair(n-2,n-1));
        }
    }
    else
    {
        if(o > z)
        {
            if(a[0][1]!='0')
            {
                ans++;
                v.pb(make_pair(0,1));
            }
            else
            {
                ans++;
                v.pb(make_pair(1,0));
            }
        }
        else if(z > o)
        {
            if(a[0][1]!='1')
            {
                ans++;
                v.pb(make_pair(0,1));
            }
            else
            {
                ans++;
                v.pb(make_pair(1,0));
            }
        }
        else
        {
            ans+=2;
            v.pb(make_pair(1,0));
 
            if(a[n-1][n-2]==a[0][1])
                v.pb(make_pair(n-1,n-2));
            else
                v.pb(make_pair(n-2,n-1));
        }
    }
 
    if(ans==0)
    {
        cout<<0<<endl;
        return;
    }
 
    cout<<ans<<endl;
 
    for(auto x:v)
    {
        cout<<x.F+1<<" "<<x.S+1<<endl;
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