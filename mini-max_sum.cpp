#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define vi  vector<int>
#define pb  push_back
#define mod 1000000007
#define test() int t;cin>>t;while(t--)
#define ps(x,y) fixed<<setprecision(y)<<x
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int32_t main(){
    FIO;
    int mi=INT_MAX;
    int mx=INT_MIN;
    vi v(5);
    for(int i=0;i<5;i++) cin>>v[i];
    for(int i=0;i<5;i++){
    	if(v[i]>mx) mx=v[i];
    	if(v[i]<mi) mi=v[i];
    }
    int sum=0;
    for(int i=0;i<5;i++){
    	sum+=v[i];
    }
    cout<<(sum-mx)<<" "<<(sum-mi)<<endl;
    return 0;
}