#include <iostream>
#include "pineapple.cpp"
using namespace std;

void show_help() {
    cout << "Использование: calculator [--help] [a] [b]\n"
         << "Пример: calculator 10 5\n"
         << "Опции:\n"
         << " --help, -h  Показать справку\n"
         << "Вычисляет сумму и разность чисел a и b.\n";
    exit(0);
}
double calculate(int a, char math,int b){
    switch (math){
        case '+': return summ(a, b);break;
        case '-': return razn(a, b);break;
    }
    return 0;
}

int main(int argc, char* argv[]) {
    setlocale(LC_ALL, "rus");
    
    // Основные вычисления
    int a = atoi(argv[1]);
    int b = atoi(argv[3]);
    char math = argv[2][0];
    double result = calculate(a, b, math);
    cout << "Результат: "<< a << math << b << " = " << result << endl;
    }
