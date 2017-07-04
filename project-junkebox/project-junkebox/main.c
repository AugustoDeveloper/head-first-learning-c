//
//  main.c
//  project-tracks
//
//  Created by Augusto Cesar on 03/07/17.
//  Copyright © 2017 Augusto Cesar. All rights reserved.
//

#include <stdio.h>
#include <string.h>

char tracks[][80] = {
    "I left my heart un Havard Med School",
    "Newark, Newark - a wonderful town",
    "Dancing with a Dork",
    "From here to maternity",
    "The girl from Iwo Jima"
};

void find_track(char search_for[]) {
    int i;
    for (i = 0; i < 5; i++) {
        if (strstr(tracks[i], search_for)) {
            printf("Track %i: '%s'\n", i, tracks[i]);
        }
    }
}

void print_reverse(char *s) {
    size_t len = strlen(s);
    char *t = s + len -1;
    while (t >= s) {
        printf("%c", *t);
        t = t - 1;
    }
    puts("");
}

int main(int argc, const char * argv[]) {
    char search_for[80];
    puts("Search for: ");
    fgets(search_for, sizeof(search_for), stdin);
    search_for[strlen(search_for) - 1] = '\0';
    find_track(search_for);
    return 0;
}
