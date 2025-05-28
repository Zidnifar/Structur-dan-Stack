#include <iostream>
using namespace std;

typedef int ItemType;
const int MAXSTACK = 15;

typedef struct{
    ItemType Item[MAXSTACK];
    int Count;
} Stack;

void InitializeStack(Stack *S){
    S->Count = 0;
}

int Full(Stack *S){
    return (S->Count == MAXSTACK);
}

int Empty(Stack *S){
    return (S->Count == 0);
}

void Push(Stack *S, ItemType X){
    if(S->Count < MAXSTACK){
        S->Item[S->Count++] = X; // Increment Count after assignment
    }else {
        cout << "Stack penuh! Data tidak dapat masuk!" << endl;
    }
}

void Pop(Stack *S, ItemType *X){
    if(S->Count > 0){
        *X = S->Item[--S->Count]; // Decrement Count before assignment
    }else{
        cout << "Stack masih kosong!" << endl;
    }
}

int main(){
    Stack S;
    InitializeStack(&S);
    ItemType data;
    char pl;
    
    return 0;
}