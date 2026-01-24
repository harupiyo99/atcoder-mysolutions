#include <iostream>   
#include <vector>    
#include <string>    
#include <algorithm>
#include <utility> 
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
    ll N,M;
    cin >> N >> M;
    vector<ll> A(M + 1,0),B(M + 1,0);
    vector<ll> res(N + 1,N - 1);
    for (ll i = 1;i <= M;i++) {
        cin >> A[i] >> B[i];
        res[A[i]]--;
        res[B[i]]--;
    }
    for (ll i = 1;i <= N;i++) {
        cout << res[i] * (res[i] - 1) * (res[i] - 2) / 6 << " ";
    }
    return 0;
}