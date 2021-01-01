bool canPlaceFlowers(int* f, int s, int n){
	int can;
    for(int i=0; i<s; ++i){
        if(f[i]==1)
            continue;

		can=0;
		if(i==0 && i==s-1){
			can=1;
		}
		else if(i==0 && i!=s-1){
            if(f[i+1]==0) can=1;
        }
        else if(i!=0 && i==s-1){
            if(f[i-1]==0) can=1;
        }
        else{
            if(f[i-1] ==0 && f[i+1]==0) can=1;
        }

		if(can==1){
			f[i]=1;
			--n;
		}

        if(n==0)
            return true;
    }
   
    return n<=0;
}
