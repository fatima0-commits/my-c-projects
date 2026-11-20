#include<stdio.h>
int main () {
    float d,p,pt;
    int a;
    printf("donner votre age:");
    scanf("%d",&a);
    printf("donner la distance en km:");
    scanf("%f",&d);
    p=d*0.35;
    if(d>=100 && d<=300){
        pt=p-(p*0.1);
    }
    else if(d>300){
        pt=p-(p*0.15);}
    else pt=p;
    if (a<=18){
        pt=pt-(pt*0.25);}
    printf("le prix de ton voyage est:%.2f dh\n",pt);  
    return 0;
}