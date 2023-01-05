/*January 2023
Sun    Mon    Tue     Wed    Thu     Fri    Sat
1      2      3       4      5       6      7
8      9      10      11     12     13      14
15      16       17        18       19       20       21
22      23       24        25       26       27       28
29      30       31*/



#include <stdio.h>

char *days[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
char *currMonth[1] = {"January"};
int year = 2023;
int space = 4;
int start_day = 1;

void print_days();
void print_date();

int main(){
    printf("%s %d\n", currMonth[0], year);
    print_days();
    print_date();
    printf("\n");
}

void print_days(){
    for(int i = 0; i < 7; i++){
        printf("%s", days[i]);
        for(int s = 0; s < space; s++){
            printf(" ");
        }
    }
    printf("\n");
}

void print_date(){
    int less_space = 0;
    for(int x = 1; x <= 31; x++){
        printf("%d", x);
        if(x >= 10){
            less_space = 1;
        }
        for(int s = 0; s < space+2-less_space; s++){
            printf(" ");
        }
        if(x % 7 == 0){
            printf("\n");
        }
    }
}