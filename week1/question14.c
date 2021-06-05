#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


typedef struct node {
    int key;
    struct node *next;   
} Node; 

typedef Node *List;

//function prototypes
List new_list(int key) {
    List list_n = malloc(sizeof(Node));
    list_n->next = NULL;
    list_n->key = key;
    return list_n;
}

struct node *new_node (int key) {
    struct node *node_n = malloc(sizeof(struct node));
    node_n->next = NULL;
    node_n->key = key;
    return node_n;
}

//sum function
//input? 
//output?

int sumList(List l) {
	//insert code 
	return 0;
}

void print_list (List current) {
      
    printf("sum = %d\n", sumList(current));
    
    printf("Linked List Representation\n");   
    while (current != NULL) {
        printf ("[%d] -> ", current->key);
        current = current->next;
    }
    printf("NULL\n");
}

int main (int argc, char **argv) {
    
    assert(argc > 1);
    List list_n = new_list(atoi(argv[1]));
    int i = 1;
    List curr = list_n;  
    while (i < argc) {    
        curr->next = new_node(atoi(argv[i]));
        curr = curr->next;
        i++;
    }
        
    print_list(list_n);
       
    return 0;   
}