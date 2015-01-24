#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
    int data;
    struct ListNode* next;
} item;

void sort();
void selection_sort(int* a, int n);

int main() {
    item * current, * head; 
    head = NULL;
    int i; 

    for(i = 0; i <= 10; i++) {
        current = (item*)malloc(sizeof(item));
        current->data = rand() % 50;
        current-> next = head;
        head = current;
    }
    current = head;
   
    puts("Unsorted Linked List\n");
    while(current) {
        printf("%d\n", current->data);
        current = current->next;
    }
    
    sort();
    
    puts("Sorted Linked List\n");
    while(current) {
        printf("%d\n", current->data);
        current = current->next;
    }
}

void sort() {
    puts("\n[ERROR] SORT NOT YET IMPLEMENTED\n");
}
