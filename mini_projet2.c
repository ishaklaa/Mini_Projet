#include <stdio.h>
typedef struct {
char nom[20];
char prenom[20];
char id[20];
float N;

}personne;
int main(){
    personne p[100];
    int i,j,n,V;
    float S,B,moy[100],moyg;
    
    

    printf("entrer le nombre des etudiants:");
    scanf("%d",&n);
    B=0;
    for (i=0;i<n;i++){
        printf("entrer le nom %d ",i+1);
        scanf("%s",p[i].nom);
        printf("entrer le prenom %d ",i+1);
        scanf("%s",p[i].prenom);
        printf("entrer le id %d ",i+1);
        scanf("%s",p[i].id);
        printf("entrer les notes \n");
        S=0;
        
        for(j=0;j<4;j++){  
        printf("note %d ",j+1);
        scanf("%f",&p[i].N);
        S=S+p[i].N;
        moy[i]=S/4;  
        
        }

        
        B=B+moy[i];
        moyg=B/n;

    } 
    for (i=0;i<n;i++){
        printf("le nom %s\n ",p[i].nom);
       
        printf("le prenom %s\n ",p[i].prenom);
        
        printf("le id %s\n ",p[i].id);
        
        for(j=0;j<4;j++){  
        printf("note %d:%f\n ",j+1,p[i].N);}
        printf("le moyenne de %s :%.2f\n",p[i].nom,moy[i]);
        
    }
        
    
    
    printf("le moyenne general: %.2f",moyg);
  
    


    return 0;
}