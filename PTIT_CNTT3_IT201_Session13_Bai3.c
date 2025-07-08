//
// Created by Thanh on 7/8/2025.
//

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

// Khai báo stack
typedef struct Stack {
    int data[MAX];
    int top;
} Stack;

// khởi tạo stack
void initialStack(Stack *s) {
    s->top = -1;
}

// hàm kiểm tra xem đã đầy chưa
int isFull(Stack *s) {
    return s->top == MAX-1;
}

// Kiểm tra rỗng
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Hàm thêm phần tử vào stack
void push(Stack *s, int value) {
    if(isFull(s)) {
        printf("Ngan xep da day\n");
        return;
    }
    s->data[++s->top] = value;
}

// Lấy phần tử và loại bỏ khỏi stack
int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack rong.\n");
        return -1;
    }
    return s->data[s->top--];
}

// // Lấy phần tử đỉnh nhưng không loại bỏ
// int peek(Stack *s) {
//     if (isEmpty(s)) {
//         printf("Stack rong.\n");
//         return -1;
//     }
//     return s->data[s->top];
// }

// Hàm main kiểm tra lấy phần tử
int main(void) {
    Stack myStack;
    initialStack(&myStack);

    push(&myStack, 10);
    push(&myStack, 20);
    push(&myStack, 30);

    // Lấy phần tử ra
    int value = pop(&myStack);
    if (value != -1) {
        printf("\nLay ra phan tu %d", value);
    }else {
        printf("No element in stack");
    }

    return 0;
}

