//
// Created by Thanh on 7/8/2025.
//

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int data[MAX];   // Mảng cố định
    int top;         // Chỉ số phần tử trên cùng
} Stack;

// HÀM KHỞI TẠO STACK
void initialStack(Stack *s) {
    s->top = -1;
}

// HÀM KIỂM TRA STACK ĐẦY
int isFull(Stack *s) {
    return s->top == MAX - 1;
}

// HÀM THÊM PHẦN TỬ VÀO STACK
void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack da bi day!\n");
        return;
    }
    s->data[++s->top] = value;
}

int main() {
    Stack myStack;
    initialStack(&myStack); // Khởi tạo stack

    int value;

    printf("Nhap vao 5 so nguyen de them vao stack:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &value);
        push(&myStack, value); // Thêm phần tử vào stack
    }

    return 0;
}
