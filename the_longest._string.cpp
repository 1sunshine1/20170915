int maxlen;
int maxindex;
void output(char * arr);
 
/* LNRS 基本算法 hash */
char visit[256];
 
void LNRS_hash(char * arr, int size)
{
    int i, j;
    for(i = 0; i < size; ++i)
    {
        memset(visit,0,sizeof visit);
        visit[arr[i]] = 1;
        for(j = i+1; j < size; ++j)
        {
            if(visit[arr[j]] == 0)
            {
                visit[arr[j]] = 1;
            }else
            {
                if(j-i > maxlen)
                {
                    maxlen = j - i;
                    maxindex = i;
                }
                break;
            }
        }
        if((j == size) && (j-i > maxlen))
        {
            maxlen = j - i;
            maxindex = i;
        }
    }
    output(arr);
}
