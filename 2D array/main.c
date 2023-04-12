#include <stdio.h>
#include <stdlib.h>

int main()
/*{
int arr[3][8]={1,2,3};
    printf("%d",arr[0][3]);
    return 0;
}
*/
{
int arr2[3][5]={{1,2,3,4,5},
                {6,7,8,9,10},
                {11,12,13,14,15}};
int i;
int n;
for(i=0;i<=2;i++)
{
    for(n=0;n<=4;n++)
        printf("%d ",arr2[i][n]);
printf("\n");
}
return 0;
}
