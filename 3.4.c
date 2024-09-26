#include <stdio.h>

int main(void)
{
    char nome, sesso;
    printf(" inserisci il nome della persona: ");
    scanf("%c", &nome);
    printf("sei maschio o femmina? digita (m o f):  ");
    scanf("%s", &sesso);
    if(sesso == 'm'){
        printf("egregio signor %c", nome);
    }
    else {
        printf("gentilissima signora %c", nome);
    }
}