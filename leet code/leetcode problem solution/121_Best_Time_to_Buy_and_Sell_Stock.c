
int maxProfit(int* prices, int pricesSize){
    int minprofit=prices[0];
    int maxprofit=0;
    for(int i=1;i<pricesSize;i++)
    {
        if(minprofit>prices[i])
        minprofit=prices[i];
        if(maxprofit<prices[i]-minprofit)
        maxprofit=prices[i]-minprofit;
    }
    return maxprofit;
}
