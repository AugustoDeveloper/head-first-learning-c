//
//  main.c
//  project-favorite-food
//
//  Created by Augusto Cesar on 03/07/17.
//  Copyright © 2017 Augusto Cesar. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char food[5];
    puts("Enter favorite food:");
    fgets(food, sizeof(food), stdin);
    printf("Favorite food: %s\n", food);
    return 0;
}
