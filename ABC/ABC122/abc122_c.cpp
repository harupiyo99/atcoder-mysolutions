// https://atcoder.jp/contests/abc122/tasks/abc122_c

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
    int N,Q;
    cin >> N >> Q;
    string S;
    cin >> S;

    vi sumAC(N + 1,0);
    for (int i = 1;i < S.size();i++) {
        if ((S[i] == 'C') && (S[i - 1] == 'A')) {
            sumAC[i] = sumAC[i - 1] + 1;
        }
        else sumAC[i] = sumAC[i - 1];
    }
    
    for (int i = 1;i <= Q;i++) {
        int l,r;
        cin >> l >> r;
        cout << sumAC[r - 1] - sumAC[l - 1] << "\n";
    }
    return 0;
}
