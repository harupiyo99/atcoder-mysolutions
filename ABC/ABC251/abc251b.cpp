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
    int N;
    ll W;
    cin >> N >> W;
    vector<ll> A(N + 1,0),log(W + 1,0);
    for (int i = 1;i <= N;i++) cin >> A[i];

    if (N >= 3) {
        for (int i = 1;i <= N - 2;i++) {
            for (int j = i + 1;j <= N - 1;j++) {
                for (int k = j + 1;k <= N;k++) {
                    if (A[i] + A[j] + A[k] <= W) log[A[i] + A[j] + A[k]]++;
                }
            }
        }
    }
    if (N >= 2) {
        for (int i = 1;i <= N - 1;i++) {
            for (int j = i + 1;j <= N;j++) {
                if (A[i] + A[j] <= W) log[A[i] + A[j]]++;
            }
        }
    }
    if (N >= 1) for (int i = 1;i <= N;i++) log[A[i]]++;

    int count = 0;
    for (int i = 1;i <= W;i++) {
        if (log[i] != 0) count++;
    }
    cout << count << "\n";
    return 0;
}
