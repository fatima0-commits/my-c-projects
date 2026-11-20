#include<stdio.h>
int main(){
    int n,T[50],i,temp,max;
    float moitier_tab;
    do{
        printf("donner une taille de votre tableau inferieure a 50 :");
        scanf("%d",&n);
    }while(n>50 || n<1);/* on controle la saisie*/
    for (i=0;i<n;i++){
        printf("doner T[%d] :",i);
        scanf("%d",&T[i]);
        printf("T[%d] est %d :",i,T[i]);
    }
    moitier_tab=n/2;
    for(i=0;i<moitier_tab;i++){
        temp=T[i];
        T[i]=T[n-1-i];
        T[n-1-i]=temp;
    }
    for (i=0;i<n;i++){
        printf("T[%d] = %d \n",i,T[i]);
    }
    max=T[0];
    for(i=1;i<n;i++){
        if (T[i]>max){
            max=T[i];
        }
    }
    printf("le max est :%d",max);
}
    

