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

	calculateTravelDays(); //함수호출

	return 0;
}
int getSum(int numArray[],int length) { //전체 일 수를 더하는 함수 만들기
	int totalDays=0; //전체 일수 초기화
	for (int i = 0; i < length; i++) { //변수만큼 반복
		totalDays += numArray[i]; //배열의 요소를 합계에 더하기
	}
	return totalDays;//결과 값 반환
}

double getAverage(int numArray[],int length) { //평균을 구하는 함수 만들기
	int totalDays = 0; //전체 일수 초기화
	for (int i = 0; i < length; i++) { //변수만큼 반복
		totalDays += numArray[i]; //배열의 요소를 합계에 더하기
	}
	double averageDays = (double)totalDays / length; //평균을 계산하고 소수점까지 반환
	return averageDays;//결과값 반환
}

void getFamousCity(double dayArray[],int length) { //인기있는 도시 구하는 함수 만들기
	double maxDay = 0; //최대 평균 일수를 저장하는 변수 초기화
	int maxDayIndex = 0; //최대 평균 일수를 갖는 도시의 인덱싱 정보를 저장할 변수 초기화
	for (int i = 0; i < length; i++) { //배열을 반복
		if (dayArray[i] > maxDay) { //현재 도시의 평균일수가 최대 평균 일수보다 크면
			maxDay = dayArray[i]; //최대 평균 일수를 재설정
			maxDayIndex = i; //최대 평균일수를 갖는 도시 인덱스 저장
		}
	}
	printf("평균일 기준으로 가장 인기있었던 도시는 %s입니다. (평균 머문일: %.2f)\n", cities[maxDayIndex], maxDay); //문구 출력
}

void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE];
	for (int i = 0; i < NUMCITY; i++) { //도시 수 만큼 반복
		for (int j = 0; j < NUMPEOPLE; j++) { //사람 수 만큼 반복
			printf("도시 %s에서 사람 %s가 보낸 일 수를 입력하세요:", cities[i], names[j]); //문구 출력
			scanf_s("%d", &travelDays[i][j]); //도시 사람 입력받기
		}
	}
	double averageDays[NUMCITY]; //평균 함수 호출
	for (int i = 0; i < NUMCITY; i++) { //도시의 수보다 작을때 까지
		int totalDay = getSum(travelDays[i], NUMPEOPLE); //전체 일수 저장
		double aveargeDay = getAverage(travelDays[i], NUMPEOPLE); //평균일수 저장
		printf("도시 %s에서 보낸 총 일수: %d, 평균 일 수: %.2f\n", cities[i], totalDay, aveargeDay); //문구 출력
		averageDays[i] = aveargeDay; //평균일 일수를 가지는 도시 인덱스에 평균일 저장
	}
	getFamousCity(averageDays, NUMCITY); //평균일수 기준으로 인기 도시 출력하는 함수 호출
}