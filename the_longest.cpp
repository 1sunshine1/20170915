int dp[30];
 
void LNRS_dp(char * arr, int size)
{
    int i, j;
    int last_start = 0;     // 上一次最长子串的起始位置
    maxlen = maxindex = 0;
 
    dp[0] = 1;
    for(i = 1; i < size; ++i)
    {
        for(j = i-1; j >= last_start; --j) // 遍历到上一次最长子串起始位置
        {
            if(arr[j] == arr[i])
            {
                dp[i] = i - j;
                last_start = j+1; // 更新last_start
                break;
            }else if(j == last_start) // 无重复
            {
                dp[i] = dp[i-1] + 1;
            }
        }
        if(dp[i] > maxlen)
        {
            maxlen = dp[i];
            maxindex = i + 1 - maxlen;
        }
    }
    output(arr);
}
