/* 
PROCESSO AVALIATIVO N3 – ESTRUTURA DE DADOS 
 
EQUIPE 
NOMES: João Pedro Lazarim de Souza, Júlia Karolina Atanazio
 
CONSEGUIU CHEGAR NO RESULTADO? 
R: Parcialmente
 
SE NÃO, POR QUE NÃO CONSEGUIU CHEGAR NO RESULTADO? 
R.: Com os números ordenados e inversos, conseguimos chegar nos resultados esperados no bubble sort, insertion sort, selection sort e merge sort.
Com exceção da quantidade de comparações do selection sort (que é a mesma tanto para ordenados, invertidos e aleatórios), e da quantidade de trocas do merge sort (que é a mesma tanto para ordenados, 
invertidos e aleatórios), com os números aleatórios, o resultado não bate exatamente com o apresentado nos gráficos, tendo em vista que os números são aleatórios. O tempo de execução dos algoritmos também não bate 
com os apresentados nos gráficos, porém, em base de comparação entre os métodos (bubble, insertion, selection, merge e quick), segue um padrão parecido, com resultados bem próximos do esperado.
No quick sort, não conseguimos obter o resultado desejado. A fim de evitar o pior caso do quick sort  O(n2), o algoritmo particiona_random utiliza o pivotamento de um elemento aleatório, o que acaba gerando resultados 
aleatórios se tratando da contagem de trocas e comparações.
 
*/ 


#include <stdio.h> 
#include <time.h> 

#define TAMANHO 10000

// Variáveis para contar as comparações e trocas do merge sort e quick sort
int trocas_merge = 0, comparacoes_merge = 0, trocas_quick = 0, comparacoes_quick = 0;

// Prototipo de Função 
void geraNumero(int *vet, int op); 
void bubbleSort(int *vet); 
void insertionSort(int *vet);
void selectionSort(int *vet);
void intercala(int *vet, int inicio, int fim, int meio);
void mergeSort(int *vet, int inicio, int fim);
void realizaMerge(int *vet);
void troca(int *vet, int i, int j);
int particiona(int *vet, int inicio, int fim);
int particiona_random(int *vet, int inicio, int fim);
void quickSort(int *vet, int inicio, int fim);
void realizaQuick(int *vet);
void imprimirVetor(int *vet); 

int main (void){ 
    // Vetores Bubble Sort 
    int vetBubble1[TAMANHO];
    int vetBubble2[TAMANHO];
    int vetBubble3[TAMANHO];

    // Vetores Insertion Sort
    int vetInsertion1[TAMANHO];
    int vetInsertion2[TAMANHO];
    int vetInsertion3[TAMANHO];

    // Vetores Selection Sort
    int vetSelection1[TAMANHO];
    int vetSelection2[TAMANHO];
    int vetSelection3[TAMANHO];

    // Vetores Merge Sort
    int vetMerge1[TAMANHO];
    int vetMerge2[TAMANHO];
    int vetMerge3[TAMANHO];

    // Vetores Quick Sort
    int vetQuick1[TAMANHO];
    int vetQuick2[TAMANHO];
    int vetQuick3[TAMANHO];

    // Gerando valores Bubble Sort
    geraNumero(vetBubble1, 1);
    geraNumero(vetBubble2, 2);
    geraNumero(vetBubble3, 3);

    // Gerando valores Insertion Sort
    geraNumero(vetInsertion1, 1);
    geraNumero(vetInsertion2, 2);
    geraNumero(vetInsertion3, 3);

    // Gerando valores Selection Sort
    geraNumero(vetSelection1, 1);
    geraNumero(vetSelection2, 2);
    geraNumero(vetSelection3, 3);

    // Gerando valores Merge Sort
    geraNumero(vetMerge1, 1);
    geraNumero(vetMerge2, 2);
    geraNumero(vetMerge3, 3);

    // Gerando valores Quick Sort
    geraNumero(vetQuick1, 1);
    geraNumero(vetQuick2, 2);
    geraNumero(vetQuick3, 3);

    // Bubble Sort
    printf("\n\nBubble Sort\n");
    printf("\n----------------------------------- ");
    printf("\nOrdenados: ");
    bubbleSort(vetBubble1);
    printf("\n\nInvertidos: ");
    bubbleSort(vetBubble2);
    printf("\n\nAleatorios: ");
    bubbleSort(vetBubble3);
    printf("\n----------------------------------- ");

    // Insertion Sort
    printf("\n\nInsertion Sort\n");
    printf("\n----------------------------------- ");
    printf("\nOrdenados: ");
    insertionSort(vetInsertion1);
    printf("\n\nInvertidos: ");
    insertionSort(vetInsertion2);
    printf("\n\nAleatorios: ");
    insertionSort(vetInsertion3);
    printf("\n----------------------------------- ");

    // Selection Sort
    printf("\n\nSelection Sort\n");
    printf("\n----------------------------------- ");
    printf("\nOrdenados: ");
    selectionSort(vetSelection1);
    printf("\n\nInvertidos: ");
    selectionSort(vetSelection2);
    printf("\n\nAleatorios: ");
    selectionSort(vetSelection3);
    printf("\n----------------------------------- ");

    // Merge Sort
    printf("\n\nMerge Sort\n");
    printf("\n----------------------------------- ");
    printf("\nOrdenados: ");
    realizaMerge(vetMerge1);
    printf("\n\nInvertidos: ");
    realizaMerge(vetMerge2);
    printf("\n\nAleatorios: ");
    realizaMerge(vetMerge3);
    printf("\n----------------------------------- ");

    // Quick Sort
    printf("\n\nQuick Sort\n");
    printf("\n----------------------------------- ");
    printf("\nOrdenados: ");
    realizaQuick(vetQuick1);
    printf("\n\nInvertidos: ");
    realizaQuick(vetQuick2);
    printf("\n\nAleatorios: ");
    realizaQuick(vetQuick3);
    printf("\n----------------------------------- ");

    return 0; 
} 

// Função geração de números 
void geraNumero(int *vet, int op) { 
    int i, j; 

    switch (op) { 
        case 1: // Ordenados 
            for (i = 0; i < TAMANHO; i++) { 
                vet[i] = i + 1; 
            } 

            break; 

        case 2: //Invertidos 
            for (i = 0; i < TAMANHO; i++) { 
               vet[i] = TAMANHO-i; 
            } 

            break; 

        case 3: // Aleatórios 
            for (i = 0; i < TAMANHO; i++) { 
                vet[i] = (int) (rand() % TAMANHO); 
            } 

            break;
    }
} 

// Função ordenação bubble sort 
void bubbleSort(int *vet) { 
    int n, troca, i, aux, qtd_trocas, qtd_comparacoes; 

    n = 1; 
    troca = 1; 
    qtd_trocas = 0; 
    qtd_comparacoes = 0; 

    // Ponto do algoritmo para iniciar o tempo de execução 
    float tempo_inicial = clock(); 
    while (n <= TAMANHO && troca == 1) { 
        troca = 0; 
        for (i = 0; i <= TAMANHO-2; i++) { 
        	// Ponto do algoritmo para contar as comparações 
        	qtd_comparacoes++; 

            if (vet[i] > vet[i + 1]) { 
            	// Ponto do algoritmo para contar as trocas 
            	qtd_trocas++; 
                troca = 1; 
                aux = vet[i]; 
                vet[i] = vet[i + 1]; 
                vet[i + 1] = aux; 
            } 
        } 

        n = n + 1; 

    } 

    // Ponto do algoritmo para calcular o tempo de execução 
    float tempo_final = clock() - tempo_inicial; 
 
    // Saída de dados 
    printf("\nQuantidade de comparacoes: %i\n",qtd_comparacoes); 
    printf("Quantidade de trocas: %i\n",qtd_trocas); 
    printf("Tempo de execucao do algoritmo: %.3f",tempo_final/1000); 
}

// Função de ordenação insertion sort
void insertionSort(int *vet) { 
	int i, j, temp, qtd_trocas, qtd_comparacoes;
	qtd_trocas = 0;
    qtd_comparacoes = 0;
    
    // Ponto do algoritmo para iniciar o tempo de execução 
    float tempo_inicial = clock();
    for (i = 1; i < TAMANHO; i++) {
    	// Comparação
      	qtd_comparacoes++;
      	// Troca
      	qtd_trocas++;
      	j = i;     	
    	while ((j > 0) && (vet[j - 1] > vet[j])) {
    		if(vet[j-1]>vet[j]){
            	// Comparação
      			qtd_comparacoes++;
        	}
        temp = vet[j - 1];
        vet[j - 1] = vet[j];
        vet[j] = temp;
        j--;
        // Troca
      	qtd_trocas++;
    	}
    // Troca
    qtd_trocas++;
	}

    // Ponto do algoritmo para calcular o tempo de execução 
    float tempo_final = clock() - tempo_inicial; 
 
    // Saída de dados 
    printf("\nQuantidade de comparacoes: %i\n",qtd_comparacoes); 
    printf("Quantidade de trocas: %i\n",qtd_trocas); 
    printf("Tempo de execucao do algoritmo: %.3f",tempo_final/1000);
}

// Função de ordenação selection sort
void selectionSort(int *vet) {
	int i, j, menor, pos, eleito, qtd_trocas, qtd_comparacoes;
	qtd_trocas = 0;
	qtd_comparacoes = 0;
	
	// Ponto do algoritmo para iniciar o tempo de execução 
    float tempo_inicial = clock();
	for (i = 0; i <= TAMANHO - 2; i++) {
        // Comparação
		qtd_comparacoes++;
		eleito = vet[i];
		menor = vet[i + 1];
		pos = i + 1;
        // Troca
		qtd_trocas++;
		for (j = i + 2; j <= TAMANHO -1; j++) {
            // Comparação
			qtd_comparacoes++;
			if (vet[j] < menor) {
				menor = vet[j];
				pos = j;
			}
		}
	
		if (menor < eleito) {
			vet[i] = vet[pos];
			vet[pos] = eleito;
            // Troca
			qtd_trocas++;
		}
	}
	
	// Ponto do algoritmo para calcular o tempo de execução 
    float tempo_final = clock() - tempo_inicial; 
 
    // Saída de dados 
    printf("\nQuantidade de comparacoes: %i\n",qtd_comparacoes); 
    printf("Quantidade de trocas: %i\n",qtd_trocas); 
    printf("Tempo de execucao do algoritmo: %.3f",tempo_final/1000);
}

// Função de intercalação merge sort
void intercala(int *vet, int inicio, int fim, int meio) {
    int poslivre = inicio, iniciovetor1 = inicio, iniciovetor2 = meio + 1, i;
    int aux[TAMANHO];

    while (iniciovetor1 <= meio && iniciovetor2 <= fim) {
        if (vet[iniciovetor1] <= vet[iniciovetor2]) {
            aux[poslivre] = vet[iniciovetor1];
            iniciovetor1++;
            // Troca
            trocas_merge++;
            // Comparação
            comparacoes_merge++;
        } else {
            aux[poslivre] = vet[iniciovetor2];
            iniciovetor2++;
            // Troca
            trocas_merge++;
            // Comparação
            comparacoes_merge++;
        }
        poslivre++;
    }
    for (i = iniciovetor1; i <= meio; i++) {
        aux[poslivre] = vet[i];
        poslivre++;
        // Troca
        trocas_merge++;
    }
    for (i = iniciovetor2; i <= fim; i++) {
        aux[poslivre] = vet[i];
        poslivre++;
        // Troca
        trocas_merge++;
    }
    for (i = inicio; i <= fim; i++) {
        vet[i] = aux[i];
    }
}

// Função de ordenação merge sort
void mergeSort(int *vet, int inicio, int fim) {
    int meio;
    if (inicio < fim) {
        meio = (inicio + fim) / 2;
        mergeSort(vet, inicio, meio);
        mergeSort(vet, meio + 1, fim);
        intercala(vet, inicio, fim, meio);
    }
}

// Função para realizar o merge sort
void realizaMerge(int *vet) {
    comparacoes_merge = 0;
    trocas_merge = 0;
    // Ponto do algoritmo para iniciar o tempo de execução 
    float tempo_inicial = clock();

    mergeSort(vet, 0, TAMANHO - 1);
    
    // Ponto do algoritmo para calcular o tempo de execução 
    float tempo_final = clock() - tempo_inicial; 
    printf("\nQuantidade de comparacoes: %i\n",comparacoes_merge); 
    printf("Quantidade de trocas: %i\n",trocas_merge); 
    printf("Tempo de execucao do algoritmo: %.3f",tempo_final/1000);
 
}

// Função para trocar dois elementos
void troca(int *vet, int i, int j) {
	int aux = vet[i];
	vet[i] = vet[j];
	vet[j] = aux;
}

// Particiona e retorna o índice do pivÔ
int particiona(int *vet, int inicio, int fim) {
	int pivo, pivo_indice, i;
	
	pivo = vet[fim];
	pivo_indice = inicio;
    // Comparação
	comparacoes_quick++;
	for(i = inicio; i < fim; i++) {
		if(vet[i] <= pivo) {
			troca(vet, i, pivo_indice);
            // Troca
            trocas_quick++;
			pivo_indice++;
		}
	}
	
	troca(vet, pivo_indice, fim);
	return pivo_indice;
}

// Escolhe um pivô aleatório para evitar o pior caso do quicksort
int particiona_random(int *vet, int inicio, int fim) {
	int pivo_indice = (rand() % (fim - inicio + 1)) + inicio;
	troca(vet, pivo_indice, fim);
	return particiona(vet, inicio, fim);
}

// Função de ordenação quick sort
void quickSort(int *vet, int inicio, int fim) {
	if(inicio < fim) {
		int pivo_indice = particiona_random(vet, inicio, fim);
		
		quickSort(vet, inicio, pivo_indice - 1);
		quickSort(vet, pivo_indice + 1, fim);
	}
}

// Função para realizar o quick sort
void realizaQuick(int *vet) {
    comparacoes_quick = 0;
    trocas_quick = 0;

    // Ponto do algoritmo para iniciar o tempo de execução 
    float tempo_inicial = clock();
    quickSort(vet, 0, TAMANHO - 1);
    
    // Ponto do algoritmo para calcular o tempo de execução 
    float tempo_final = clock() - tempo_inicial; 
    printf("\nQuantidade de comparacoes: %i\n",comparacoes_quick); 
    printf("Quantidade de trocas: %i\n",trocas_quick); 
    printf("Tempo de execucao do algoritmo: %.3f",tempo_final/1000);
}

// Função impressão do vetor 
void imprimirVetor(int *vet) { 
    int i; 

    for(i = 0; i < TAMANHO; i++) { 
        printf("%i, ", vet[i]); 
        if ((i+1)%14 == 0){ 
            printf("\n"); 
        } 
    } 
} 
