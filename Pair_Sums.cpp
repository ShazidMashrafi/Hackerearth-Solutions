#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    int n,k;
    cin>>n>>k;
    unordered_multiset<int>s;
    for(int i=0; i<n; ++i)
    {
        int x;
        cin>>x; 
        s.insert(x);
    }
    bool exist=false;
    for(auto it : s)
    {
        int x=it;
        if(s.find(k-x)!=s.end() && s.find(k-x)!=s.find(x))
        {
            exist=true;
            break;
        }
    }
    if(exist) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
    //cin >> TC;
    //cin.ignore();
    while (TC--) solve();
}