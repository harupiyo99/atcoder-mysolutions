//効率よく探す方法を最初は模索していたが、卵の個数Nが高々100個だったこともあり、すべての個数の組み合わせに対して全探索を用いた。
//https://atcoder.jp/contests/abc331/tasks/abc331_b

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
    int N,S,M,L;
    cin >> N >> S >> M >> L;

    vi k;
    for (int a = 0;a <= 100;a++) {
        for (int b = 0;b <= 100;b++) {
            for (int c = 0;c <= 100;c++) {
                if (6 * a + 8 * b + 12 * c >= N) {
                    k.push_back(S * a + M * b + L * c);
                }
            }
        }
    }

    cout << *min_element(k.begin(),k.end()) << "\n";
    return 0;
}
