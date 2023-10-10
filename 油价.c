#include <stdio.h>

int main() {
    int fuelType, serviceType;
    double fuelPrice, discount, amount, totalPrice;

    // 输入加油量、汽油品种和服务类型
    int quantity;
    scanf("%d %d", &quantity, &fuelType);
    char service;
    scanf(" %c", &service);

    // 根据汽油品种设置油价
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

    // 根据服务类型设置折扣
    switch (service) {
    case 'm':
        discount = 0.05;
        break;
    case 'e':
        discount = 0.03;
        break;
    }

    // 计算应付款额
    amount = quantity * fuelPrice;
    totalPrice = amount - amount * discount;

    // 输出应付款额
    printf("%.2f\n", totalPrice);

    return 0;
}
