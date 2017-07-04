//
//  main.c
//  project-caso-bala-magica
//
//  Created by Augusto Cesar on 03/07/17.
//  Copyright © 2017 Augusto Cesar. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char masked_raider[] = "Alive!";
    char *jimmy = masked_raider;
    
    printf("Masked Raider is %s, Jimmy is %s\n", masked_raider, jimmy);
    
    masked_raider[0] = 'D';
    masked_raider[1] = 'E';
    masked_raider[2] = 'A';
    masked_raider[3] = 'D';
    masked_raider[4] = '!';
    
    printf("Masked Raider is %s, Jimmy is %s\n", masked_raider, jimmy);
    return 0;
}
