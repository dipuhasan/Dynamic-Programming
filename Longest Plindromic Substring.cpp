#include<bits/stdc++.h>
using namespace std;

void printSubStr(char* str, int low, int high)
{
    for(int i = low; i<=high; i++)
        printf("%c",  str[i]);
}

int longestPalSubstr(char *str)
{
    int n = strlen(str);
    bool table[n][n];
    memset(table, 0,sizeof(table));
    //lenght for 1
    int maxLength = 1;
    for(int i = 0; i<n; i++)
        table[i][i] = true;
    //length for 2
    int start = 0;
    for(int i = 0;  i<n-1; i++)
    {
        if(str[i] == str[i+1])
        {
            table[i][i+1] = true;
            start = i;
            maxLength = 2;
        }
    }

    for(int k = 3; k<=n; k++)
    {
        for(int i = 0; i<n-k+1; i++)
        {
            int j = i+k-1;
            if(table[i+1][j-1] && str[i] == str[j])
            {
                table[i][j] = true;
                if(k>maxLength)
                {
                    start = i;
                    maxLength  = k;
                }
            }
        }
    }
    printf("Longest palindromic substring is : ");
    printSubStr(str,  start, start + maxLength-1);
    printf("\n");

    return maxLength;
}

int main()
{
    char str[] = " forgeeksskeegfor";

    printf("length is %d\n", longestPalSubstr(str));

    return 0;
}


Output : 
Longest palindrome substring is: geeksskeeg
Length is: 10