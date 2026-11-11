#include <iostream>

using namespace std;

void PUSH(int s[], int& top, int x){
    top = top + 1;
    s[top] = x;
}
void POP(int s[], int& top){
    top = top - 1;
}

int main() {
    int s[7];  
    int top = 0; 

    PUSH(s, top, 4);
    PUSH(s, top, 1);
    PUSH(s, top, 3);
    POP(s, top);
    PUSH(s, top, 8);
    POP(s, top);

    for(int i = 1; i <= top; i++) cout << s[i] << " ";
    cout << endl;
    cout << "done" << endl;
    return 0;
}