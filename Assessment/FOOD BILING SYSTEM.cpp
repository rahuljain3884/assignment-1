#include<stdio.h>
int main() 
{
    int choice, quantity;
    int amount = 0, totalAmount = 0;
    char continueOrder;

    do {
        // Display the Menu
        printf("\n---------- Menu ----------\n");
        printf("1. Pizza        price = 180rs/pcs\n");
        printf("2. Burger       price = 100rs/pcs\n");
        printf("3. Dosa         price = 120rs/pcs\n");
        printf("4. Idli         price = 50rs/pcs\n");
        
        printf("Please Enter your choice... : ");
        scanf("%d", &choice);

        // Handle the Selection
        switch(choice) {
            case 1:
                printf("\nYou have selected Pizza.\n");
                amount = 180;
                break;
            case 2:
                printf("\nYou have selected Burger.\n");
                amount = 100;
                break;
            case 3:
                printf("\nYou have selected Dosa.\n");
                amount = 120;
                break;
            case 4:
                printf("\nYou have selected Idli.\n");
                amount = 50;
                break;
            default:
                printf("\nInvalid selection!\n");
                amount = 0;
        }

        if (amount > 0) {
            printf("Enter the quantity : ");
            scanf("%d", &quantity);

            int currentOrderTotal = amount * quantity;
            totalAmount += currentOrderTotal;

            printf("Amount : %d\n", currentOrderTotal);
            printf("Total amount is = %d\n", totalAmount);
        }

        // Ask to continue
        printf("Do you want place more orders? y & n : ");
        scanf(" %c", &continueOrder); // The space before %c handles the newline character

    } while (continueOrder == 'y' || continueOrder == 'Y');

    printf("\nThank you! Your final bill is: %d\n", totalAmount);

    return 0;
}
