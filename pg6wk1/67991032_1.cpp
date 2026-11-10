#include <iostream>
double caltax(double price) {
    return price * 0.07;
}
void display(double base_price, double tax, double total_price) {
    std::cout<< "Base price: " << base_price << std::endl;
    std::cout<< "Tax: " << tax << std::endl;
    std::cout<< "Total price: " << total_price << std::endl;
}
int main() {
    double product_price;
    std::cout<< "Enter the product price: ";
    std::cin>> product_price;
    double tax = caltax(product_price);
    display(product_price, tax, product_price + tax);
}