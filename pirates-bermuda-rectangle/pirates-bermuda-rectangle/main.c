//
//  main.c
//  pirates-bermuda-rectangle
//
//  Created by Augusto Cesar on 29/06/17.
//  Copyright © 2017 Augusto Cesar. All rights reserved.
//

#include <stdio.h>

void go_south_east(int *lat, int *lon) {
    *lat = *lat - 1;
    *lon = *lon + 1;
}

int main(int argc, const char * argv[]) {
    int latitude = 32;
    int longitude = -64;
    
    
    go_south_east(&latitude, &longitude);
    printf("Avast! Now at: [%i, %i]\n", latitude, longitude);
    return 0;
}
