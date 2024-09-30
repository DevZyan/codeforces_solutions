#include <stdio.h>

int main()
{
    int numberOfStones,counter=0,i=0;
    scanf("%d",&numberOfStones);

    char colorOfStones[numberOfStones + 1];
    scanf("%s",colorOfStones);

    while(colorOfStones[i] != '\0')
    {
        if (colorOfStones[i+1] == colorOfStones[i])
        {
            counter++;
        }
        i++;

    }

    printf("%d",counter);
    
    return 0;
}