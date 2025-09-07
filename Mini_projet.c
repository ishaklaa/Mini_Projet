#include <stdio.h>

int main(void){
    float T[10],moy,S,max,min;
    int N,i,j;
    
    printf("entrer la note\n");
    
    for(i=0;i<=9;i++){
        printf("note %d:",i+1);
        scanf("%f",&T[i]);
        
    }
    S=0;
    for(i=0;i<=9;++i){
        S=S+T[i];
        moy=S/20;
        
    }
    
    max=T[0];
    for(i=0;i<=9;i++){
        if(max<T[i])
        max=T[i];
    }
    min=T[0];
    for(i=1;i<=9;i++){
        if(min>T[i])
        min=T[i];
    }
    printf("%.2f\n",moy);
    printf("la note max :%.2f\n",max);
    printf("la note min :%.2f\n",min);
    if(moy>10){
        printf("admis");
    }
    else printf("non admis");


   
    return 0;

}