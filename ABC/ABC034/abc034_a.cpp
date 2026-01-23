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
    int x,y;
    cin >> x >> y;

    if (x > y) cout << "Worse\n";
    else cout << "Better\n";
    return 0;
}
