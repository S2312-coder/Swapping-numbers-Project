#include<stdio.h>
int main()
{
    int l,m;
    printf("Enter l\n");
    scanf("%d",&l);
    printf("Enter m\n");
    scanf("%d",&m);
    printf("Numbers before swap are l=%d, m=%d\n",l,m);
    //Swap logic
    l=l*m;
    m=l/m;
    l=l/m;
    printf("\nValues of l and m after swapping are -  l=%d m=%d",l,m);
    return 0;
}
