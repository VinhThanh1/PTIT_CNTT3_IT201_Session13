//
// Created by Thanh on 7/8/2025.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int data[MAX];   // Mảng cố định
    int top;         // Chỉ số phần tử trên cùng
} Stack;

// Hàm khởi tạo stack
void initialStack(Stack *s) {
    s->top = -1;
}

// Hàm kiểm tra stack rỗng
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Hàm kiểm tra stack đầy
int isFull(Stack *s) {
    return s->top == MAX - 1;
}

// Hàm thêm phần tử vào stack
void push(Stack *s, int value){
    if (isFull(s)) {
        printf("Ngan xep da day\n");
        return;
    }
    s->data[++s->top] = value;
}

// Hàm hiển thị các phần tử trong stack
void displayStack(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack dang rong.\n");
        return;
    }

    printf("Cac phan tu trong stach (tu dinh -> day):\n");
    for (int i = s->top; i >= 0; i--) {
        printf("%d\n", s->data[i]);
    }
}

int main(void) {
    Stack myStack;
    initialStack(&myStack); // Khởi tạo stack

    // Thêm phần tử
    push(&myStack, 10);
    push(&myStack, 20);
    push(&myStack, 30);

    // Hiển thị toàn bộ stack
    displayStack(&myStack);

    return 0;
}
