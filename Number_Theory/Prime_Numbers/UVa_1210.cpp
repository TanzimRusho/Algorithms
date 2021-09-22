// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3651
#include <bits/stdc++.h>
using namespace std;

int consecutive_primes(int array[], int elem, int n)
{
    int i, j, count, sum;
    
    count = 0;
    
    for(i=0; i < elem; ++i)
    {
        sum = 0;
        j = i;
        while(j < elem && sum <= n)
        {
            sum += array[j];
            if (sum == n)
            {
                ++count;
                break;
            }
            if (sum > n)
                break;
            ++j;
        }
    }
    
    return count;
}

int SieveOfEratosthenes(int n)
{
    bool prime[n+1];
    int array[n];
    memset(prime, true, sizeof(prime));

    for(int p=2; p*p <= n; p++)
    {
        if(prime[p] == true)
        {
            for(int i=p*p; i<=n; i+=p)
                prime[i] = false;
            
        }
    }
    
    int elem = 0;
    
    for(int p=2; p<=n; p++)
        if(prime[p])
            //cout << p << " ";
            array[elem++] = p;
            
    return consecutive_primes(array, elem, n);
    
}

int main()
{
    int n, res;
    
    while(cin >> n)
    {   
        if (n==0)
            break;
            
        res = SieveOfEratosthenes(n);
        
        cout << res << endl;
    }    
    return 0;
}
