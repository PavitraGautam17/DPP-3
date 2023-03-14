#include<bits/stdc++.h>
#define ll long long int
#define f(i,e) for(ll i = 0; i < e; i++)
using namespace std;

//with recursion

int count(int e, int f){
    if(f==0 || f==1 || e==1){
        return f;
    }
    int attempt = INT_MAX;
    for(int i=1; i<=f; i++){
        int temp = max(count(e-1,i-1), count(e,f-i)) +1;
        attempt = min(attempt, temp);
    }
    return attempt;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
   int e,f; cin>>e>>f;
   cout<<count(e,f)<<"\n";
}
return 0;
}