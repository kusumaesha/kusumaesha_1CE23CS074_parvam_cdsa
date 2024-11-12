#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
    struct node* prev;
};

struct node* head = NULL, * tail = NULL;

void create() {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    int value;
    printf("Enter the data: ");
    scanf("%d", &value);
    newnode->data = value;
    newnode->prev = NULL;
    newnode->next = NULL;
    if (head == NULL) {
        head = tail = newnode;
    } else {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}

void insert_at_begin() {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    int value;
    printf("Enter the data: ");
    scanf("%d", &value);
    newnode->data = value;
    newnode->prev = NULL;
    newnode->next = NULL;
    if (head == NULL) {
        head = tail = newnode;
    } else {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
}

void insert_at_end() {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    int value;
    printf("Enter the data: ");
    scanf("%d", &value);
    newnode->data = value;
    newnode->prev = NULL;
    newnode->next = NULL;
    if (tail == NULL) {
        head = tail = newnode;
    } else {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}

void delete_at_begin() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    struct node* temp = head;
    head = head->next;
    if (head != NULL) {
        head->prev = NULL;
    } else {
        tail = NULL;  // Only one element in the list
    }
    free(temp);
}

void delete_at_end() {
    if (tail == NULL) {
        printf("List is empty!\n");
        return;
    }
    struct node* temp = tail;
    if (tail->prev != NULL) {
        tail = tail->prev;
        tail->next = NULL;
    } else {
        head = tail = NULL;  // Only one element in the list
    }
    free(temp);
}

void display() {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int choice;
    do {
        printf("\nEnter your choice: ");
        printf("\n1. Create\n2. Insert at Beginning\n3. Insert at End\n4. Delete at Beginning\n5. Delete at End\n6. Display\n0. Exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                create();
                break;
            case 2:
                insert_at_begin();
                break;
            case 3:
                insert_at_end();
                break;
            case 4:
                delete_at_begin();
                break;
            case 5:
                delete_at_end();
                break;
            case 6:
                display();
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }
    } while (choice != 0);

    return 0;
}
