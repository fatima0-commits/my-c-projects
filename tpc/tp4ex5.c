#include<stdio.h>
int main (){
    int i,nbr_grp,nbr_etu_1,nbr_etu_sup10;
    float somme_grp,somme_classe=0,moyenne_grp,moyenne_classe,n,max=0;
    printf("donner le nombre des groupes :");
    scanf("%d",&nbr_grp);
    for(i=1;i<=nbr_grp;i++){
        somme_grp=0;
        nbr_etu_1=0;
        nbr_etu_sup10=0;
        do{
            printf("donner la note :");
            scanf("%f",&n);
            if(n>=10){
                nbr_etu_sup10++;
            }
            somme_grp+=n;
            nbr_etu_1++;/*nbr_etu_1 signife nombre d'etudiants dans le groupe */
        }while(n!=-1);
        moyenne_grp=(somme_grp -1)/(nbr_etu_1 -1);/*on soustrait 1 pour ne pas compter le -1 dans la moyenne */
        if (moyenne_grp>max){
            max=moyenne_grp;
        }
        somme_classe+=moyenne_grp;

        printf("la moyenne du groupe %d est : %.2f\n",i,moyenne_grp);
        printf("le nombre d'etudiants ayant une note supérieure à 10 dans le groupe %d est : %d\n",i,nbr_etu_sup10);

        

        
    }
    moyenne_classe=somme_classe/nbr_grp;
    printf("la moyenne de la classe est : %.2f\n",moyenne_classe);
    printf("le groupe avec la meilleur moyenne est groupe numero %d",i);
    return 0;
}  