//
//  main.c
//  project-geo2json
//
//  Created by Augusto Cesar on 05/07/17.
//  Copyright © 2017 Augusto Cesar. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    float latitude;
    float longitude;
    char info[80];
    int started = 0;
    
    puts("data=[");
    while(scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3) {
        if (started) {
            printf(",\n");
        } else {
            started = 1;
        }
        info[strlen(info) - 1] = '\0';
        printf("{latitude: %f. longitude: %f, info: '%s'}", latitude, longitude, info);
    }
    puts("\n]");
    return 0;
}
