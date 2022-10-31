#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//doubly linked list data structure ???
typedef struct TreeNode {
    int val;
    struct TreeNode* parent;
    struct TreeNode* tLeft;
    struct TreeNode* tRight;
} Node;

Node* init(int val) {
    Node* a = (Node*)malloc(sizeof(Node));
    a->val = val;
    a->parent = NULL;
    a->tLeft = NULL;
    a->tRight = NULL;
    return a;
}

//insert Child node to the 1 side of Parent node (tP)
void insertLeft(Node* tP, Node* tC) {
    tP->tLeft = tC;
    tC->parent = tP;
}

void insertRight(Node* tP, Node* tC) {
    tP->tRight = tC;
    tC->parent = tP;
}

int isRoot(Node* t) {
    return t->parent == NULL;
}

int isLeaf(Node* t) {
    return (t->tLeft == NULL && t->tRight == NULL);
}

//remove a leaf
void rem_leaf(Node* t) {
    Node* temp = t->parent;
    if (isLeaf(t)) {
        if (temp->tLeft->val == t->val) {
            temp->tLeft = NULL;
            free(t);
        }
        else {
            temp->tRight = NULL;
            free(t);
        }
    }
}

int* rand_int(int n) {  // array of size n with random numbers from 0-99
    int* rand_arr = (int*)malloc(sizeof(int)*n);
    for(int i = 0; i < n; i++) {
        rand_arr[i] = rand() % 11;
    }
    return rand_arr;
}

int* lvs_arr(int* int_arr, int size) {
    int depth = ceil(log2(size) + 1);  // length of leaves array
    int lvs_num = pow(2,depth - 1);

    int* temp = (int*)malloc(sizeof(int) * lvs_num);

    for (int i = 0; i < size; i++) {
        temp[i] = int_arr[i];
    }

    for (int j = size; j < lvs_num; j++) {
        temp[j] = 100;
    }

    return temp;
}

int smaller(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}

//create a perfect 0 Tree with depth = h
Node* build_Tree(int h) {
    Node* root = init(0);
    if (h == 1) {
        return root;
    }
    
    Node* left = build_Tree(h-1);
    insertLeft(root, left);
    Node* right = build_Tree(h-1);
    insertRight(root, right);
    return root;    
}

int INDEX = 0;
void lvs_insert(Node* root, int* lvs_arr) {
    if (root == NULL) {
        return;
    }
    if (isLeaf(root)) {
        root->val = lvs_arr[INDEX];
        INDEX++;
        return;
    }
    lvs_insert(root->tLeft, lvs_arr);
    lvs_insert(root->tRight, lvs_arr);
}

int fill_tree(Node* root) {   
    if (isLeaf(root)) {
        return root->val;
    }
    root->val = smaller(fill_tree(root->tLeft), fill_tree(root->tRight));
}

void display_NLR(Node* t) {
    if (t == NULL) {
        return;
    }
    printf("%d ", t->val);
    display_NLR(t->tLeft);
    display_NLR(t->tRight);
}

void search_node(Node* root, int val) {
    if(root == NULL) {
        return;
    }
    if(root->val == val) {
        display_NLR(root);
        return;
    }
    search_node(root->tLeft, val);
    search_node(root->tRight, val);
}

int main() {
    int n;
    printf("Give array length: ");
    scanf("%d", &n);
    int height = ceil(log2(n) + 1);
    
    // Intializes random number generator
    time_t tm;
    srand((unsigned) time(&tm));
    int* arr = rand_int(n);
    printf("Initial random array:\n");
    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }

    int* leaves = lvs_arr(arr, n);
    Node* root = build_Tree(height);
    lvs_insert(root, leaves);
    fill_tree(root);

    printf("\nCreated tree: \n"); 
    display_NLR(root);
    printf("\nSubtree of node with value 1: \n");
    search_node(root, 1);
    return 0;
}
