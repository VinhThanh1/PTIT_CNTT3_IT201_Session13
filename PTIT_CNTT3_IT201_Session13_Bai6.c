//
// Created by Thanh on 7/8/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX 100

// Cấu trúc Stack ký tự
typedef struct {
    char data[MAX];
    int top;
} Stack;

// Khởi tạo stack
void initialStack(Stack *s) {
    s->top = -1;
}

// Kiểm tra rỗng
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Kiểm tra đầy
int isFull(Stack *s) {
    return s->top == MAX - 1;
}

// Thêm phần tử vào stack
void push(Stack *s, char value) {
    if (isFull(s)) {
        printf("Stack da day!\n");
        return;
    }
    s->data[++s->top] = value;
}

// Lấy phần tử từ stack
char pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack rong!\n");
        exit(1);
    }
    return s->data[s->top--];
}

// Hàm kiểm tra chuỗi đối xứng
bool isPalindrome(char str[]) {
    Stack s;
    initialStack(&s);

    int len = strlen(str);

    // Đưa toàn bộ ký tự vào stack
    for (int i = 0; i < len; i++) {
        push(&s, str[i]);
    }

    // So sánh từng ký tự với ký tự từ stack (tức là so với ký tự từ cuối về đầu)
    for (int i = 0; i < len; i++) {
        if (str[i] != pop(&s)) {
            return false;
        }
    }

    return true;
}

int main() {
    char str[MAX];

    printf("Nhap chuoi can kiem tra: ");
    fgets(str, MAX, stdin);

    // Loại bỏ ký tự newline '\n' nếu có
    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str)) {
        printf("Chuoi doi xung.\n");
    } else {
        printf("Chuoi khong doi xung.\n");
    }

    return 0;
}
