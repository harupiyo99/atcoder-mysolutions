// https://atcoder.jp/contests/abc005/submissions/me
// 最初、T[0]が0になることを見逃していて、そこを直したらACできた。

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
    int N;
    cin >> N;
    vi T(N + 1,0);
    T[0] = 110;
    for (int i = 1;i <= N;i++) cin >> T[i];

    cout << *min_element(T.begin(),T.end()) << "\n";
    return 0;
}
