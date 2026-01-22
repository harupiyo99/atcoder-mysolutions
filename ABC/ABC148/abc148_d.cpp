#include <iostream>   
#include <vector>    
#include <string>    
#include <algorithm> 
#include <map>       
#include<queue>
#include<cmath>
#include<iomanip>

using namespace std;
using ll = long long int;
using vi = vector<int>;
using vvi = vector<vector<int>>; 
using msi = map<string, int>;

int main()
{
    ll N;
    cin >> N;
    vector<ll> a(N + 1,0);
    for (int i = 1;i <= N;i++) cin >> a[i];

    ll max = -1;
    ll start;
    for (int i = 1;i <= N;i++) {
        if (a[i] == 1) {
            max = 1;
            start = i;
            break;
        }
    }

    if (max == 1) {
        for (int i = start;i <= N;i++) {
            if (a[i] == max + 1) max = a[i];
        }
    }
    if (max == -1) cout << -1 << "\n";
    else cout << N - max << "\n";
    return 0;
}
