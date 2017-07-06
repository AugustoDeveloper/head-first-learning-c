//
//  main.c
//  project-secret-messages
//
//  Created by Augusto Cesar on 05/07/17.
//  Copyright © 2017 Augusto Cesar. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char word[10];
    int i = 0;
    while (scanf("%9s", word) == 1) {
        i++;
        if (i % 2) {
            fprintf(stdout, "%s\n", word);
        } else {
            fprintf(stderr, "%s\n", word);
        }
    }
    return 0;
}
