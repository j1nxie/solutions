#include <iostream>

typedef struct _Node {
	int data;
	struct _Node *pnext;
} Node;

typedef struct _List {
	int size;
	Node *pHead;
} List;

void init_list(List *I) {
	I->size = 0;
	I->pHead = NULL;
}

Node* init_node(int val) {
	Node *node = (Node *) malloc(sizeof *node);
	node->data = val;
	return node;
}

bool is_empty(List *I) {
	return (I->size == 0);
}

void insert_node(Node *pnew, Node *ptr, List *I) {
	if (is_empty(I)) {
		I->size++;
		I->pHead = pnew;
	} else {
		pnew->pnext = ptr->pnext;
		ptr->pnext = pnew;
		I->size++;
	}
}

bool check_triangle(int a, int b, int c) {
	if (a + b > c && a + c > b && b + c > a) {
		return true;
	}
	
	return false;
}

int main() {
	int n;
	std::cin >> n;

	List *I;
	init_list(I);

	for (int i = 0; i < n; ++i) {
		int a;
		std::cin >> a;
		Node* node = init_node(a);
		insert_node(node, I->pHead, I);
	}

	return 0;
}
