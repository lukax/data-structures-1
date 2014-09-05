#include <stdio.h>
#include "linkedlist_simple.h"



List *list_init(){
	return NULL;
}

List *list_add(List *list, int data){
	List *lnew = (List *)malloc(sizeof(List));
	lnew->data = data;
	lnew->next = NULL;

	if (list == NULL)
		return lnew;

	List *llast = list;
	while (llast->next != NULL){
		llast = llast->next;
	}
	llast->next = lnew;
	return list;
}

List *list_remove(List *list, int data){
	if (list == NULL)
		return list;
	if (list->data == data)
		return list->next;

	List *llast = list;

	while (llast->next != NULL){
		if (llast->next->data == data){
			llast->next = llast->next->next;
			break;
		}
		llast = llast->next;
	}
	return list;
}

void list_print(List *list){
    List *l;
	for (l = list; l != NULL; l = l->next){
		printf("%d->", l->data);
	}
	printf("|\n");
}
