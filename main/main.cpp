#include <iostream>
#include <set>
#include <vector>
#include <Windows.h>

using namespace std; 
 
int main() { 
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251); 
    int main() {
        
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
        set<int> setB(B, B + N);
        set<int> result;
        
        for (int elem : setA) {
            if (setB.find(elem) == setB.end()) {
                result.insert(elem);
            }
        }
        
        for (int elem : setB) {
            if (setA.find(elem) == setA.end()) {
                result.insert(elem);
            }
        }
        
        cout << "Елементи, які є лише в одному з масивів (без повторень): ";
        for (int elem : result) {
            cout << elem << " ";
        }
        
        cout << endl;
        
    return 0; 
}

