#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
char frase[50], cf[50];
int i=0, y=0, t=0, s=0, x=0;
printf("Digite seu possível palíndromo (usando somente letras minúsculas): \n");
scanf("%[^\n]", frase);
strlen(frase);
for(x=0; frase[x] != '\0'; x++){
    while(frase[x] == ' ' || frase[x] == '-' || frase[x] == ',' || frase[x] == '.'){
        for(y = x; frase[y] != '\0'; y++)
            frase[y] = frase[y+1];
    }
}
t = strlen(frase);
for(i=0; i < strlen(frase); i++){
    cf[i] = frase[t-1];
    t--;
}
cf[i] = '\0';
t = strlen(frase);
for(i = 0; i < t; i++){
    if(frase[i] == cf[i])
        s++;
}
if(t == s)
    printf("É Palindromo\n");
else
    printf("Não é Palindromo");
return 0;
}