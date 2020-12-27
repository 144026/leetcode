int cmp(void* pa, void* pb){
    return *(int*)pa - *(int*)pb;
}

int findContentChildren(int* g, int gSize, int* s, int sSize){
    qsort(g,gSize,sizeof(int),cmp);    
    qsort(s,sSize,sizeof(int),cmp);    

    int ct=0;
    for(int j=0; ct<gSize&&j<sSize;){
        if(g[ct] <= s[j++])
            ++ct;
    }
    
    return ct;
}
