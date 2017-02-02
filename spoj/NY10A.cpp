#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;

void computeLPSArray(char *pat, int M, int *lps);
 
int KMPSearch(char *pat, char *txt)
{
    int M = strlen(pat);
    int N = strlen(txt);
    int *lps = (int *)malloc(sizeof(int)*M);
    int j  = 0;
    computeLPSArray(pat, M, lps);
    int i = 0, count=0;
    while (i < N)
    {
      if (pat[j] == txt[i])
      {
        j++;
        i++;
      }
 
      if (j == M)
      {
        count++;
        j = lps[j-1];
      }
      else if (i < N && pat[j] != txt[i])
      {
        if (j != 0)
         j = lps[j-1];
        else
         i = i+1;
      }
    }
    free(lps);
    return count;
}
 
void computeLPSArray(char *pat, int M, int *lps)
{
    int len = 0;
    int i;
    lps[0] = 0;
    i = 1;
    while (i < M)
    {
       if (pat[i] == pat[len])
       {
         len++;
         lps[i] = len;
         i++;
       }
       else 
       {
         if (len != 0)
         {
           len = lps[len-1];
         }
         else
         {
           lps[i] = 0;
           i++;
         }
       }
    }
}
int main()
{
	int n;
	scanf("%d", &n);
	char pat[8][4] = {"TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT", "HHH"};
	char str[n][40];
	while(n--){
		int i, c;
		scanf("%d", &i);
		scanf("%s", &str[i-1]);
		printf("%d ", i);
		for(c=0; c<8; c++){
			int count = KMPSearch(pat[c], str[i-1]);
			printf("%d ", count);
		}
		printf("\n");
	}
	return 0;
}
