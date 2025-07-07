#include <stdio.h>

void cube(int *ptr, int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            int ans = *(ptr + i * c + j);  
            printf("%d", ans * ans * ans);
        }
        printf("\n");
    }
}

void main()
{
    int a[10][10];
    int i, j, size;

    printf("Enter array's size: ");
    scanf("%d", &size);

    printf("Enter array elements:");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Cubes of all elements:\n");
    cubes((int *)a, size, size);
}
