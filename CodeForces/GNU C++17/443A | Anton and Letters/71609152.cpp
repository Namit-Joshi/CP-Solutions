#include <bits/stdc++.h>
using namespace std;
int main()
{
string s;
set<int>st;
getline(cin,s);
for(int i=0;i<s.length();i++)
{
    if(s[i]>='a'&&s[i]<='z')
    {
        st.insert(s[i]);
    }
}
cout<<st.size();
return 0;
}