#include <iostream>

using namespace std;

int main(void)
{
	// A, B, V 입력받기 
	int A, B, V;
	cout << "공백으로 분리하여 A,B,V입력하시오: ";
	cin >> A >> B >> V;

	// 달팽이가 올라간 높이 변수, 일 수  선언하기(height)
	int height = 0, day = 0;
	while (V > height) { // 달팽이가 다 올라가지 않을동안 반복문 반복
		if (height + A >= V) {
			height = height + A; // 정상 올라간 후 미끄러지지 않음.
			day++;
			break;
		}

		else {
			height = height + A - B;
			day++;
		}
	}

	// 일 수 출력하기
	cout << day << "일이 걸립니다." << endl;

	return 0;
}