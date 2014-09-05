#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

struct Stack_ {
    int size;
    int elems[50];
};

Stack *stack_init(){
    Stack *s = (Stack *) malloc(sizeof(Stack));
    s->size = 0;
    return s;
}

void stack_push(Stack *s, int elem){
    s->elems[s->size++] = elem;
}

int stack_pop(Stack *s){
    return s->elems[--s->size];
}

void stack_free(Stack *s){
    free(s);
}

int stack_isemtpty(Stack *s){
    return (s->size == 0);
}

void stack_print(Stack *s){
    printf("|");
    while(!stack_isemtpty(s)){
        printf("<-%d", stack_pop(s));
    }
    printf("\n");
}
