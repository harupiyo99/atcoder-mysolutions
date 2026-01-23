//最初に改行を入れ忘れてWAになった。問題文をよく読む必要性を痛感した。

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
    int N,L;
    cin >> N >> L;
    string S;
    cin >> S;

    int count = 0,tab = 1;
    for (int i = 0;i < N;i++) {
        if (S[i] == '+') tab++;
        else tab--;
        if (tab > L) {
            count++;
            tab = 1;
        }
    }
    cout << count << "\n";
    return 0;
}
