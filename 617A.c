#include <stdio.h>

int main()
{
    int x;
    scanf("%d",&x);

    int minSteps=0,counter=0;

    while(x>minSteps)
    {
        minSteps += 5;
        counter++;
    }

    printf("%d",counter);
    return 0;
}
