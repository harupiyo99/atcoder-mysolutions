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
    int N,K;
    cin >> N >> K;
    
    vi d(K + 1,0);
    vi sunuke(N + 1,0);
    for (int i = 1;i <= K;i++) {
        cin >> d[i];
        for (int j = 1;j <= d[i];j++) {
            int A;
            cin >> A;
            sunuke[A]++;
        }
    }

    int count = 0;
    for (int i = 1;i <= N;i++) {
        if (sunuke[i] == 0) count++;
    }
    cout << count << "\n";
    return 0;
}
