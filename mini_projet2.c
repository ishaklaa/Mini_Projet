#include <stdio.h>
typedef struct {
char nom[20];
char prenom[20];
int id;
float N;

}personne;
int main(){
    personne p[100];
    int i,j,n;
    float S,moy[100],moyg;

    printf("entrer le nombre des etudiants:");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("entrer le nom %d ",i+1);
        scanf("%s",p[i].nom);
        printf("entrer le prenom %d ",i+1);
        scanf("%s",p[i].prenom);
        printf("entrer le id %d ",i+1);
        scanf("%d",&p[i].id);
         printf("entrer les notes \n");
        S=0;

        for(j=0;j<4;j++){
       
        printf("note %d ",j+1);
        scanf("%f",&p[i].N);
        S=S+p[i].N;
        moy[i]=S/4;
        
        }
        
        printf("le moyenne %d :%.2f\n",i+1,moy[i]);
        moyg=moy[i];
        moyg=(moyg+moy[i])/n;


    }
    
    
    printf("le moyenne general: %.2f",moyg);

    


    return 0;
}