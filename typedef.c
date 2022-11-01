#include <stdio.h>
#include <stdlib.h>

typedef struct date{
    int month;
    int day;
    int year;
}Date;

Date get_date(){
    Date d;
    printf("Enter month: ");
    scanf("%d", &d.month);
    printf("Enter day: ");
    scanf("%d", &d.day);
    printf("Enter year: ");
    scanf("%d", &d.year);
    return d;
}

void print_date(Date d){
    printf("Date: %d/%d/%d", d.month, d.day, d.year);
}

int main(){
    Date dataNascimento = get_date();
    print_date(dataNascimento);
    return 0;
}
