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
    if(n==1)
    {
        cout<<-1<<endl;
        return;
    }
    if(n==2)
    {
        cout<<23<<endl;
        return;
    }
     if(n==3)
    {
        cout<<253<<endl;
        return;
    }
    int m=253;
    vector<int> v;
    v.pb(3);
    v.pb(5);
    v.pb(2);
    while(n-3>0)
    {
        v.pb(3);
        n--;
    }
    for(auto x:v)
    {
        cout<<x;
    }
    cout<<endl;
   /* string s;
    s=to_string(m);
    reverse(all(s));
    n=n-3;
    while(n>0)
    {
        s=s+'3';
        n--;
    }
    reverse(all(s));
    cout<<s<<endl;*/
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