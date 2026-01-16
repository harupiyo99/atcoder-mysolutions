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

int main()
{
    int N;
    cin >> N;

    int num = N;
    while (num >= 10) {
        string S;
        S = to_string(num);
        int sum = 0;
        for (int i = 0;i < S.size();i++) {
            sum += (S[i] - '0') * (S[i] - '0');
        }
        num = sum;
    }

    if (num == 1) cout << "Yes" << "\n";
    else cout << "No" << "\n";
    return 0;
}
