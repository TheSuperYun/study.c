#include <stdio.h>

int main() {
    int fuelType, serviceType;
    double fuelPrice, discount, amount, totalPrice;

    // ���������������Ʒ�ֺͷ�������
    int quantity;
    scanf("%d %d", &quantity, &fuelType);
    char service;
    scanf(" %c", &service);

    // ��������Ʒ�������ͼ�
    switch (fuelType) {
    case 90:
        fuelPrice = 6.95;
        break;
    case 93:
        fuelPrice = 7.44;
        break;
    case 97:
        fuelPrice = 7.93;
        break;
    }

    // ���ݷ������������ۿ�
    switch (service) {
    case 'm':
        discount = 0.05;
        break;
    case 'e':
        discount = 0.03;
        break;
    }

    // ����Ӧ�����
    amount = quantity * fuelPrice;
    totalPrice = amount - amount * discount;

    // ���Ӧ�����
    printf("%.2f\n", totalPrice);

    return 0;
}
