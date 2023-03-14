#include<bits/stdc++.h>
#define ll long long int
#define f(i,e) for(ll i = 0; i < e; i++)
using namespace std;
int rem(int n, int k){
    if(n==1){
        return 1;
    }
    else{
        return (rem(n-1,k)+k-1)%n+1;
    }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
   int n,k; cin>>n>>k;
   cout<<rem(n,k);
}
return 0;
}