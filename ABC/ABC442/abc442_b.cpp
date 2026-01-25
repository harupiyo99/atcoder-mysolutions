#include <iostream>   
#include <vector>    
#include <string>    
#include <algorithm>
#include <utility> 
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
    int Q;
    cin >> Q;
    vi A(Q + 1,0);
    int volume = 0;
    string M = "Off";
    for (int i = 1;i <= Q;i++) {
        cin >> A[i];
        if (A[i] == 1) volume++;
        else if ((A[i] == 2) && (volume >= 1)) volume--;
        else if ((A[i] == 3) && (M == "Off")) M = "On";
        else if ((A[i] == 3) && (M == "On")) M = "Off";

        if ((volume >= 3) && (M == "On")) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
