// https://atcoder.jp/contests/abc441/tasks/abc441_a
// 6分ほどかかった。(X - P >= 0) && (Y - Q >= 0)を忘れて一回WAになった。

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
    int P,Q,X,Y;
    cin >> P >> Q >> X >> Y;

    if ((X - P <= 99) && (Y - Q <= 99) && (X - P >= 0) && ((Y - Q >= 0))) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}
