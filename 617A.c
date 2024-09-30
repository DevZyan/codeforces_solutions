#include <stdio.h>

int main()
{
    int x;
    scanf("%d",&x);

    int steps[] = {1,2,3,4,5};

    int minSteps=0,counter=0;

    while(x>minSteps)
    {
        minSteps += steps[4];
        counter++;
    }

    printf("%d",counter);
    return 0;
}