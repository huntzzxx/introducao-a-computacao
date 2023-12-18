#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int numero[100], c[100], m, a, p;
a=0;
m=0;
p=0;
srand( (unsigned)time(NULL) );
for(int i=0; i<100; i++)
    numero[i] = rand() % 51;
for(int i=1; i<100; i++){
    for(int j=0; j<100-i; j++){
        if(numero[j]>numero[j+1]){
            a = numero[j];
            numero[j] = numero[j+1];
            numero[j+1] = a;
        }
    }
}
for(int i=0; i<100; i++){
    printf("%d ", numero[i]);
    c[i] = 0;
}
for(int i=0;i<100;i++){
    for(int j=1;j<100;j++) {
        if (numero[i] == numero[j]) {
            c[i] = c[i] + 1;
        }
    }
}
for(int i=0; i<100; i++){
    if(numero[i] > m)
        m = c[i];
}
for(int i=0; i<100; i++){
    if(c[i] == m){
        p = i;
    }
}
printf("\nO número que mais se repete é: %d\n", numero[p]);
return 0;
}