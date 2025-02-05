#include <iostream>
#include <set>
#include <vector>
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
    
    set<int> setA(A, A + M);
    set<int> intersection;

    for (int i = 0; i < N; i++) {
        if (setA.count(B[i])) {
            intersection.insert(B[i]);
        }
    }

    vector<int> C(intersection.begin(), intersection.end());

    cout << "Спільні елементи без повторень: ";
    for (int elem : C) {
        cout << elem << " ";
    }
    cout << endl;

    return 0; 
}

