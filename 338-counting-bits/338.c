/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int num, int* returnSize){
    int * dp = malloc(sizeof *dp *(num+1));
    dp[0]=0;
    for(int i=0; i<=num; ++i){
        if(1==i%2)
            dp[i]=dp[i/2]+1;
        else
            dp[i]=dp[i/2];
    }
    
    *returnSize=num+1;
    return dp;
}
