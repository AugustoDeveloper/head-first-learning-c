//
//  main.c
//  functions-up-close
//
//  Created by Augusto Cesar on 29/06/17.
//  Copyright © 2017 Augusto Cesar. All rights reserved.
//

#include <stdio.h>

int larger(int a, int b) {
    if (a > b)
        return a;
    return b;
}

int main(int argc, const char * argv[]) {
    int greatest = larger(100, 100);
    printf("%i is the greatest\n", greatest);
    return 0;
}
