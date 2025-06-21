#include <stdio.h>
#include "category.h"
#include "supplier.h"

void categoryMenu() {
    int choice;
    do {
        printf("\n--- Category Menu ---\n");
        printf("1. Add\n2. View\n3. Update\n4. Delete\n0. Back\nChoice: ");
        scanf("%d", &choice); getchar();
        switch (choice) {
            case 1: addCategory(); break;
            case 2: viewCategories(); break;
            case 3: updateCategory(); break;
            case 4: deleteCategory(); break;
        }
    } while (choice != 0);
}

void supplierMenu() {
    int choice;
    do {
        printf("\n--- Supplier Menu ---\n");
        printf("1. Add\n2. View\n3. Update\n4. Delete\n0. Back\nChoice: ");
        scanf("%d", &choice); getchar();
        switch (choice) {
            case 1: addSupplier(); break;
            case 2: viewSuppliers(); break;
            case 3: updateSupplier(); break;
            case 4: deleteSupplier(); break;
        }
    } while (choice != 0);
}

int main() {
    int choice;
    do {
        printf("\n=== Role 3 Menu ===\n");
        printf("1. Categories\n2. Suppliers\n0. Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: categoryMenu(); break;
            case 2: supplierMenu(); break;
        }
    } while (choice != 0);
    return 0;
}
