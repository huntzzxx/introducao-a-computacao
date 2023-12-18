#include<stdio.h>
    int main() {
    int x;
    for(x=-1; x<=10; x++){
        if(x < 5)
            continue;
        else
            break;
            printf("Brasil");
}
return 0;
}

//Solução Questão 1: Nenhuma vez, o "printf" se encontra na linha 15, uma linha abaixo do "Break", logo
//o programa se encerrará antes de chegar ao "printf".