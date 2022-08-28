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
 
    int ind = n-1,x;
 
    vector<int> a, ans;
 
    priority_queue<int ,vector<int> ,greater<int>> pq;
 
    char c;
 
    string s = "";
 
    for(int i=1;i<=2*n;i++)
    {
        cin>>c;
 
        if(c == '+')
        {
            s+='+';
        }
        else
        {
            s+='-';
            cin>>x;
            a.pb(x);
        }
    }
 
    for(int i = 2*n-1; i>=0;i--)
    {
        if(s[i]=='+')
        {
            if(pq.empty())
            {
                cout<<"NO"<<endl;
                return;
            }
            else
            {
                ans.pb(pq.top());
                pq.pop();
            }
        }
        else
        {
            if(pq.empty())
            {
                pq.push(a[ind]);
                ind--;
            }
            else
            {
                if(pq.top() < a[ind])
                {
                    cout<<"NO"<<endl;
                    return;
                }
                else
                {
                    pq.push(a[ind]);
                    ind--;
                }
            }
        }
    }
 
    cout<<"YES"<<endl;
 
    for(int i = n-1;i>=0;i--)
    {
        cout<<ans[i]<<" ";
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