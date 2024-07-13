#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
/* This program shows us how to create a hashtable */

#define MAXSTRING 200
#define TABLESIZE 10
// define a hashatable a entry structures
typedef struct hashTable{
    char key [MAXSTRING];
    int value;
    struct hashTable* next;
}h_table;

// implement the hash function
int hash(char* s){
    int length = strnlen(s, MAXSTRING);
    unsigned int hash_value = 0;
    for (int i = 0; i < length; i++){
        hash_value += s[i];
        hash_value = (hash_value * s[i]) % TABLESIZE;
    }
    return hash_value;
}

// create a hash table
h_table* create_item(char* s, int v){
    // allocate size for item
    h_table* t = (h_table*)malloc(sizeof(h_table));
    if (t != NULL){
        strcpy(t->key, s);
        t->value = v;
        t->next = NULL;     
    }
    return t;
}
// free hash table
void freekeyvalue(h_table* kvp){
    if (kvp != NULL){
        free(kvp);
    }
}
// create a new entry

// implement function that inserts an entry into the hash table
bool insert(h_table* t[], int loc, char* k, int v){
    bool result = true;

    if ((0 <= loc) && (loc < TABLESIZE)){
        h_table* kv = create_item(k, v);
        
        kv->next = t[loc];
        t[loc] = kv;
    }else{
        result = false;
    }
    return result;
    
}
// implement function that searches for the key
h_table* search(h_table* t[], char* k){
    //bool result = true;
    int index = hash(k);
    for (int i = 0; i < TABLESIZE; i++){
        if (h_table[index] != NULL && strncmp(h_table[index]->))
    }
}
// implement function that deletes a key from the Hash Table
// implement function that frees the hash table
// implement main function that implements these functions
int main(){
    return 0;
}
