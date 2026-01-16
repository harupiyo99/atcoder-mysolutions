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
    vi A(N + 1,0);
    for (int i = 1;i <= N;i++) {
        cin >> A[i];
    }
    
    vi Q(1,0);
    for (int i = 1;i <= N;i++) {
        Q.push_back(A[i]);
        int lenq = Q.size() - 1;
        if ((lenq >= 4) && (Q[lenq - 3] == Q[lenq - 2]) && (Q[lenq - 2] == Q[lenq - 1]) && (Q[lenq - 1] == Q[lenq])) {
            Q.erase(Q.end() - 4,Q.end());
        }
    }
    
    int lenQ = Q.size() - 1;
    cout << lenQ << "\n";
    return 0;
}
