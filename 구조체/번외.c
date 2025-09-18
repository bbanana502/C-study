#include<stdio.h>

struct Student{
    int num;
    char name[50];
    int korean;
    int math;
};

int main(void){
    struct Student Haon = {1305,"김하온", 87, 99};
    struct Student Jaeha = {1206,"재하", 78, 12};
    struct Student OnSeeOn = {1401,"온시온", 39, 100};

    int m_Max = 0;
    int k_Max = 0;
    int m_num = 0;
    int k_num = 0;
    char m_student[50];
    char k_student[50];

    if (Haon.math > m_Max)
    {
        m_student[0] = 'H';
        m_student[1] = 'a';
        m_student[2] = 'o';
        m_student[3] = 'n';
        m_student[4] = '\0';

        m_Max = Haon.math;
        m_num = Haon.num;
    }
    if (Haon.korean > k_Max)
    {
        k_student[0] = 'H';
        k_student[1] = 'a';
        k_student[2] = 'o';
        k_student[3] = 'n';
        k_student[4] = '\0';

        k_Max = Haon.korean;
        k_num = Haon.num;
    }
    if (Jaeha.math > m_Max)
    {
        m_student[0] = 'J';
        m_student[1] = 'a';
        m_student[2] = 'e';
        m_student[3] = 'h';
        m_student[4] = 'a';
        m_student[5] = '\0';

        m_Max = Jaeha.math;
        m_num = Jaeha.num;
    }
    if (Jaeha.korean > k_Max)
    {
        k_student[0] = 'J';
        k_student[1] = 'a';
        k_student[2] = 'e';
        k_student[3] = 'h';
        k_student[4] = 'a';
        k_student[5] = '\0';

        k_Max = Jaeha.korean;
        k_num = Jaeha.num;
    }
    if (OnSeeOn.math > m_Max)
    {
        m_student[0] = 'O';
        m_student[1] = 'n';
        m_student[2] = 'S';
        m_student[3] = 'e';
        m_student[4] = 'e';
        m_student[5] = 'O';
        m_student[6] = 'n';
        m_student[7] = '\0';

        m_Max = OnSeeOn.math;
        m_num = OnSeeOn.num;
    }
    if (OnSeeOn.korean > k_Max)
    {
        k_student[0] = 'O';
        k_student[1] = 'n';
        k_student[2] = 'S';
        k_student[3] = 'e';
        k_student[4] = 'e';
        k_student[5] = 'O';
        k_student[6] = 'n';
        k_student[7] = '\0';

        k_Max = OnSeeOn.korean;
        k_num = OnSeeOn.num;
    }

    printf("국어 1짱 : %s \t점수 : %d \t학번 : %d\n", k_student, k_Max, k_num);
    printf("수학 1짱 : %s \t점수 : %d \t학번 : %d\n", m_student, m_Max, m_num);
}
