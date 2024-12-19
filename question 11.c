#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 100
#define MAX_NAME_LENGTH 50

struct Product {
    int id;
    char name[MAX_NAME_LENGTH];
    int quantity;
    float price;
};

int main() {
    struct Product products[MAX_PRODUCTS];
    int n;
    float totalValue = 0.0;
    struct Product highestQuantityProduct;
    struct Product highestPriceProduct;

    printf("Enter the number of products: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter details for product %d:\n", i + 1);
        printf("Product ID: ");
        scanf("%d", &products[i].id);
        printf("Product Name: ");
        scanf(" %[^\n]", products[i].name);
        printf("Quantity: ");
        scanf("%d", &products[i].quantity);
        printf("Price: ");
        scanf("%f", &products[i].price);

        totalValue += products[i].quantity * products[i].price;

        if (i == 0 || products[i].quantity > highestQuantityProduct.quantity) {
            highestQuantityProduct = products[i];
        }

        if (i == 0 || products[i].price > highestPriceProduct.price) {
            highestPriceProduct = products[i];
        }
    }

    printf("\nTotal value of the inventory: $%.2f\n", totalValue);

    printf("\nProduct with the highest quantity:\n");
    printf("Product ID: %d\n", highestQuantityProduct.id);
    printf("Product Name: %s\n", highestQuantityProduct.name);
    printf("Quantity: %d\n", highestQuantityProduct.quantity);
    printf("Price: $%.2f\n", highestQuantityProduct.price);

    printf("\nProduct with the highest price:\n");
    printf("Product ID: %d\n", highestPriceProduct.id);
    printf("Product Name: %s\n", highestPriceProduct.name);
    printf("Quantity: %d\n", highestPriceProduct.quantity);
    printf("Price: $%.2f\n", highestPriceProduct.price);

    return 0;
}