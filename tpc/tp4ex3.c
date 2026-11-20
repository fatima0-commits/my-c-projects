#include <stdio.h>
int main(){
    char phrase[100],ch;
    int c=0,i=0;
    printf("donner une phrase terminon par un point:");
    scanf("%c",&ch);
    while(ch!='.'&& i<=100){
        phrase[i]=ch;
        i++;
        scanf("%c",&ch);
    }
    while (phrase[i]!= '.'&& phrase[i]!='\0'){
        if (phrase[i]=='e'|| phrase[i]=='E'){
            while(phrase[i+1]=='l'|| phrase[i+1]=='L'){
                c++;
                i++;
            }
        }  
        i++;                 
    }        
    printf("le nombre de la lettre 'L' apres la lettre 'E' est:%d",c); /*this only works if the ohrase doesn't have spaces*/  
    return 0;
}