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

    cout << pow(2, N) - 2 * N << "\n";
    return 0;
}
