// Código mergeSort em C++, que ordena um vetor de 8 elementos.
// Cédigo reproduzido da aula de Estrutura de Dados ministrada pelo professora Myrna Amorim


#include <iostream>
using namespace std;

void intercala(int A[], int inicio, int meio, int fim){
    int i, aux[8], posLivre = inicio, inicioA1 = inicio, inicioA2 = meio + 1;

    while (inicioA1 <= meio && inicioA2 <= fim){
        if(A[inicioA1] <= A[inicioA2]){
            aux[posLivre] = A[inicioA1];
            inicioA1++;
        } else {
            aux[posLivre] = A[inicioA2];
            inicioA2++;
        }
        posLivre++;
    }
    for(i = inicioA1; i <= meio; i++){
        aux[posLivre] = A[i];
        posLivre++;
    }
    for(i = inicioA2; i <= fim; i++){
        aux[posLivre] = A[i];
        posLivre++;
    }
    for(i = inicio; i <= fim; i++){
        A[i] = aux[i];
    }
}

void mergesort(int A[], int inicio, int fim){
    int meio;
    if (inicio < fim){
        meio = (inicio + fim) / 2;

        mergesort(A, inicio, meio);
        mergesort(A, meio + 1, fim);
        intercala(A, inicio, meio, fim);
    }
}

int main() {
    int A[8], i;
    for (i = 0; i < 8; i++) {
        cout << "Digite o " << i + 1 << "o. numero: ";
        cin >> A[i];
    }

    mergesort(A, 0, 7);

    for (i = 0; i < 8; i++) {
        cout << A[i] << "\t";
    }
}