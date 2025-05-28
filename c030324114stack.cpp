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
    if(S->Count == MAXSTACK){
        cout << "Stack penuh! Data tidak dapat masuk!" << endl;
    }else{
        S->Item[S->Count] = X;
        ++(S->Count);
    }
}

void Pop(Stack *S, ItemType *X){
    if(S->Count == 0){
        cout<<"Stack masih kosong!" << endl;
    }else{
        --(S->Count);
        *X = S->Item[S->Count];
    }
}

int main(){
    Stack S ;
    ItemType temp ;
    InitializeStack(&S) ;

    return 0;
}
