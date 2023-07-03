#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, r1, x2, y2, r2;

    // �������� ��������� � ������ ������ ���� ����
    printf("������ ���������� �� ����� ������� ���� (x1 y1 r1): ");
    scanf("%lf %lf %lf", &x1, &y1, &r1);
    printf("������ ���������� �� ����� ������� ���� (x2 y2 r2): ");
    scanf("%lf %lf %lf", &x2, &y2, &r2);

    // ���������� ������� �� �������� ����
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // ���������� ������� ����� ��������
    if (distance > r1 + r2) {
        printf("���� �� �������������.\n");
        printf("ʳ������ ����� ��������: 0\n");
    } else if (distance == r1 + r2) {
        printf("���� ���������� ���������.\n");
        printf("ʳ������ ����� ��������: 1\n");
    } else if (distance < fabs(r1 - r2)) {
        printf("���� ���� ����������� ��������� ������.\n");
        printf("ʳ������ ����� ��������: 0\n");
    } else if (distance == fabs(r1 - r2)) {
        printf("���� ���� ��������� ��������� ������.\n");
        printf("ʳ������ ����� ��������: 1\n");
    } else {
        printf("���� ������������� � ���� ������.\n");
        printf("ʳ������ ����� ��������: 2\n");
    }

    return 0;
}


