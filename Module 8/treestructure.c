#include <stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* left;
    struct node* right;  
}node_t;

typedef struct tree{
    node_t* root;
    int numNodes;
}tree_t;

// creating a tree
tree_t* createTree(){
    tree_t* t;
    //t=(tree_t*)malloc(sizeof(tree_t));
    if (t == NULL){
        printf("Memory is not allocated\n");
        exit(1);
    }
    t->root=NULL;
    return t;
}

// adding to a tree
node_t* addNode(tree_t* t, int data){
    tree_t* t = (tree_t*)malloc(sizeof(tree_t));
    if (t == NULL) return 0;
    
    node_t* newNode = makeNode(data);

    if (t-> root == NULL){
        t->root = newNode;
        return 1;
    }
    addHelper(t->root, newNode);
}

// helper function
int addHelper(node_t* node, node_t* newNode){
    if (newNode->data < node->data){
        if(node->left == NULL){
            node->left = newNode;
        }else{
            addHelper(node->left, newNode);
        }
    } else if (newNode->data > node->data){
        if(node->right == NULL){
            node->right = newNode;
        }else{
            addHelper(node->right, newNode);
        }
    }
}

/*---free the tree nodes----*/
void freenode(node_t *p){

    if(p!=NULL){
        freenode(p->left);
        freenode(p->right);
        free(p);
    }
}

//print a tree
void print(tree_t* t){
    if (t == NULL)return;
    print_helper(t->root);
}

void print_helper(node_t* n){
    if (n==NULL)return;
    print_helper(n->left);
    printf("%d", n->data);
    print_helper(n->right);
}

int main(){
    tree_t* b = createTree();
    b->root = addNode(b, 60);
    b->root->left = addNode(b, 40);
    b->root->right = addNode(b, 70);
    b->root->left->left = addNode(b, 30);
    b->root->left->right = addNode(50);
    b->root->right->left = addNode(65);
    b->root->right->right = addNode(80);
    print(b);
}