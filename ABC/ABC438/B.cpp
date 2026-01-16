#include<bits/stdc++.h>
#include<string>
using namespace std;
using ll = long long int;
using vi = vector<int>;
using vvi = vector<vector<int>>; 

int main()
{
    int N,M;
    cin >> N >> M;
    string S,T;
    cin >> S >> T;

    int mins[N - M + 1] = {0};
    for (int i = 0;i < (N - M + 1);i++) {
        for (int j = 0;j < M;j++) {
            mins[i] += ((S[i + j] - T[j]) + 10) % 10;
        }
    }
    cout << *min_element(mins,mins + (N - M + 1)) << "\n";
    return 0;
}
