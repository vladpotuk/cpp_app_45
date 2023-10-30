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

    std::cout << "¬вед≥ть перше ц≥ле число: ";
    std::cin >> num1;

    std::cout << "¬вед≥ть друге ц≥ле число: ";
    std::cin >> num2;

    calculateSumInRange(num1, num2, sumResult);

    std::cout << "—ума чисел у д≥апазон≥ в≥д " << num1 << " до " << num2 << " дор≥внюЇ " << sumResult << std::endl;

    return 0;
}
