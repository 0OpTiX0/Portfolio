#include <stdio.h>

struct Coffee {
    char color[50];
    char flavor[50];
    char size[50];
};

struct Coffee YourCoffee() {
    struct Coffee c;
    printf("Size: ");
    scanf("%s", c.size);

    printf("Flavor: ");
    scanf("%s", c.flavor);

    printf("Color: ");
    scanf("%s", c.color);

    return c;
}

int main(void) {
    char decision;
    int x = 0;
    printf("Welcome to the Laudati Coffee machine. I was bored so I made this in a Starbucks...\n");
    printf("\nEnter coffee parameters:\n\n");
    struct Coffee c = YourCoffee();

    printf("\nYour coffee parameters: \nSize: %s\nFlavor: %s\nColor: %s\n", c.size, c.flavor, c.color);

    while (x == 0) {
        printf("\nIs this what you ordered?\n\n");
        printf("\ny/n: ");
        scanf(" %c", &decision);

        if (decision == 'y') {
            printf("\nEnjoy your coffee!\n");
            x = 1;
        } else if (decision == 'n') {
            printf("\nPlease choose new parameters for your coffee:\n\n");
            c = YourCoffee();
            printf("\nYour new coffee parameters: \nSize: %s\nFlavor: %s\nColor: %s\n", c.size, c.flavor, c.color);
        } else {
            printf("\nIncorrect character, please select either 'y' or 'n'\n");
        }
    }

    return 0;
}
