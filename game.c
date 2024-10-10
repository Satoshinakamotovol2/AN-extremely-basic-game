#include <string.h>
#include <stdio.h>

float health = 100;
float damage = 33;

void gameplay () {
        health = health - damage;
    printf("You entered room 1 and your health is: %f\n", health);
}
void gameplay2() {
        health = health - damage;
    
    printf("You entered room 2 and your health is: %f\n", health);
}

int main() {
    char input[9999];
    scanf("%s", input);
    if(strcmp(input, "w") == 0)
    gameplay();
    scanf("%s", input);
    if(strcmp(input, "s") == 0)
    gameplay2();
    return 0;
}
