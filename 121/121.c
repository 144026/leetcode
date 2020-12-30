// bottom-up approach
int maxProfit(int* prices, int pricesSize){
	int minprice = INT_MAX;
	int maxprofit=0;

	for(int i=0; i<pricesSize; ++i){
		if(minprice > prices[i])
			minprice=prices[i];
		if(maxprofit < prices[i]-minprice)
			maxprofit=prices[i]-minprice;
	}

	return maxprofit;  
}
