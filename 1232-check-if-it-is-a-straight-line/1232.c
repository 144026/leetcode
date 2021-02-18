bool checkStraightLine(int** cr, int crs, int* crcs){
    double k;
    for(int i=0; i< crs-1; ++i){
        if(0==i){
            k=(double)(cr[i+1][1]-cr[i][1])/(double)(cr[i+1][0]-cr[i][0]);
            k= -INFINITY==k?INFINITY:k;
            continue;
        }
        double next_k=(double)(cr[i+1][1]-cr[i][1])/(double)(cr[i+1][0]-cr[i][0]);
        next_k= -INFINITY==next_k?INFINITY:next_k;
        if(k!= next_k)
            return false;
        k=next_k;
    }

    return true;
}
