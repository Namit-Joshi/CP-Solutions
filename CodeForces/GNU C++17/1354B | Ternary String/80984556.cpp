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
#define dbg(x) cout << #x << " = " << x << '\n'
#define dbg2(x,y) cout<<#x<<" = "<<x<<" & "<<#y<<" = "<<y<<endl;
 
void test()
{
 string s;
 cin>>s;
 
 int n=s.length();
 
 int dc=0;
 bool vis[255]={false};
 
 for(int i=0;i<n;i++)
 {
  if(vis[s[i]]==false)
  {
   vis[s[i]]=true;
   dc++;
  }
 }
 
 if(dc<3)
 {
  cout<<0<<endl;
  return;
 }
 
 int start=0, start_index=-1, min_len=INT_MAX;
 
 int count=0;
 int curr_count[255]={0};
 
 for(int i=0;i<n;i++)
 {
  curr_count[s[i]]++;
 
  if(curr_count[s[i]]==1)
   count++;
 
  if(count==dc)
  {
   while(curr_count[s[start]]>1)
   {
    curr_count[s[start]]--;
    start++;
   }
 
 
   int len_window=i-start+1;
 
   if(min_len>len_window)
   {
    min_len=len_window;
    //start_index=start;
   }
  }
 }
 cout<<min_len<<endl;
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