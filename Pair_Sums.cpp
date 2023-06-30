#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N=1e6+10;
int a[N],b[N];

void solve()
{
    int n;
    long long k;
    cin>>n>>k;
    for(int i=0; i<n; ++i)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    for(int i=0; i<N; ++i)
    {
        if(b[k-a[i]]!=0)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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