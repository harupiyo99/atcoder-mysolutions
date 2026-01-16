//コンテスト中では、memoをvectorではなくmapで初期化してしまい、計算量が大きくなったため、時間内に処理することができませんでした。mapの計算量がlogMになることを知っておくべきでした。

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

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int N;
    cin >> N;

    int sqN = sqrt(N);
    vector<ll> memo(N + 1,0);
    for (int x = 1;x <= sqN;x++) {
        for (int y = x + 1;y <= sqN;y++) {
            ll nijowa = (x * x + y * y);
            if (nijowa <= N) {
                memo[nijowa] += 1;
            }
        }
    }

    int k = 0;
    vi a;
    for (int i = 1;i <= N;i++) {
        if (memo[i] == 1) {
            k++;
            a.push_back(i);
        }
    }
    
    cout << k << "\n";
    if (k == 0) cout << " ";
    else for (int i = 0;i < a.size();i++) cout << a[i] << " ";
    cout << "\n";
    return 0;
}
