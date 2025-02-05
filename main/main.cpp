#include <iostream> 
#include <Windows.h> 
using namespace std; 
 
int main() { 
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251); 
    int M, N;
    
    cout << "Введіть розмір масиву A: ";
    cin >> M;
    cout << "Введіть розмір масиву B: ";
    cin >> N;

    int A[M], B[N];
    
    cout << "Введіть елементи масиву A: ";
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }
    
    cout << "Введіть елементи масиву B: ";
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    
    int C[M + N];
    
    for (int i = 0; i < M; i++) {
        C[i] = A[i];
    }
    
    for (int i = 0; i < N; i++) {
        C[M + i] = B[i];
    }
    
    cout << "Об'єднаний масив C: ";
    for (int i = 0; i < M + N; i++) {
        cout << C[i] << " ";
    }

    cout << endl;
    return 0; 
}

