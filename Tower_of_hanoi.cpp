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

void toh(int n, int l, int m, int r){
	if(n==0){
		return;
	}
	toh(n-1,l,r,m);
	cout<<l<<" "<<r<<endl;
    toh(n-1,m,l,r);
}

int32_t main(){
    FIO;
    int n;
    cin>>n;
    cout<<(pow(2,n)-1)<<endl;
    toh(n,1,2,3);
    return 0;
}