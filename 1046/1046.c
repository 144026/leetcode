
int cmp(void * pa, void* pb){
    return *(int*)pa - *(int*)pb;
}

int lastStoneWeight(int* stones, int stonesSize){

    for(int i=0;i<stonesSize -1; i++){
        qsort(stones,stonesSize,sizeof(int),cmp);
        stones[stonesSize-1]-=stones[stonesSize-2];
        stones[stonesSize-2]=0;
    }
    return stones[stonesSize-1];
}
