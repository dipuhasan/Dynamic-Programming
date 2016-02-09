
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,i,j,matrix[10][10], transpose[10][10];
    cin>>m>>n; //row and column

    for(int i = 0; i<m; i++)
        for(int j = 0; j<n; j++)
            cin>>matrix[i][j];

    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            transpose[j][i] = matrix[i][j];

    cout<<"Transpose Matrix are: "<<endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            cout<<transpose[i][j]<<" ";
        cout<<'\n';
}
    return 0;
}

Input: 2 3 // row and column
1 2 3
4 5 6
Output: 
1 4
2 5
3 6
