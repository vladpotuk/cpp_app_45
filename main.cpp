#include "Func.h"


void calculateSumInRange(int a, int b, int& result) {
    result = 0;  

    
    for (int i = a; i <= b; i++) {
        result += i;
    }
}

int main() {
    system("chcp 1251");
    system("cls");
    int num1, num2, sumResult;

    std::cout << "������ ����� ���� �����: ";
    std::cin >> num1;

    std::cout << "������ ����� ���� �����: ";
    std::cin >> num2;

    calculateSumInRange(num1, num2, sumResult);

    std::cout << "���� ����� � ������� �� " << num1 << " �� " << num2 << " ������� " << sumResult << std::endl;

    return 0;
}
