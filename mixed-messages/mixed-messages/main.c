//
//  main.c
//  mixed-messages
//
//  Created by Augusto Cesar on 29/06/17.
//  Copyright © 2017 Augusto Cesar. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x = 0;
    int y = 0;
    while (x < 5) {
        if (y < 5) {
            x++;
            if (y < 3)
                x--;
        }
        y += 2;
        printf("%i%i ", x, y);
        x++;
    }
    return 0;
}
