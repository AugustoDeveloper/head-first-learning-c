//
//  main.c
//  mating-game
//
//  Created by Augusto Cesar on 29/06/17.
//  Copyright © 2017 Augusto Cesar. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int contestants[] = {1, 2, 3};
    int *choice = contestants;
    
    printf("%i - %i \n",sizeof(choice), sizeof(contestants));
    contestants[0] = 2;
    contestants[1] = contestants[2];
    contestants[2] = *choice;
    
    printf("I'm going to pick contestant number: %i\n", contestants[2]);
    return 0;
}
