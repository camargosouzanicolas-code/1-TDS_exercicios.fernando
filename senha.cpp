#include <stdio.h>

int main()
{
    int senha= 0;// criando um variavel de senha 
    printf("digete uma senha:\n");//pedindo para digitar
    scanf("%d", &senha);//digitando uma senha
    
    //repetir ate que tentativa seja < 10000 ou seja 9999.
    for(int tentativa = 0; tentativa<10000; tentativa++){
        if(tentativa == senha){
            //imprime a tentativa
            printf("sua senha é: %d",tentativa);
        }
    }
}
