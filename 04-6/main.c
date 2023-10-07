//
//  main.c
//  04-6
//
//  Created by MacBook Air on 2023/10/07.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int input;
    int sec, min, hour;
    
    printf("input second : ");
    scanf("%d", &input);
    
    sec = input%60;
    min = (input%3600)/60;
    hour = input/3600;
    
    printf("The time for %d second is %d : %d : %d \n", input, hour, min, sec);
    return 0;
}

