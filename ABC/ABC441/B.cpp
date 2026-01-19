// https://atcoder.jp/contests/abc441/tasks/abc441_b

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
    int N,M;
    cin >> N >> M;
    string S,T;
    cin >> S >> T;
    int Q;
    cin >> Q;
    vector<string> w(Q);
    for (int i = 0;i < Q;i++) cin >> w[i];

    for (int i = 0;i < Q;i++) {
        vi takahashi(w[i].size(),0),aoki(w[i].size(),0);
        for (int j = 0;j < w[i].size();j++) {
            for (int k = 0;k < S.size();k++) {
                if (w[i][j] == S[k]) takahashi[j] = 1;
            }
            for (int k = 0;k < T.size();k++) {
                if (w[i][j] == T[k]) aoki[j] = 1;
            }
        }
        string judge = "Unknown\n";
        for (int j = 0;j < w[i].size();j++) {
            if ((takahashi[j] == 1) && (aoki[j] == 0)) {
                judge = "Takahashi\n";
                break;
            }
            else if ((takahashi[j] == 0) && (aoki[j] == 1)) {
                judge = "Aoki\n";
                break;
            }
        }
        cout << judge;
    }
    return 0;
}
