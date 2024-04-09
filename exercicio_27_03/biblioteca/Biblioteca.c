#include <stdio.h>

typedef struct {
    char titulo[100];
    char autor[100];
    int anoPublicacao;
    int numeroCopiasDisponiveis;
} Livro;

int emprestarCopiaLivro(Livro *novolivro) {
    if (novolivro->numeroCopiasDisponiveis > 0) {
        novolivro->numeroCopiasDisponiveis--;
        printf("Cópia emprestada com sucesso!\n");
        return 1; // sucesso
    } else {
        printf("Não há cópias disponíveis para empréstimo.\n");
        return 0; // falha
    }
}

int devolverCopiaLivro(Livro *novolivro) {
    novolivro->numeroCopiasDisponiveis++;
    printf("Cópia devolvida com sucesso!\n");
    return 1; // sucesso
}

int verificarDisponibilidade(Livro *novolivro) {
    if (novolivro->numeroCopiasDisponiveis > 0) {
        printf("Há cópias disponíveis.\n");
        return 1; // há cópias disponíveis
    } else {
        printf("Não há cópias disponíveis.\n");
        return 0; // não há cópias disponíveis
    }
}

void obterInformacao(Livro *novolivro) {
    printf("Título: %s\n", novolivro->titulo);
    printf("Autor: %s\n", novolivro->autor);
    printf("Ano de Publicação: %d\n", novolivro->anoPublicacao);
    printf("Número de Cópias Disponíveis: %d\n", novolivro->numeroCopiasDisponiveis);
}

int main() {

    Livro livro1 = {"Machado de Assis", "Viúva Negra", 2000, 3};

    printf("Informações do livro:\n");
    obterInformacao(&livro1);

    emprestarCopiaLivro(&livro1);
    verificarDisponibilidade(&livro1);
    devolverCopiaLivro(&livro1);

    return 0;
}
