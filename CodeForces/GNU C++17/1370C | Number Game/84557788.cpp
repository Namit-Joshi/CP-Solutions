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
 
 vector<int> v;
 
 if(n==1)
 {
  cout<<"FastestFinger"<<endl;
  return;
 }
 
 if(n%2!=0 || n==2)
 {
  cout<<"Ashishgup"<<endl;
 }
 else
 {
  int i=2;
 
  while(i*i <= n) 
  {
         if(n % i == 0 && n/i!=2) 
         {
              if(i%2!=0)
              v.push_back(i);
       
               if(n/i != i) 
              { 
               if((n/i)%2!=0)
                  v.push_back(n/i);
              }
         }
         i++;
  }
 
  //sort(v.begin(),v.end());
 
  // for(auto x:v)
  //  cout<<x<<" ";
 
  // cout<<endl;
 
  int c=0;
  // while(v.size()>0)
  // {
 
  // n /= v[v.size()-1];
  // v.pop_back();
 
  // auto it = lower_bound(v.begin(),v.end(),n);
 
  // int size = it - v.begin();
 
  // v.resize(size);
  // c++;
  // }
 
  for(int i=0;i<v.size();i++)
  {
   int rem = n/(v[i]);
 
   if(rem!=2)
    c=1;
  }
 
  if(c==0)
  {
   cout<<"FastestFinger"<<endl;
   return;
  }
  else
  {
   cout<<"Ashishgup"<<endl;
   return;
  }
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