//zad2
#include <stdio.h>
 
int function (int a[][2], int first)
{
    int i, k, max;
    for (i=0; i<2; i++)
        for (k=0; k<2; k++)
            if (i == k)
                if (first || a[i][k] > max) max = a[i][k], first = 0;
    return max;
}
 
int main (void)
{
    int i, k, a[2][2];
    srand (time (NULL));
    
   for ( int i = 0; i < 2; i ++)   
        for ( int j = 0; j <2; j ++)      
            a [i][j] = rand ()%200 - 100;
 
    for (i=0; i<2; i++)
    {
        for (k=0; k<2; k++)
            printf("% 4d", a[i][k]);
        printf("\n");
    }
 
    printf("\nMax = %d\n", function(a, 1));
    return 0;
}

































