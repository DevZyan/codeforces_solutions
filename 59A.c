#include <stdio.h>

int main()
{
    int noOfCapitalLetters=0,LengthOfString=0;
    char s[101];
    scanf("%s",s);

    for(int i = 0;s[i]!='\0';i++)
    {
        if (s[i] <= 90) noOfCapitalLetters++;
        LengthOfString++;
    }

   // printf("%d %d", noOfCapitalLetters,LengthOfString);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (noOfCapitalLetters<=LengthOfString/2) 
        {
            if (s[i] <= 90) s[i] += 32;
        }
        else 
        {
            if (s[i] >=97) s[i] -= 32;
        }
    }

    printf("%s",s);

    return 0;
}