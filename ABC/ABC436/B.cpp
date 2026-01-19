#include<bits/stdc++.h>
#include<string>
using namespace std;
using ll = long long int;
using vi = vector<int>;
using vvi = vector<vector<int>>; 


int main()
{
    int N;
    cin >> N;

    vvi masu(N,vi(N,0));
    masu[0][(N - 1) / 2] = 1;

    int r = 0,c = (N - 1) / 2;

    for (int k = 2;k <= N * N;k++) {
        if (masu[(r - 1 + N) % N][(c + 1) % N] == 0) {
            masu[(r - 1 + N) % N][(c + 1) % N] = k;
            r = (r - 1 + N) % N;
            c = (c + 1) % N;
        }
        else {
            masu[(r + 1) % N][c] = k;
            r = (r + 1) % N;
        }
    }

    for (int i = 0;i < N;i++) {
        for (int j = 0;j < N;j++) cout << masu[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
