
#include <stdio.h>
int main(){
        
    
        int num;
        printf("Escolha uma opção:\n1 - Mostrar o nome do estudante \n2 - Mostrar a matrícula \n3 - Mostrar o curso \n4 - Sair \n");
        scanf("%d",&num);
        switch(num)
        {
            case 1:
                printf("Nome: Géssica Camilla de Araújo Rodrigues");
                break;

            case 2:
                printf("Matrícula: 202312345");
                break;

            case 3:
                printf("Curso: Ciência da Computação");
                break;

            case 4:
                printf("Tchau!");
                break;

            default:
                printf("Você digitou uma opção invalida.");
        }
        
        
        return 0;
}               