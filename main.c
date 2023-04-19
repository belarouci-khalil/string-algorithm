#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char chaine[100];
    int frq[100];
    int max , indice , i , j , cmp;
    printf ("give a character string:");
    gets(chaine);
    for(i=0; i<(strlen(chaine));i++)
    {
        frq[i]=-1;
    }
    for( i = 0; i<strlen(chaine); i++)
    {cmp =1;
        for(j=i+1; j< strlen(chaine); j++)
        {
            if(chaine[i]==chaine[j])
            {
               cmp++;
               frq[j]=0;
            }
        }
        if (frq[i]!=0)
        {
            frq[i]=cmp;
        }
    }

     max = frq[0];
     for( i = 0; i<strlen(chaine); i++)
     {
       if (max<frq[i])
       {
           max = frq[i];
           indice=i ;
       }
     }
     if (max ==frq[0])
       {
           indice =0;
       }
    printf("the most repeating carecter is %c (%d times)",chaine[indice], max);

    return 0;
}
