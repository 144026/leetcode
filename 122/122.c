// Dynamic programming: find each P_i with P_{i-1}
// +greedy: P_i is sum of all single rising slopes

int (*maxProfit)(int*, int) = peak_valley;


// peak-valley approach
int peak_valley(int* prices, int pricesSize){
    int maxprofit=0;
    int peak=0;
    int valley=INT_MAX;

    for(int i=0; i<pricesSize; ++i){
        if(prices[i] >= peak){
            peak=prices[i];
        }
        else{
            maxprofit+=peak-valley;
            peak=prices[i];
            valley=prices[i];
        }

        if(prices[i] < valley)
            valley=prices[i];
    }
    return maxprofit + peak -valley;
}


// one pass approach
int oneway(int * p, int n){
	int pr=0;
	for(int i=1; i<n; ++i){
		if(p[i] > p[i-1])
			pr+=p[i]-p[i-1];
	}
	return pr;
}
