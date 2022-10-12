#include <stdio.h>
#include <stdlib.h>

void towerOfHanoi(int n, char beg_rod, char end_rod, char aux_rod)
{
    if (n==1)
    {
        printf("\n Move disk 1 from rod %c to rod %c",beg_rod,end_rod);
        return;
    }
    towerOfHanoi(n-1,beg_rod,aux_rod,end_rod);
    printf("\n Move disk %d from rod %c to rod %c",n,beg_rod,end_rod);
    towerOfHanoi(n-1,aux_rod,end_rod,beg_rod);
}
int main()
{
    int n;
    printf("----------- TOWER OF HANOI ----------------");
    printf("\nEnter the number of disk:");
    scanf("%d",&n);
    towerOfHanoi(n,'B','E','A');
    return 0;
}
