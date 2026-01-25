// https://atcoder.jp/contests/abc442/tasks/abc442_d
// 累積和のところで、値を変えるのはsumA[x]だけでよかった。しかし、sumA[x + 1]の値も変更してしまったため、特定のクエリで計算が合わなくなってしまった。こうした計算ミスをなくすためにも、より多くの問題量をこなす必要性を感じた。

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
    ll N,Q;
    cin >> N >> Q;
    vector<ll> A(N + 1,0);
    for (int i = 1;i <= N;i++) cin >> A[i];
    vector<ll> sumA(N + 1,0);
    for (int i = 1;i <= N;i++) {
        sumA[i] = sumA[i - 1] + A[i];
    }

    for (int i = 1;i <= Q;i++) {
        int judge;
        cin >> judge;
        if (judge == 1) {
            int x;
            cin >> x;
            swap(A[x],A[x + 1]);
            sumA[x] += (A[x] - A[x + 1]);
        }
        else {
            int l,r;
            cin >> l >> r;
            cout << sumA[r] - sumA[l - 1] << "\n";
        }
    }
    return 0;
}
