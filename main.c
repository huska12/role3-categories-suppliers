#include <stdio.h>
#include <stdlib.h>
#include "include/category.h"
#include "include/supplier.h"

void categoryMenu() {
    int choice;
    do {
        printf("\n--- Category Menu ---\n");
        printf("1. Add Category\n2. View Categories\n3. Update Category\n4. Delete Category\n0. Back\nChoice: ");
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
        printf("1. Add Supplier\n2. View Suppliers\n3. Update Supplier\n4. Delete Supplier\n0. Back\nChoice: ");
        scanf("%d", &choice); getchar();
        switch (choice) {
            case 1: addSupplier(); break;
            case 2: viewSuppliers(); break;
            case 3: updateSupplier(); break;
            case 4: deleteSupplier(); break;
        }
    } while (choice != 0);
}

void filterMenu() {
    int choice, id;
    do {
        printf("\n--- Filter Products ---\n");
        printf("1. By Category ID\n2. By Supplier ID\n0. Back\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: printf("Category ID: "); scanf("%d", &id); filterProductsByCategory(id); break;
            case 2: printf("Supplier ID: "); scanf("%d", &id); filterProductsBySupplier(id); break;
        }
    } while (choice != 0);
}

int main() {
    int choice;
    do {
        printf("\n=== Role 3: Categories & Suppliers ===\n");
        printf("1. Manage Categories\n2. Manage Suppliers\n3. Filter Products\n0. Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: categoryMenu(); break;
            case 2: supplierMenu(); break;
            case 3: filterMenu(); break;
        }
    } while (choice != 0);
    return 0;
}
