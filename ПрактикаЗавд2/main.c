#include <stdio.h>

// ������� ��� ����������� ���������� �������� �������
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// ������� ��� ����������� ���������� �������� ��������
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int n;

    printf("������ ������� �����: ");
    scanf("%d", &n);

    int numbers[20];
    printf("������ %d ����������� �����, ��������� �������: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int result = numbers[0];
    for (int i = 1; i < n; i++) {
        result = lcm(result, numbers[i]);
    }

    printf("�������� ������ ������: %d\n", result);

    return 0;
}
