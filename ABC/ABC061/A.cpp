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
    int A,B,C;
    cin >> A >> B >> C;

    if ((C >= A) && (C <= B)) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}
