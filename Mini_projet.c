#include <stdio.h>

int main(void){
    float T[100],moy,S,max,min, v,w, moy2,moy3;
    int N,i,j,pos,choix;
    
    printf("combien des notes:");
    scanf("%d",&j);
    
    for(i=0;i<j;i++){
        printf("note %d:",i+1);
        scanf("%f",&T[i]);
        
    }
    S=0;
    for(i=0;i<=j;i++){
        S=S+T[i];
        moy=S/j;
        
    }
    moy=S/j;
        
    
    max=T[0];
    for(i=0;i<j;i++){
        if(max<T[i])
        max=T[i];
    }
    min=T[0];
    for(i=1;i<j;i++){
        if(min>T[i])
        min=T[i];
    }
    printf("le moyenne: %.2f\n",moy);
    printf("la note max :%.2f\n",max);
    printf("la note min :%.2f\n",min);
    if(moy>10){
        printf("admis\n");
    }
    else printf("non admis\n");
    printf("1--modifier une note: \n");
    printf("2--suprimer une note:\n");
    scanf("%d",&choix);
    switch (choix)
    {
        case 1: printf("quelle note voulez vous modifier?\n");
                scanf("%d",&N);
                printf("entrer la nouvelle note\n");
                scanf("%f",&v);
                T[N-1]=v;
                S=0;
                for(i=0;i<=j;i++){
                S=S+T[i];}
                moy2=S/j;
                printf("le moyenne: %.2f\n",moy2);
                break;
        case 2: do {printf("quelle note vous voulez suprimer?\n");
                scanf("%d",&pos);
                }
                while((pos<=0 || pos>j));
                for (i=pos;i<j;i++)
                {
                T[i]=T[i+1];
                }
                T[pos-1]=T[i];
                j--;
                S=0;
                for(i=0;i<=j;i++){
                S=S+T[i];
                }
                moy3=S/(j);
                printf("le moyenne: %.2f\n",moy3);
                break;
                }
   

    
    
    
    

    return 0;

}