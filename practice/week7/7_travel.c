#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2

char names[NUMPEOPLE][10];
char cities[NUMCITY][10];

void calculateTravelDays();

int main() {

	printf("%d개의 도시명을 차례대로 입력해주세요. \n", NUMCITY); //사용자로부터 도시이름 입력받기
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}

	printf("%d개의 여행자 이름을 차례대로 입력해주세요. \n", NUMPEOPLE); //사용자로부터 사람 이름 입력받기
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}

	calculateTravelDays(names); //함수호출

	return 0;
}

void calculateTravelDays() { //calculateTravelDays()함수 생성
	int travelDays[NUMCITY][NUMPEOPLE]; //2차원 배열로 만들기

	for (int i = 0; i < NUMCITY; i++) { //도시 수 만큼 반복
		for (int j = 0; j < NUMPEOPLE; j++) { //사람 수 만큼 반복
			printf("도시 %s에서 사람 %s가 보낸 일 수를 입력하세요:", cities[i], names[j]); //문구 출력
			scanf_s("%d", &travelDays[i][j]); //도시 사람 입력받기
		}
	}

	for (int i = 0; i < NUMCITY; i++) { //도시 수 만큼 반복
		int totalDays = 0; //전체 일수 초기화
		for (int j = 0; j < NUMPEOPLE; j++) { //사람 수 만큼 반복
			totalDays += travelDays[i][j]; //전체 일수에 2차원 배열 인덱싱 해서 더하기
		}
		float averageDays = (float)totalDays / NUMPEOPLE; //전체 일 수를 사람 수로 나눠서 평균일수 구하기
		printf("도시 %s에서 보낸 총 일수: %d, 평균 일 수: %.2f\n", cities[i], totalDays, averageDays); //문구 출력
	}
}