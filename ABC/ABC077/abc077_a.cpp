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
    vector<vector<char>> C(3,vector<char>(4,0));
    for (int i = 1;i <= 2;i++) {
        for (int j = 1;j <= 3;j++) {
            cin >> C[i][j];
        }
    }

    if ((C[1][1] == C[2][3]) && (C[1][2] == C[2][2]) && (C[1][3] == C[2][1])) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
