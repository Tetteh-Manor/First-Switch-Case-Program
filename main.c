#include <stdio.h>

int main() {
    int month;
    scanf("%d", &month);
    char* season = "";
    // Don't change above this line
    
    // Write your code below
    
    switch (month) {
        case 1:
        case 2: 
        case 12:
            printf("Winter\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("Spring\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("Summer\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("Autumn\n");
            break;
        default:
            printf("Invalid month\n");
            break;
    }
    
    printf("%s\n", season);
    return 0;
}
