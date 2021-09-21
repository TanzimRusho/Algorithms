// online judge - 11703
// In C++

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int mod = 1000000;
    int dp[mod + 4];
    int n;
    
    dp[0] = 1;
    
    for(int i=1; i <= mod; ++i)
    {
        dp[i] = dp[(int)floor(i - sqrt(i))] % mod + dp[(int)floor(log(i))] % mod
            + dp[(int)floor(i * sin(i) * sin(i))] % mod;
            
        dp[i] %= mod;
    }
    
    while(scanf("%d", &n)==1 && n != -1)
    {
        cout << dp[n] << endl;
    }
    
    return 0;
}
