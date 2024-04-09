// Define os tipos de peças
typedef enum {
    PEAO,
    TORRE,
    CAVALO,
    BISPO,
    RAINHA,
    REI,
    VAZIO
} TipoPeca;

// Define uma estrutura para uma peça
typedef struct {
    TipoPeca tipo;
    int cor; // 0 para branco, 1 para preto
} Peca;

// Define uma estrutura para uma posição no tabuleiro
typedef struct {
    int linha;
    int coluna;
} Posicao;

// Define uma estrutura para o tabuleiro
#define TAMANHO_TABULEIRO 8

typedef struct {
    Peca pecas[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
} Tabuleiro;

// Define uma estrutura para um jogador
typedef struct {
    char nome[50];
    int pontuacao;
} Jogador;

// Define uma estrutura para representar o jogo de xadrez
typedef struct {
    Jogador jogador1;
    Jogador jogador2;
    Tabuleiro tabuleiro;
    int turno; // 0 para jogador1, 1 para jogador2
    // Outros campos necessários para o controle do jogo
} JogoXadrez;
