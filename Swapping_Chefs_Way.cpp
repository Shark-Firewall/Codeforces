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
    test(){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string temp=s;
        sort(s.begin(),s.end());
        int i=0,j=n-1;
        bool flag=false;
        while(i<j){
            if(temp[i]>temp[j]) swap(temp[i],temp[j]);
            i++;
            j--;
        }
        cout<<((temp==s)?"YES":"NO")<<endl;
    }
    return 0;
}