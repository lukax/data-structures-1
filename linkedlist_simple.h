typedef struct List_ List;
struct List_ {
	int data;
	struct List_ *next;
};

List *list_init();
void list_destroy(List *l);
List *list_add(List *l, int data);
List *list_remove(List *l, int data);
void list_print(List *l);

