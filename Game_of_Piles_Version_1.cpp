#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define inf 1e18+10
#define vi  vector<ll>
#define vii vector<vector<int>>
#define pi pair<int,int>
#define mp make_pair
#define pb  push_back
#define mod 1e9+7
#define test() int t;cin>>t;while(t--)
#define ps(x,y) fixed<<setprecision(y)<<x
using namespace std;

void file_i_o()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//#ifndef ONLINE_JUDGE
	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	//#endif 
}


int main() {
	file_i_o();
	test(){
		ll n;
		cin>>n;
		vi v(n);
		ll sum=0;
		ll mi=INT_MAX;
		for(ll i=0;i<n;i++){
           cin>>v[i];
           sum+=v[i];
           mi=min(mi,v[i]);
		}
		if(mi==1){
			cout<<"CHEF"<<endl;
		}
		else if((sum-2*n)&1){
			cout<<"CHEF"<<endl;
		}
		else cout<<"CHEFINA"<<endl;
	}
	return 0;
}