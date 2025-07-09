//
// Created by Thanh on 7/8/2025.
//

#include <stdio.h>
#define MAX 100

// Cấu trúc ngăn xếp
typedef struct {
    int data[MAX];  // Mảng cố định
    int top;        // Chỉ số phần tử trên cùng
} Stack;

// Hàm khởi tạo ngăn xếp
void initialStack(Stack *s) {
    s->top = -1;
}

// Hàm kiểm tra stack đã đầy chưa
int isFull(Stack *s) {
    return s->top == MAX - 1;
}

// Hàm kiểm tra rỗng
int isEmpty(Stack *s) {
    return s->top == -1;
}

int main() {
    Stack myStack;
    initialStack(&myStack); // Gọi hàm khởi tạo

    // In kiểm tra thông tin stack
    printf("Da tao stack co kich thuoc toi da = %d\n", MAX);

    return 0;
}



    return 0;
}

