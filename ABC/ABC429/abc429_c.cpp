//初めて自力で解けたC問題。うれしかった。
//一回long long int型にしておらず、WAになってしまった。C以降は値のオーバーフローのことも考えるべき。

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
    vector<ll> A(N + 1);
    vector<ll> log(N + 1,0);
    for (int i = 1;i <= N;i++) {
        cin >> A[i];
        log[A[i]]++;
    }
    ll ans = 0;
    for (int i = 1;i <= N;i++) {
        ans += log[i] * (log[i] - 1) * (N - log[i]) / 2;
    }
    cout << ans << "\n";
    return 0;
}
