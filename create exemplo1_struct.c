#include <stdio.h>
#include <string.h>
struct Aluno {
    char nome[100];
    float nota1, nota2, nota3, nota4;
};

int main() {
    struct Aluno aluno; 

    strcpy(aluno.nome, "joão da silva");
    aluno.nota1 = 7.5;
    aluno.nota2 = 8.5;
    aluno.nota3 = 6.5;
    aluno.nota4 = 9.0;

    printf("Nome: %s\n", aluno.nome);
    printf("Nota 1: %.2f\n", aluno.nota1);
    printf("Nota 2: %.2f\n", aluno.nota2);
    printf("Nota 3: %.2f\n", aluno.nota3);
    printf("Nota 4: %.2f\n", aluno.nota4);

    return 0;
}
