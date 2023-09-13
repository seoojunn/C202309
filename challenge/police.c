#include <stdio.h>

int main() {
    char name[50];
    int age;
    float weight;
    float height;
    char crime[100];

    // 이름 입력
    printf("이름을 입력하세요: ");
    scanf_s("%s", name);

    // 나이 입력
    printf("나이를 입력하세요: ");
    scanf_s("%d", &age);

    // 몸무게 입력
    printf("몸무게를 입력하세요: ");
    scanf_s("%f", &weight);

    // 키 입력
    printf("키를 입력하세요 (cm): ");
    scanf_s("%f", &height);

    // 범죄명 입력
    printf("범죄명을 입력하세요: ");
    scanf_s("%s", crime);

    // 입력 받은 정보 출력
    printf("\n입력된 정보:\n");
    printf("이름: %s\n", name);
    printf("나이: %d\n", age);
    printf("몸무게: %.2f kg\n", weight);
    printf("키: %.2f cm\n", height);
    printf("범죄명: %s\n", crime);

    return 0;
}