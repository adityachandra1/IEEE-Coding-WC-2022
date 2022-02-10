#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t;
    cin>>t;
    while(t--){
       ll a,b,fl=0,g;
       cin>>a>>b;
       while(!fl){
          g=__gcd(a,b);
          a=a/g;
          if(a==1){
             fl=1;
             break;
          }
          if(g==1){
              break;
          }
       }
       if(fl)
       cout<<"YES"<<"\n";
       else
       cout<<"NO"<<"\n";
    }
    return 0;
}