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
    while(1) {
        {
    scanf("%s", input);
    if(strcmp(input, "w") == 0) {
    gameplay();
    }
    
    else if(strcmp(input, "s") == 0) {
    gameplay2();
    if(health<=0)
    printf("Player dead");
    }
    
    else if(strcmp(input, "heal") == 0) {
    health = health+10000;
    }
    
    else if(strcmp(input, "health") == 0) {
    printf("%f", health);
    }
    
    else if(strcmp(input, "exploit_the_glitch") == 0)
    health = 1.0/0.0;
        }
    }
    return 0;
}
