//最初 judge[X] = 1 を忘れていたため、一回WAを出した

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
    int N,X;
    cin >> N >> X;
    vi A(N + 1,0);
    for (int i = 1;i <= N;i++) cin >> A[i];

    vi judge(N + 1,0);
    int count = 1;
    int i = X;
    judge[X] = 1;
    while (judge[A[i]] == 0) {
        judge[A[i]] = 1;
        count++;
        i = A[i];
    }

    cout << count << "\n";
    return 0;
}
