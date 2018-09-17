#include <stdio.h>
int main(void)
{
    int sum=0;
    int k=0;

    //for (k=0;k<5;k++)
    while (k<5)
    {
        sum+=k; //use something different in "while" version
        k++;
        printf ("k - %2d sum - %4.1d\n",k,sum);
    }



    //k=5;

    //while (k>0) {
    for (k=10;k>0;k--)
    {     //use something different in "for" version
        printf ("%6.1d\n", k);
    }
    printf ("Blastoff!");
}

