#include <stdio.h>
#include <stdlib.h>

typedef struct list *List;

struct list {
    struct node *head;
};

struct node {
    int key;
    struct node *next;   
}; 

//function prototypes
struct list *new_list () {
    struct list *list_n = malloc(sizeof(struct list));
    list_n->head = NULL;
    return list_n;
}

struct node *new_node (int key) {
    struct node *node_n = malloc(sizeof(struct node));
    node_n->next = NULL;
    node_n->key = key;
    return node_n;
}

//insert function
//input? 
//output?

void print_list (struct node *current) {
    printf("Linked List Representation\n"); 
    
    while (current != NULL) {
        printf ("[%d] -> ", current->key);
        current = current->next;
    }
    printf("NULL\n");
}

int main (int argc, char **argv) {
    
    struct list *list_n = new_list();
    int i = 1;
    struct node *curr = list_n->head;  
    while (i < argc) {    
        //not the beginning of the list
        if (curr != NULL) {
            curr->next = new_node(atoi(argv[i]));
            curr = curr->next;
            
       //beginning of the list -> do not move to next node as next is NULL
        } else {
            //redefine current to avoid segmentation fault
            list_n->head = new_node(atoi(argv[i])); 
            curr = list_n->head;
        }
        i++;
    }
    
    //insert(list_n, 100, 2);
    
    print_list(list_n->head);
    
    
    return 0;   
}