#include <stdio.h>
int main ()
{
	int a[6][6] = {0};
    int i, j, k;

    for(i = 0; i < 6; i++)
{ *(*(a+i)+0) = 1;
  *(*(a+i)+i) = 1;
    
	for(j = 1; j < i; j++)
    {
        *(*(a+i)+j) = *(*(a+i-1)+(j-1)) + *(*(a+i-1)+j);
    }
}

    for(i = 0; i < 6; i++)
	{
	    for(k = 0; k < 5-i; k++)
	    {
	        printf(" ");
	    }
	
	    for(j = 0; j <= i; j++)
	    {
	        printf("%2d ", *(*(a+i)+j));
	    }
	
	    printf("\n");
	}
	return 0;
}
