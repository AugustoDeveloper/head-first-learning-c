//
//  main.c
//  project-three-cards
//
//  Created by Augusto Cesar on 03/07/17.
//  Copyright © 2017 Augusto Cesar. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char cards[] = "JQK";
    char a_card = cards[2];
    cards[2] = cards[1];
    cards[1] = cards[0];
    cards[0] = cards[2];
    cards[2] = cards[1];
    cards[1] = a_card;
    
    puts(cards);
    return 0;
}
