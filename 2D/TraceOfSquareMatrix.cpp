
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int mat[100][100],tr=0,i,j,m,n;
    cout<<"Enter the order of the matrix : \n";
    cin>>m>>n;
    while(m!=n){
        cout<<"Not a square matrix!\n";
        exit(0);
    }
    cout<<"Enter the elements of the matrix : \n";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    cout<<"The matrix is : \n";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<mat[i][j];
            cout<<"\t";
        }
        cout<<endl;
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==j){
                tr = tr + mat[i][j];
            }
        }
    }
    cout<<"The trace is "<<tr;
}

