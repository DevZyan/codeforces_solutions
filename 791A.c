#include <stdio.h>
int main()
{
    int limak,bob,noOfYears=0;
    scanf("%d%d",&limak,&bob);
    while(limak <= bob)
    {
        limak = 3*limak;
        bob = 2*bob;
        noOfYears++;
    }
    printf("%d",noOfYears);
    return 0;
}