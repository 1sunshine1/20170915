void LNRS_dp_hash_impro(char * arr, int size)
{
    memset(visit, -1, sizeof visit);
    maxlen = maxindex = 0;
    visit[arr[0]] = 0;
    int curlen = 1;
    int last_start = 0;
 
    for(int i = 1; i < size; ++i)
    {
        if(visit[arr[i]] == -1)
        {
            ++curlen;
            visit[arr[i]] = i; /* 记录字符下标 */
        }else
        {
            if(last_start <= visit[arr[i]])
            {
                curlen = i - visit[arr[i]];
                last_start = visit[arr[i]] + 1;
                visit[arr[i]] = i; /* 更新最近重复位置 */
            }else
            {
                ++curlen;
                visit[arr[i]] = i; /* 更新最近重复位置 */
            }
        }
        if(curlen > maxlen)
        {
            maxlen = curlen;
            maxindex = i + 1 - maxlen;
        }
    }
    output(arr);
}
