#include<stdio.h>
#include<string.h>
int pattern_search(char*,char*);
int main()
{
    char text[]="hi my name is Tushar sharma";
    char pat[]="shar";

    pattern_search(text,pat);

    return 0;
}
int pattern_search(char* text , char* pat)
{
    int m,n,i=0,j,k;
    m=strlen(text);
    n=strlen(pat);
    for(i=0;i<m-n;i++)
    {
        for(j=0;j<n;j++)
        {
         if(text[i+j]!=pat[j])
            break;
        }
       if(j==n)
        {
            printf("pattern found at index %d\n -",i);
            for(k=i;k<=m;k++)
                 printf("%c",text[k]);
            printf("\n");
        }

    }


    return i;
}

