#include<stdlib.h>
#include<stdio.h>
struct Student{
    char name[100];
    int score;
};
int main(void)
{
    int people;
    scanf("%d",&people);
    struct Student *students;
    students = (struct Student *)malloc(sizeof(struct Student) * people);
    if(students == NULL)
    {
        return 1;
    }

    for (int i=0; i<people; i++)
    {
        scanf("%s %d",students[i].name, &students[i].score);
    }
    int avg = 0;
    for (int i=0; i<people; i++)
    {
        avg = avg + students[i].score;
    }
    avg = avg/people;
    printf("%d",avg);

}