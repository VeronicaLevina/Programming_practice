#include <stdio.h>

int main() {
    int n, count = 0;

    // ������� ������ ����� n
    printf("������ ���������� ����� n: ");
    scanf("%d", &n);

    // ��������� ��� ������� ����� n
    for (int i = 1; i <= n; i++) {
        if (n % i == n / i) {
            count++;
        }
    }

    // �������� ������� ����� �������
    printf("ʳ������ ����� ������� ����� %d: %d\n", n, count);

    return 0;
}

