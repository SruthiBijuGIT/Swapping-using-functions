#include <stdio.h>
void swap(int *a,int *b)
{
    int t;
     t   = *a;
    *a   = *b;
    *b   =  t;
}
int main()
{
    int n1,n2;

    printf("Enter value of n1: ");
    scanf("%d",&n1);
    printf("Enter value of n2: ");
    scanf("%d",&n2);
    printf("Before Swapping: n1 is: %d, n2 is: %d\n",n1,n2);
    swap(&n1,&n2);
    printf("After  Swapping: n1 is: %d, n2 is: %d\n",n1,n2);

    return 0;
}
