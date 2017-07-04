//
//  main.c
//  project-record-person-data
//
//  Created by Augusto Cesar on 03/07/17.
//  Copyright © 2017 Augusto Cesar. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char first_name[20], last_name[20];
    int age;
    printf("Enter your name:");
    scanf("%19s %19s", first_name, last_name);
    printf("Enter your age:");
    scanf("%i", &age);
    
    printf("%s %s %i", first_name, last_name, age);
    return 0;
}
