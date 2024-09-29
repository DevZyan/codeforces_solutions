#include <stdio.h>

int main()
{
    int noOfTestCases, numberOfFighters;
    scanf("%d",&noOfTestCases);
    do
    {
        scanf("%d",&numberOfFighters);

        long long int ratingsOfTheFighters[numberOfFighters+1];
        for (int i = 0; i < numberOfFighters; i++)
        {
            scanf("%lld",&ratingsOfTheFighters[i]);
        }
        for(int i =0;i< numberOfFighters-2;i++)
        {
            ratingsOfTheFighters[numberOfFighters-2] -= ratingsOfTheFighters[i];
        }

        ratingsOfTheFighters[numberOfFighters-1] -= ratingsOfTheFighters[numberOfFighters-2];

        printf("%lld\n",ratingsOfTheFighters[numberOfFighters-1]);

        noOfTestCases--;
    } while (noOfTestCases != 0);
    
    
    

    return 0;
}