#include <stdio.h>

char *day[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
char *month[1] = {"January"};
int year = 2023;
int start_day = 1;

void print_days();
void print_date();

int main(){
    printf("%s %d\n", month[0], year);
    print_days();
    print_date();
    printf("\n");
}

void print_days(){
    //Prints day names
    for(int i = 0; i < 7; i++){
        printf("%s\t", day[i]);
    }
    printf("\n");
}

void print_date(){
    //Allows for any start date
    for(int d = 0; d < (start_day-1); d++){
        printf("\t");
    }
    //Prints each day number
    for(int x = 1; x <= 31; x++){
        printf("%d\t", x);
        if((x+start_day-1) % 7 == 0){
            printf("\n");
        }
    }
}
