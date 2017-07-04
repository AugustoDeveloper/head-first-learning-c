//
//  main.c
//  fortune-cookies
//
//  Created by Augusto Cesar on 29/06/17.
//  Copyright © 2017 Augusto Cesar. All rights reserved.
//

#include <stdio.h>

void fortune_cookie(char msg[]) {
    printf("Message reads: %s\n", msg);
    printf("msg occupies: %i bytes\n", sizeof(msg));
}

int main(int argc, const char * argv[]) {
    char quote[] = "Cookies make you fat";
    fortune_cookie(quote);
    return 0;
}
