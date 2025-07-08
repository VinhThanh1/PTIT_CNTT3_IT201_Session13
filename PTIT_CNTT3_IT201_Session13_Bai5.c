//
// Created by Thanh on 7/8/2025.
//
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Định nghĩa cấu trúc stack
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
void push(Stack *s, int value) {
    if(isFull(s)) {
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

// hàm đảo ngược
void reverseArray(int arr[], int n) {
    Stack s;
    initialStack(&s);

    // Đưa mảng vào stack
    for (int i = 0; i < n; i++) {
        push(&s, arr[i]);
    }

    // Rút từ stack ra lại mảng => đảo ngược
    for (int i = 0; i < n; i++) {
        arr[i] = s.data[s.top--];
    }
}

int main(void) {
    Stack s;
    initialStack(&s);

    int arr[MAX], n = 5;
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
        push(&s, arr[i]);
    }

    displayStack(&s);
    reverseArray(arr, n);

    printf("\nMang sau khi dao nguoc:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}