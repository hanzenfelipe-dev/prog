#include <stdio.h>


    typedef struct {
        char timeum[50];
        char timedois[50];
    int gols1;
    int gols2;
    
    }placar;
    
    int main(){
        
        placar p;
        printf("escolha o nome do time 1:");
        scanf("%49s", p.timeum);
       
        printf("escola o nome do time 2: ");
        scanf("%49s", p.timedois);
        
        printf("quantos gols o time 1 fez?");
        scanf("%d", &p.gols1);
        
        printf("quantos gols o time 2 fez?");
        scanf("%d", &p.gols2);
        
        if (gols1 > gols2) {
            printf("time 1 venceu")
    }
    
    
  