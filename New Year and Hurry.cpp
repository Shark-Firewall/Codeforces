#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define pb push_back
#define vi vector<int>
#define mod 1000000007
#define test() int t;cin>>t;while(t--)
#define ps(x,y) fixed<<setprecision(y)<<x
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int32_t main(){
    FIO;
    int n,k;
    cin>>n>>k;
    int time=240-k;
    int i=1;
    while(time>=(5*i) && i<=n){
        time-=(5*i);
        i++;
    }
    cout<<i-1<<endl;
    return 0;
}