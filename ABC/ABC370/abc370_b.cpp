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
    cin >> N;

    vvi A(N + 1,vi(N + 1,0));
    for (int i = 1;i <= N;i++) {
        for (int j = 1;j <= i;j++) {
            cin >> A[i][j];
        }
    }

    int i = 1;
    for (int j = 1;j <= N;j++) {
        if (i >= j) i = A[i][j];
        else i = A[j][i];
    }
    cout << i << "\n";
    return 0;
}
