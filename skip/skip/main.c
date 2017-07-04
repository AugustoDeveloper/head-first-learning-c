//
//  main.c
//  skip
//
//  Created by Augusto Cesar on 29/06/17.
//  Copyright © 2017 Augusto Cesar. All rights reserved.
//

#include <stdio.h>

void skip(char* msg) {
    puts(msg + 6);
}

int main(int argc, const char * argv[]) {
    
    char *msg_from_amy = "Don't call me";
    skip(msg_from_amy);
    return 0;
}
