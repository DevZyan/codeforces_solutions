#include <stdio.h>
#include <string.h>

int main()
{
    char givenUsername[101],seen[26] = {0},noOfDistinctLetters = 0;
    scanf("%s",givenUsername);
    
    for (int i = 0; givenUsername[i] != '\0'; i++)
    {
        int index= givenUsername[i]-'a';
        if(seen[index] == 0)
        {
            seen[index] = 1;
            noOfDistinctLetters++;
        }

    }

    if (noOfDistinctLetters%2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
    
    return 0;
}
