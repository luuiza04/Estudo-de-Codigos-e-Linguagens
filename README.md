# Estudo de Códigos e Linguagens

Repositório pessoal onde guardo exercícios e estudos das disciplinas de Ciência da Computação no CEFET/RJ.

## Estrutura

### `estrutura-de-dados/` (C++)
- `mergesort.cpp`: implementação do algoritmo de ordenação MergeSort, reproduzida da aula de Estrutura de Dados.
- `exemplo.cpp`: primeiro código do repositório, usado para testar a compilação.

### `exercicios-arquivos-c/` (C)
Exercícios da disciplina de Arquivos, com leitura de arquivos texto e binários.
- `conta-linhas`: conta as linhas de um arquivo.
- `conta-ocorrencias`: conta quantas vezes cada caractere aparece em um arquivo.
- `busca-binaria`: busca um endereço pelo CEP em um arquivo binário ordenado, usando busca binária.
- `gerar-indice`: gera um arquivo de índice (CEP → posição no arquivo) e ordena com `qsort`.
- `busca-indice`: busca um endereço pelo CEP usando o arquivo de índice.

## Como compilar

```bash
# C
gcc -x c exercicios-arquivos-c/conta-linhas -o conta-linhas

# C++
g++ estrutura-de-dados/mergesort.cpp -o mergesort
```
