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
    string S;
    cin >> S;

    string kaibunkoho,kaibun;
    for (int i = 2;i <= S.size();i++) {
        for (int j = 0;j <= S.size() - i;j++) {
            kaibunkoho = S.substr(j, i);
            bool flag = false;
            int t = 0;
            for (int k = 0;k < kaibunkoho.size() / 2;k++) {
                if (kaibunkoho[k] != kaibunkoho[kaibunkoho.size() - 1 - k]) {
                    flag = true;
                }
                if (flag) {
                    t = 1;
                    break;
                }
            }
            if (t == 0) kaibun = kaibunkoho;
        }
    }
    if (kaibun.size() == 0) cout << 1 << "\n";
    else cout << kaibun.size() << "\n";
    return 0;
}
