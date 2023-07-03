#include <stdio.h>

int main() {
    int n, count = 0;

    // Зчитуємо вхідне число n
    printf("Введіть натуральне число n: ");
    scanf("%d", &n);

    // Знаходимо рівні дільники числа n
    for (int i = 1; i <= n; i++) {
        if (n % i == n / i) {
            count++;
        }
    }

    // Виводимо кількість рівних дільників
    printf("Кількість рівних дільників числа %d: %d\n", n, count);

    return 0;
}

