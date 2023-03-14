#include<bits/stdc++.h>
#define ll long long int
#define f(i,e) for(ll i = 0; i < e; i++)
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
   int n; cin>>n;
   int a[n], b[n];
   f(i,n) cin>>a[i];
   f(i,n) cin>>b[i];
   int m = 2*n;
   int c[m];
   merge(a,(a+n), b,(b+n),c);
   sort(c,c+m);
   int median = (c[m/2]+c[(m/2)-1])/2;
   cout<<median<<"\n";
}
return 0;
}