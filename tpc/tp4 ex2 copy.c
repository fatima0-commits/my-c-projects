#include <stdio.h>
int main(){
    int n;
    float somme=0,nbr=0,a;
    do{
        printf("donner un nombre:");
        scanf("%f",&a);
        nbr++;
        somme+=a;
    }while(a!=0);
    nbr--; /*pour ne compter pas le 0*/
    printf("la moyen de ces nombres est:%.2f",somme/nbr);
    return 0;
}