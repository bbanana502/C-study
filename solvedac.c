#include<stdio.h>
int main(void)
{
    int member;
    scanf("%d", &member);
    int s, m, l, xl, xxl, xxxl;
    scanf("%d %d %d %d %d %d", &s, &m, &l, &xl, &xxl, &xxxl);
    s--;
    m--;
    l--;
    xl--;
    xxl--;
    xxxl--;
    int T, P;
    scanf("%d %d",&T ,&P);
    int totalt = s/T+1 + m/T+1 + l/T+1 + xl/T+1 + xxl/T+1 + xxxl/T+1;
    if (s < 0) totalt--;
    if (m < 0) totalt--;
    if (l < 0) totalt--;
    if (xl < 0) totalt--;
    if (xxl < 0) totalt--;
    if (xxxl < 0) totalt--;
    int lastP = member%P;
    int originP = member/P;

    printf("%d\n%d %d", totalt, originP, lastP);
    
}