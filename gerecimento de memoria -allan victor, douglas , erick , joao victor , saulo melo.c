#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_MEMORIA 256
#define TAMANHO_BLOCO 4

void limparTela() {
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif
}

void implementarBestFit(int tamanhoBloco[], int blocos, int tamanhoProcesso[], int processos) {
    // Isso irá armazenar o id do bloco alocado para um processo
    int alocacao[processos];
    int ocupado[blocos];

    // inicialmente, atribuindo -1 a todos os índices de alocação
    // significa que nada está alocado atualmente
    int i;
    for (i = 0; i < processos; i++) {
        alocacao[i] = -1;
    }
	
    for (i = 0; i < blocos; i++) {
        ocupado[i] = 0;
    }

    // escolher cada processo e encontrar blocos adequados
    // de acordo com seu tamanho e atribuir a ele
    
    for (i = 0; i < processos; i++) {
        int indiceColocado = -1;
        int j;
        for (j = 0; j < blocos; j++) {
            if (tamanhoBloco[j] >= tamanhoProcesso[i] && !ocupado[j]) {
                // colocá-lo no primeiro bloco que couber o processo
                if (indiceColocado == -1)
                    indiceColocado = j;

                // se algum bloco futuro for menor do que o bloco atual onde
                // o processo está alocado, mude o bloco e, portanto, o indiceColocado
                // isso reduz o desperdício, portanto, melhor ajuste
                else if (tamanhoBloco[j] < tamanhoBloco[indiceColocado])
                    indiceColocado = j;
            }
        }

        // Se conseguimos encontrar um bloco para o processo
        if (indiceColocado != -1) {
            // alocar este bloco j para o processo p[i]
            alocacao[i] = indiceColocado;

            // tornar o status do bloco como ocupado
            ocupado[indiceColocado] = 1;
        }
    }

    printf("\nNúmero do Processo\tTamanho do Processo\tNúmero do Bloco\n");
    
    for (i = 0; i < processos; i++) {
        printf("%d \t\t\t\t %d \t\t\t\t", i+1, tamanhoProcesso[i]);
        if (alocacao[i] != -1)
            printf("%d\n", alocacao[i] + 1);
        else
            printf("Não Alocado\n");
    }
}

int main() {
    int tamanhoBloco[TAMANHO_MEMORIA / TAMANHO_BLOCO]; // Array para armazenar o tamanho de cada bloco
    int tamanhoProcesso[TAMANHO_MEMORIA / TAMANHO_BLOCO]; // Array para armazenar o tamanho de cada processo
    int processos = 0; // Número de processos

    int escolha;
    do {
        limparTela();
        printf("\nMenu:\n");
        printf("1. Alocar processo\n");
        printf("2. Desalocar processo\n");
        printf("3. Mostrar estado atual da memória\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1: {
    			int id_processo, tamanho;
    			limparTela();
    			printf("Digite o ID do processo: ");
    			scanf("%d", &id_processo);
    			// Verifica se o ID do processo já está em uso
   				 int id_em_uso = 0;
   				 int i;
    				for (i = 0; i < processos; i++) {
        				if (id_processo == tamanhoProcesso[i]) {
        				    id_em_uso = 1;
            				break;
       				 }
    			}
    			
    if (id_em_uso) {
        printf("O ID do processo já está em uso. Escolha um ID diferente.\n");
    } else {
        printf("Digite o tamanho do processo (em KB): ");
        scanf("%d", &tamanho);
        if (processos < TAMANHO_MEMORIA / TAMANHO_BLOCO) {
            tamanhoProcesso[processos] = id_processo;
            processos++;
        } else {
            printf("Memória cheia. Não é possível alocar mais processos.\n");
        }
    }
    break;
}

            case 2: {
                int id_processo;
                limparTela();
                printf("Digite o ID do processo para desalocar: ");
                scanf("%d", &id_processo);
                // Desalocar processo, se existir
                int i;
                for (i = 0; i < processos; i++) {
                    if (i == id_processo - 1) {
                        tamanhoProcesso[i] = 0;
                        break;
                    }
                }
                break;
            }
            case 3: {
                // Inicializar o tamanho de cada bloco como o tamanho do bloco padrão
                int i ;
                for (i = 0; i < TAMANHO_MEMORIA / TAMANHO_BLOCO; i++) {
                    tamanhoBloco[i] = TAMANHO_BLOCO;
                }
                // Atualizar o tamanho de cada bloco para o tamanho dos processos alocados
                
                for (i = 0; i < processos; i++) {
                    if (tamanhoProcesso[i] != 0) {
                        implementarBestFit(tamanhoBloco, TAMANHO_MEMORIA / TAMANHO_BLOCO, tamanhoProcesso, processos);
                        break;
                    }
                }
                break;
            }
            case 4:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
        printf("Pressione Enter para continuar...");
        while(getchar() != '\n'); // Limpar o buffer de entrada
        getchar(); // Esperar pelo Enter
    } while (escolha != 4);

    return 0;
}

