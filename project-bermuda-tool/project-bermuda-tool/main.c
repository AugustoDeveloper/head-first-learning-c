//
//  main.c
//  project-bermuda-tool
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
    
    puts("data=[");
    while(scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3) {
        if (latitude > 26 && latitude < 34) {
            if (longitude < -64 && longitude > -76) {
                info[strlen(info) - 1] = '\0';
                printf("%f,%f,'%s'\n", latitude, longitude, info);
            }
        }
    }
    return 0;
}
