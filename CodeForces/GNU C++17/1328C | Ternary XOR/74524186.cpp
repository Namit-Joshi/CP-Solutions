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
 string x;
 cin>>n>>x;
 
 vector<char> a(n),b(n);
 
 int mx=-1;
    for(ll i=0;i<n;i++){
       if(mx==-1){
            if(x[i]=='0') {a[i]=b[i]='0';}
            else if(x[i]=='2'){a[i]=b[i]='1';}
            else { a[i]='1';b[i]='0';mx=1; }
       }
      else { 
          if(x[i]=='0') {a[i]=b[i]='0';}
          else if(x[i]=='1'){ a[i]='0';b[i]='1';}
          else { a[i]='0';b[i]='2';}
      } 
   }
 for(int i=0;i<n;i++) 
        cout <<a[i];
    cout<<endl;     
    for(int i=0;i<n;i++) 
        cout <<b[i];
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