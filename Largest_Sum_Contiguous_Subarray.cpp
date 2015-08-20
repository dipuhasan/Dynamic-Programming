include<bits/stdc++.h>

using namespace std;

int maxSubArraySum(int a[], int size)
{
    int max_so_far = 0, max_ending_here = 0;
    int i;
    for(i = 0; i<size; i++)
    {
        max_ending_here = max_ending_here+a[i];
        if(max_ending_here<0)
            max_ending_here = 0;
        if(max_so_far<max_ending_here)
            max_so_far = max_ending_here;
    }
    return max_so_far;
}

int main()
{
    int a[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(a)/sizeof(a[0]);

    int max_sum = maxSubArraySum(a, n);

    cout<<"Max contigous sum is "<<max_sum<<'\n';


    return 0;
}

Output : 7

// Uisng Dynamic Programming
#include<stdio.h>
int max(int x, int y){
    return (y>x)>y:x;
}

int maxSubArray(int a[], int size)
{
    int max_so_far = a[0], i;
    int curr_max = a[0];
    for(i = 1; i<size; ++i)
    {
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);
    }
    return max_so_far;
}

int main()
{
    int a[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArray(a, n);
    cout<<max_sum<<endl;
}

