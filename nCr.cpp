i64 dp[70][70];
i64 nCr(int n,int r)
{
    if(r==1) return n;
    if(n==r) return 1;
    if(dp[n][r]!=-1) return dp[n][r]; //ভ্যালু টেবিলে থাকলে নতুন করে হিসাব করা দরকার নেই,ভ্যালুটা রিটার্ণ করে দাও
        else{
        dp[n][r]=nCr(n-1,r)+nCr(n-1,r-1);         //ভ্যালু টেবিলে সেভ করে রাখো
        return dp[n][r];
    }
 
     
}
int main()
{
 //init dp table with -1
    for(int i=0; i< 70;i++)
        for(int j=0;j < 70;j++)
         dp[i][j]=-1;
          printf("%d\n",nCr(20,2));
 
}
