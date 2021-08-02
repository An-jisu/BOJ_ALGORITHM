// BJ 1057번-이재헌(토너먼트)
/* 각 라운드가 진행될수록 김지민과 임한수가 몇 번째 팀에 속하는지 구해서
배열에 저장.(총 라운드 수만큼 반복)
그 수가 같으면 그 값을 반환. 반복문 빠져나올 동안에도 같지 않으면 -1반환 */
#include <iostream>
#include <cmath>

using namespace std;

int get_round(int* arr_kim, int* arr_lim, int round_sum, int kim_num, int lim_num);

int main(void)
{
	// 입력받기
	int N = 0, kim_num = 0, lim_num;
	cin >> N >> kim_num >> lim_num;

	// 총 ROUND수 구하기(몫이 1보다 인원수를 2로 나눠서 구하기-홀수이면 +1)
	int round_sum = 0;
	if (N % 2 != 0) { // 홀수명이면
		round_sum++;
	}

	while (N >= 1) {
		round_sum++;
		N /= 2;
	}

	// ROUND수 만큼, 김지민과 임한수가 각 라운드마다 몇번째에 속하는지 저장하기 위한 각각의 배열 동적할당
	int* arr_kim = NULL;
	int* arr_lim = NULL;
	arr_kim = new int[round_sum];
	arr_lim = new int[round_sum];

	// 대결하는 ROUND 번호구하기 위한 함수 호출(매개변수 있고-배열, 반환값 있음-ROUND 수 또는 -1)
	int result = get_round(arr_kim, arr_lim, round_sum, kim_num, lim_num);

	// 함수의 반환값 출력하기
	cout << result << endl;

	return 0;
}

int get_round(int* arr_kim, int* arr_lim, int round_sum, int kim_num, int lim_num) {
	int round_now = 0;
	for (int i = 0;i < round_sum;i++) {
		arr_kim[round_now] = (int)ceil(kim_num / 2.0);
		arr_lim[round_now] = (int)ceil(lim_num / 2.0);
		if (arr_kim[round_now] == arr_lim[round_now]) {
			return round_now + 1; // 인덱스이니까 1더해서 반환
		}

		kim_num = arr_kim[round_now];
		lim_num = arr_lim[round_now];
		round_now++;
	}

	return -1;
}