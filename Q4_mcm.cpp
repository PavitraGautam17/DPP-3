#include<bits/stdc++.h>
#define ll long long int
#define f(i,e) for(ll i = 0; i < e; i++)
using namespace std;

int mcm(int a[], int i, int j){

    if(i>=j) return 0;
    int mc = INT_MAX;
    for(int k=i; k<=j-1; k++){
        int temp = mcm(a, i, k) + mcm(a, k+1, j) + (a[i-1]*a[k]*a[j]);
        mc = min(temp,mc);
    }
    return mc;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
   int n; cin>>n;
   int a[n];
   f(i,n) cin>>a[i];
   cout<<mcm(a,1,n-1);
}
return 0;
}