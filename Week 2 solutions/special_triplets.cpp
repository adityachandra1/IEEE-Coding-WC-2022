#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

const int m7 = 1e9 + 7;
const int m9 = 1e9 + 9;
#define l(x, n) for(int x = 0; x < n; ++x)
#define l2(x, a, b) for(int x = a; x <= b; ++x)
#define rl(x, a, b)	for(int x = a; x >=b; --x)
#define ll long long
#define li long int
#define ulli unsigned long long int
#define fio ios::sync_with_stdio(0);cin.tie(0);
#define F first
#define S second
#define PB push_back
#define MP make_pair
typedef vector<int> vi;
typedef pair<int,int> pi;

// typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

// bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){
//     return (a.second < b.second);
// }


vector<int> factor[100001];

void printDivisors(int n)
{
    for(int i = 1; i * i < n; i++)
    {
        if (n % i == 0){
            factor[n].push_back(i);
        }
            
    }
    for(int i = sqrt(n); i > 1; i--)
    {
        if (n % i == 0){
            factor[n].push_back(n/i);
        }            
    }
    
}

int main(){
    fio;
    int n = 100000;
    for(int i = 2; i <= n; i++){
        printDivisors(i);        
    }

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans = 0;
        for(int i = 2; i <= n; i++){
                ans += (n/i)*factor[i].size();
            if(n%i != 0){
                int curr = n - (n/i)*i;

                int k = 0;
                for(auto x:factor[i]){
                    if(x > curr){
                        break;
                    }
                    k++;
                }
                ans += k;
            }
        }
        cout << ans;
        cout << endl;
    }
   
	return 0;
}