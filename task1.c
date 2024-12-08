#include <stdio.h>

    int Set_Bit(int number, int position){
        return number | (1 << position);
    }

    int Clear_Bit(int number, int position){
        return number & ~(1 << position);
    }

    int Toggle_Bit(int number, int position){
        return number ^ (1 << position);
    }

    int Read_Bit(int number, int position){
        return (number >> position) & 1;
    }

    int Validate_Position(int position, int num_bits){
       return 0 <= position < num_bits;
    }
    
int main() {
     int num_bits = 32;
     int number;
     int position;
     int choice;
     int bit;
     
     printf("Enter an integer: ");
     scanf("%d", &number);
    while (1){
        printf("\nChoose an operation:");
        printf("\n1- Set a Bit");
        printf("\n2- Clear a Bit");
        printf("\n3- Toggle a Bit");
        printf("\n4- Read a Bit");
        printf("\n5- Exit");
            
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        if (choice == 5){
            break;
        }
        printf("\nEnter the bit position: ");
        scanf("%d", &position);
        if (!Validate_Position(position, num_bits)) {
        printf("\nInvalid position. Must be between 0 and %d.\n", num_bits - 1);
            continue;
        }
    
                
    if (choice == 1){
        number = Set_Bit(number, position);
        printf("Bit set at position %d. New number: %d\n", position, number);
    }
                
    else if (choice == 2){
        number = Clear_Bit(number, position);
        printf("Bit cleared at position %d. New number: %d\n", position, number);
    }
    else if (choice == 3){
        number = Toggle_Bit(number, position);
        printf("Bit toggled at position %d. New number: %d\n", position, number);
    }
    else if (choice == 4){
        bit = Read_Bit(number, position);
        printf("Bit at position %d. New number: %d\n", position, bit);
    }
    else{
        printf("Invalid choice. Please try again.");
    }}
        
    return 0;
}