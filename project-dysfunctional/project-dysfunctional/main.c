//
//  main.c
//  project-dysfunctional
//
//  Created by Augusto Cesar on 03/07/17.
//  Copyright © 2017 Augusto Cesar. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char s0[] = "dysfunctional";
    char s1[] = "fun";
    if (strstr(s0, s1))
        puts("I found the fun in dysfunctional");
    return 0;
}
