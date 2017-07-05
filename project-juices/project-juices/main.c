//
//  main.c
//  project-juices
//
//  Created by Augusto Cesar on 04/07/17.
//  Copyright © 2017 Augusto Cesar. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void print_reverse(char *s) {
    size_t len = strlen(s);
    char *t = s + len - 1;
    
    while (t >= s) {
        printf("%c", *t);
        
        t = t - 1;
    }
    
    puts(" ");
}

int main(int argc, const char * argv[]) {
    char *juices[] = {
      "dragonfruit", "waterberry", "sharonfruit", "uglifruit"
      "rumberry", "kiwifruit", "mulberry", "strawbery",
      "blueberry", "blackberry", "starfruit"
    };
    
    char *a;
    puts(juices[6]);
    a = juices[2];
    juices[2] = juices[8];
    juices[8] = a;
    puts(juices[8]);
    print_reverse(juices[(18 + 7) / 5]);
    puts(juices[2]);
    print_reverse(juices[9]);
    juices[1] = juices[3];
    puts(juices[10]);
    print_reverse(juices[1]);
    
    return 0;
}
