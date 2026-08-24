#include<iostream>

using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a=b;
    b=temp;
    cout << a << " " << b;
}
int swap2(int a, int b){
    int temp = a;
    a=b;
    b=temp;
    cout << a << " " << b;
}
void swap3(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
    cout << a << " " << b;
}

int main(){

    int a =50, b =60;

    swap(a,b);
    
    swap2(a,b);
    swap3(&a,&b);

    return 0;
    
}