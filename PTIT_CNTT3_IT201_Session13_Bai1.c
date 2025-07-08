//
// Created by Thanh on 7/8/2025.
//

// #include <stdio.h>
// #define MAX 100
//
// // Cấu trúc ngăn xếp
// typedef struct {
//     int data[MAX];  // Mảng cố định
//     int top;        // Chỉ số phần tử trên cùng
// } Stack;
//
// // Hàm khởi tạo ngăn xếp
// void initialStack(Stack *s) {
//     s->top = -1;
// }
//
// // Hàm kiểm tra stack đã đầy chưa
// int isFull(Stack *s) {
//     return s->top == MAX - 1;
// }
//
// // Hàm kiểm tra rỗng
// int isEmpty(Stack *s) {
//     return s->top == -1;
// }
//
// int main() {
//     Stack myStack;
//     initialStack(&myStack); // Gọi hàm khởi tạo
//
//     // In kiểm tra thông tin stack
//     printf("Da tao stack co kich thuoc toi da = %d\n", MAX);
//
//     return 0;
// }


#include <stdio.h>
#define MAX 100

typedef struct{
    int data[MAX];
    int top;
}Stack;

void initStack(Stack* s) {
    s->top = -1;
}

int isFull(Stack* s) {
    return s->top == MAX - 1;
}

int isEmpty(Stack* s) {
    return s->top == -1;
}

void print(int arr[]) {
    for (int i=0; i<MAX; i++) {
        printf("%d ",arr[i]);
    }
}

void push(Stack* s, int x) {
    if (isFull(s)) {
        printf("Stack is full\n");
    }else{
        s->data[++(s->top)]=x;
    }
}

int pop(Stack * s) {
    if (!isEmpty(s)) {
        return s->data[(s->top)--];
    }
    return -1;
}

void reverse(int arr[]) {
    Stack s;
    initStack(&s);
    for (int i=0; i<MAX; i++) {
        push(&s, arr[i]);
    }
    for (int i=0; i<MAX; i++) {
        arr[i]=pop(&s);
    }
}

int main(void) {
    int arr[MAX];
    for (int i=0; i<MAX; i++) {
        scanf("%d",&arr[i]);
    }
    printf("Mang truoc khi sap xep: ");
    print(arr);
    printf("\n");
    printf("Mang sau khi sap xep: ");
    reverse(arr);
    print(arr);
    return 0;
}

