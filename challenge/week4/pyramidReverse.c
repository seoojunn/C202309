#include <stdio.h>

int main() {
    int i, j, rpy; //i, j, rows 지정
    printf("몇 층의 역피라미드를 쌓겠습니까? ");
    scanf_s("%d", &rpy);
    for (i = rpy; i >= 1; i--) { //i가 1보다 크거나 같을 때 까지 반복 i는 1씩 감소
        for (j = 1; j <= rpy - i; j++) { //
            printf("s"); //s출력
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*"); // 별표 출력
        }
        printf("\n");//줄 바꾸기
    }
    return 0;
}