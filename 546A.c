#include <stdio.h>

int main()
{
    int CostOfFirstBanana,InitialNumberOfDollars,NumberOfBananasHeWants,MoneyToBorrow,TotalCost,SumOfFirstNNaturalNos;
    
    scanf("%d%d%d",&CostOfFirstBanana,&InitialNumberOfDollars,&NumberOfBananasHeWants);
    SumOfFirstNNaturalNos = NumberOfBananasHeWants*(NumberOfBananasHeWants+1)/2;
 
    TotalCost = CostOfFirstBanana*SumOfFirstNNaturalNos;
    if(TotalCost <= InitialNumberOfDollars) printf("%d",0);
    else 
    {
        MoneyToBorrow = TotalCost - InitialNumberOfDollars;
        printf("%d",MoneyToBorrow);
    }
}