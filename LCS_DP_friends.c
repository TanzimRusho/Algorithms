
/*A C Program to find out longest common subsequence among friends' names.*/

#include <stdio.h>
#include <string.h>

static char X[30], Y[30];
static int lcs[30][30];

char friends[][30] = {"hasanmustafajamil", "asrafuddinahmedratul", 
    "mdsahibbinmahboob", "adibkhondokerratul", "ashiqadnan", "sumansiddik",
    "sakibtalukder", "sajibkumarmondal", "tahsinulhaque", "himelkhan", 
    "tanzimahmed"}; 

int max(int a, int b)
{
    return a>b?a:b;
}

int lcs_func(char *X, char *Y)
{
    register int i, j;

    int m = strlen(X);
    int n = strlen(Y);

    for(i = 1; i <= m; ++i) { 
        for(j = 1; j <= n; ++j)
        {
            if(X[i-1] == Y[j-1])
                lcs[i][j] = 1 + lcs[i-1][j-1];
            else
                lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);

        }        
    }
    return lcs[m][n];    
}

int main()
{
    int i, j;
    int maxm = 0;
    int count = 0;
    int i_maxm, j_maxm;
    
    for(i=0; i < 11; ++i)
    {    
        for(j=i+1; j < 11; ++j)
        {
            int lcs_len = lcs_func(friends[i], friends[j]);
            
            if (lcs_len > maxm)
            {    
                maxm = lcs_len;
                i_maxm = i;
                j_maxm = j;
            }
            
            //printf("%s %s %d\n", friends[i], friends[j], lcs_func(friends[i],
            //    friends[j]));
        }

    }
    
    printf("%s %s have longest common subsequence and its length = %d\n",
        friends[i_maxm], friends[j_maxm], maxm);

    return 0;
}

