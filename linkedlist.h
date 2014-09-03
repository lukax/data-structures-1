#include <stdlib.h>

typedef struct List_ {
	int data;
	struct List_ *next;
} List;

List *list_init();

void list_destroy(List *list);

List *list_ins(List *list, int data);

List *list_rem(List *list, int data);

void list_print(List *list);

