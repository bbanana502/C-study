#include <stdio.h>

int main(void) {
    int num;
    double score[1000], max = 0, sum = 0;
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%lf", &score[i]);
        if (score[i] > max) {
            max = score[i];  // 최댓값 찾기
        }
    }

    for (int i = 0; i < num; i++) {
        sum += (score[i] / max) * 100; // 조작된 점수 합산
    }

    printf("%lf\n", sum / num);  // 새로운 평균 출력
    return 0;
}
