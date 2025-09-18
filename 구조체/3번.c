#include<stdio.h>

struct Date{
    int year;
    int month;
    int day;
};
struct Employee{
    char name[100];
    int num;
    struct Date here;
};

int main(void)
{
    struct Employee em1;
    struct Employee em2;
    struct Employee em3;
    
    scanf("%s %d %d %d %d %d", em1.name, &em1.num, &em1.here.year, &em1.here.month, &em1.here.day);
    scanf("%s %d %d %d %d %d", em2.name, &em2.num, &em2.here.year, &em2.here.month, &em2.here.day);
    scanf("%s %d %d %d %d %d", em3.name, &em3.num, &em3.here.year, &em3.here.month, &em3.here.day);

    if ((em1.here.year < em2.here.year ||
        (em1.here.year == em2.here.year && em1.here.month < em2.here.month) ||
        (em1.here.year == em2.here.year && em1.here.month == em2.here.month && em1.here.day < em2.here.day))
        &&
        (em1.here.year < em3.here.year ||
        (em1.here.year == em3.here.year && em1.here.month < em3.here.month) ||
        (em1.here.year == em3.here.year && em1.here.month == em3.here.month && em1.here.day < em3.here.day))) {
        printf("%s %d %d-%02d-%02d\n", em1.name, em1.num, em1.here.year, em1.here.month, em1.here.day);
    }

    if ((em2.here.year < em1.here.year ||
        (em2.here.year == em1.here.year && em2.here.month < em1.here.month) ||
        (em2.here.year == em1.here.year && em2.here.month == em1.here.month && em2.here.day < em1.here.day))
        &&
        (em2.here.year < em3.here.year ||
        (em2.here.year == em3.here.year && em2.here.month < em3.here.month) ||
        (em2.here.year == em3.here.year && em2.here.month == em3.here.month && em2.here.day < em3.here.day))) {
        printf("%s %d %d-%02d-%02d\n", em2.name, em2.num, em2.here.year, em2.here.month, em2.here.day);
    }

    if ((em3.here.year < em1.here.year ||
        (em3.here.year == em1.here.year && em3.here.month < em1.here.month) ||
        (em3.here.year == em1.here.year && em3.here.month == em1.here.month && em3.here.day < em1.here.day))
        &&
        (em3.here.year < em2.here.year ||
        (em3.here.year == em2.here.year && em3.here.month < em2.here.month) ||
        (em3.here.year == em2.here.year && em3.here.month == em2.here.month && em3.here.day < em2.here.day))) {
        printf("%s %d %d-%02d-%02d\n", em3.name, em3.num, em3.here.year, em3.here.month, em3.here.day);
    }
}