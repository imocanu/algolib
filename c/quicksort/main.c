#include <stdio.h>
#include "quicksort.h"

#define MAX 10

int a[MAX];

void main()
{
    int i,t,x,y;
    /* fill array */
    for (i=0; i < MAX; i++)
    {
        a[i]=rand();
        printf("%d\n",a[i]);
    }

	quickSort(a, 0, MAX-1);

    /* print sorted array */
    printf("-----------QUICKSORT---------\n");
    for (i=0; i < MAX; i++)
        printf("%d\n",a[i]);

}
