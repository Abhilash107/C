#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

//* struct type function
struct node* createNode(int data){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    // Check if memory allocation was successful
    if(newNode == NULL) exit(1);

    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}


int length(struct node* head){
    struct node* temp = head;
    int c = 0;
    while (temp != NULL){
        c += 1;
        temp = temp->next;
    }

    return c;
}

struct node* insertAtBegin(struct node* head, int data){
    struct node* newNode = createNode(data);
    // if(head == NULL){
    //     head = newNode;
    //     return head;
    // }
    newNode->next = head;
    head = newNode;

    return head;

}

struct node* insertAtLast(struct node* head, int data){
    struct node* newNode = createNode(data);
    struct node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;

    // if(head == NULL){
    //     head = newNode;
    //     return head;
    // }

    return head;

}

struct node* insertAtAnyPosition(struct node* head,int location, int data){

    int len = length(head);

    if(location == 1){
        return insertAtBegin(head, data);  
    }

    else if(location == len + 1){
        return insertAtLast(head, data);
    }

    else if(location > len || location <= 0){
        printf("What the hell bro!");
        exit(1);
    }

    else{
        struct node* newNode = createNode(data);
        struct node* temp = head;
        
        int cnt = 1;

        while(cnt < location - 1){//* less than
            temp = temp->next;
            cnt++;
        }

        newNode->next = temp->next;
        temp->next = newNode;

        return head;
    }
}


struct node* deleteAtBegin(struct node* head){
    head = head->next;
    return head;
}

struct node* deleteFromLast(struct node* head){
    struct node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    temp->next = NULL;

    return head;
}

struct node* deleteAtAnyPosition(struct node* head, int location){
    int len = length(head);

    if(location == 1){
        return deleteAtBegin(head);  
    }

    else if(location == len + 1){
        return deleteFromLast(head);
    }

    else if(location > len || location <= 0){
        printf("What the hell bro!");
        exit(1);
    }

    else{
        struct node* temp = head;
        int cnt = 1;

        while(cnt < location - 1){//* less than
            temp = temp->next;
            cnt++;
        }
        temp->next = temp->next->next;

        return head;
    }
}

struct node* deleteByValue(struct node* head, int value){
    struct node* temp = head;
    if(head== NULL) return NULL;

    if (head->data == value) {
        struct node* toDelete = head;
        head = head->next; // Move head to the next node
        free(toDelete);    // Free memory of the deleted node
        return head;
    }

    while(temp->next != NULL && temp->next->data != value){
        temp = temp->next;
    }

    if(temp->next == NULL) return head;

    struct node* toDelete = temp->next;
    temp->next = temp->next->next;

    free(toDelete);

    return head;
}

struct node* reverse(struct node* head){
    struct node* p = NULL;
    struct node* q = head;
    struct node* r = NULL;

    while(q != NULL){
        r = q->next;
        q->next = p;
        p = q;
        q = r;
    }
    head = p;

    return head;

}


void printList(struct node* head){
    struct node* temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}


int main(){
    struct node* head = createNode(10);
    head = insertAtBegin(head, 20);
    
    head = insertAtLast(head, 30);
    head = insertAtAnyPosition(head, 2, 40);
    
    // head = deleteAtBegin(head);
    // head = deleteFromLast(head);
    //head = deleteAtAnyPosition(head, 3);
    //head = deleteByValue(head, 20)
    head = reverse(head);
    printList(head);

}