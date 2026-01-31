#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

int main() {
    int N, M;
    cin >> N >> M;
    vector<ll> A(N), B(M);
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < M; i++) cin >> B[i];

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    ll ng = 0;
    ll ok = 2000000000; 

    while (abs(ok - ng) > 1) {
        ll mid = (ok + ng) / 2;

        int sell_cnt = upper_bound(A.begin(), A.end(), mid) - A.begin();

        int buy_cnt = B.end() - lower_bound(B.begin(), B.end(), mid);

        if (sell_cnt >= buy_cnt) {
            ok = mid; 
        } else {
            ng = mid; 
        }
    }

    cout << ok << "\n";
    return 0;
}
