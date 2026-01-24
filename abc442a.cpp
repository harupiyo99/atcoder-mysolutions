#include <iostream>   
#include <vector>    
#include <string> 
#include <utility>   
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

    int dot = 0;
    for (int i = 0;i < S.size();i++) {
        if ((S[i] == 'i') || (S[i] == 'j')) dot++;
    }
    cout << dot << "\n";
    return 0;
}