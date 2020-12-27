#define HSIZE 128

bool isIsomorphic(char * s, char * t){
    char shash[HSIZE] = {0};
    char thash[HSIZE] = {0};
    char scount,tcount;
    for(scount=0,tcount=0; *s&&*t; s++,t++){
        if(0==shash[*s])
            shash[*s]=++scount;

        if(0==thash[*t])
            thash[*t]=++tcount;

        if(shash[*s] != thash[*t])
            return false;
    }
    return true;
}
