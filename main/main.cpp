#include <iostream>
#include <vector>
#include <Windows.h> 
using namespace std; 
 
int main() { 
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251); 
    int M, choice;
    
    cout << "Введіть розмір масиву A: ";
    cin >> M;

    vector<int> A(M);
    
    cout << "Введіть елементи масиву A: ";
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }
    
    cout << "Що потрібно видалити?\n";
    cout << "1 - Парні числа\n";
    cout << "2 - Непарні числа\n";
    cout << "Ваш вибір: ";
    cin >> choice;

    vector<int> B;
    
    for (int i = 0; i < M; i++) {
        if ((choice == 1 && A[i] % 2 != 0) || (choice == 2 && A[i] % 2 == 0)) {
            B.push_back(A[i]);
        }
    }
    
    cout << "Оновлений масив: ";
    for (int elem : B) {
        cout << elem << " ";
    }
    cout << endl;

    return 0; 
}

