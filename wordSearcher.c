#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string [100];
    char word[100];
    int a=0,b=0,i,j,k,c,d=0;


    printf("Please enter the sentence\n");
    gets(string);

    printf("Please enter the word\n");
    gets(word);

    while (string[a]!='\0')
    {
        a++;
    }

     while (word[b]!='\0')
    {
        b++;
    }

    for(i=0;i<a;i++)
    {
        k=i;
        c=0;
        for(j=0;j<b;j++)
        {
            if(string[k]==word[j])
            {
                c++;k++;

            }
        }
         if (c==j)
            {
            printf("Sentence contains that word\n");
            printf("[%d-%d] \n",k-j+1,k);
            d++;
            }

    }
    if (d==0)
            printf("Sentence does not contain that word\n");

    return 0;
}
