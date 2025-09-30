#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int valor;
  struct node *ponteiro;
} node;

void inserir(node **head, int valor);
void imprime(node *head);

int main()
{

  node * lista=NULL;

  inserir(&lista,4); 
  inserir(&lista,6); 
  inserir(&lista,8); 
  imprime(lista);
}


void inserir(node** head,int valor){

  node *novoNo = malloc(sizeof(node));

  novoNo->valor = valor;
  novoNo->ponteiro = *head;
  *head = novoNo; 
}

void imprime(node *head){

  while(head != NULL){
    printf("Val: %d;",head->valor);
    head = head->ponteiro;
  }
  printf("\n");

}