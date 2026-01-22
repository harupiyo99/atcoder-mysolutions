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
    int a,b;
    cin >> a >> b;

    if (a > b) cout << a - 1;
    else cout << a;
    return 0;
}
