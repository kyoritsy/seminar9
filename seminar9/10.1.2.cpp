#include <iostream>

using namespace std;

const int MAX_SIZE = 6;
int A[MAX_SIZE];
int top1 = -1;
int top2 = MAX_SIZE;

void PUSH1(int x) {
    if (top1 + 1 == top2) {
        cout << "Ошибка: Массив полностью заполнен (overflow)!" << endl;
        return;
    }
    top1++;
    A[top1] = x;
}

void PUSH2(int x) {
    if (top1 + 1 == top2) {
        cout << "Ошибка: Массив полностью заполнен (overflow)!" << endl;
        return;
    }
    top2--;
    A[top2] = x;
}

int POP1() {
    if (top1 == -1) {
        cout << "Ошибка: Стек 1 пуст (underflow)!" << endl;
        return -1; 
    }
    int val = A[top1];
    top1--;
    return val;
}

int POP2() {
    if (top2 == MAX_SIZE) {
        cout << "Ошибка: Стек 2 пуст (underflow)!" << endl;
        return -1; 
    }
    int val = A[top2];
    top2++;
    return val;
}

int main() {
    PUSH1(10);
    PUSH1(20);
    PUSH2(99);
    PUSH2(88);
    PUSH2(77);

    for(int i = 0; i < MAX_SIZE; i++) {
        if (i <= top1 || i >= top2) cout << A[i] << " ";
        else cout << "_ ";
    }
    cout << endl;
    
    return 0;
}