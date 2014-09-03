#include <stdio.h>
#include "linkedlist.h"

int main(){
	List *l = list_init();
	l = list_ins(l, 5);
	l = list_ins(l, 6);
	l = list_ins(l, 9);
	l = list_ins(l, 1);
	list_print(l);
	l = list_rem(l, 5);
	l = list_rem(l, 9);
	list_print(l);

	getchar();
	return 0;
}

List *list_init(){
	return NULL;
}

List *list_ins(List *list, int data){
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

List *list_rem(List *list, int data){
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
	for (List *l = list; l != NULL; l = l->next){
		printf("%d->", l->data);
	}
	printf("\n");
}
