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
    vi T(N + 1, 0);
    map<int, int> Tlog;
    for (int i = 1;i <= N;i++) {
        cin >> T[i];
        Tlog[T[i]] = i;
    }
    
    sort(T.begin(),T.end());
    cout << Tlog[T[1]] << " " <<  Tlog[T[2]] << " " <<Tlog[T[3]] << "\n";
    return 0;
}
