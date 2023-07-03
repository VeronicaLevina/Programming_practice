#include <stdio.h>
#include <math.h>

// ������� ��� ���������� ������� �������
double calculateVectorLength(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;
    double length = sqrt(dx * dx + dy * dy);
    return length;
}

int main() {
    int x1, y1, x2, y2;

    // �������� ��������� ����� �� �����������
    printf("������ ���������� ����� (x1, y1, x2, y2): ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    // ���������� ������� �������
    double length = calculateVectorLength(x1, y1, x2, y2);

    // ��������� ����������
    printf("������� �������: %.6lf\n", length);

    return 0;
}


