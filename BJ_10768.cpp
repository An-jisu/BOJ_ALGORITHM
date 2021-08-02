#include <iostream>

using namespace std;

int main(void)
{
	// 월 입력받기
	int month;
	cin >> month;

	// 일 입력받기
	int day;
	cin >> day;

	// 조건문 활용해서 출력하기
	if (month<1 || month>12 || day < 1 || day>31) {
		cout << "입력이 잘못 되었습니다." << endl;
	}
	else {
		if (month>0 && month < 2) {
			cout << "Before" << endl;
		}

		else if (month>2 && month <= 12) {
			cout << "After" << endl;
		}

		else if (month == 2) {
			if (day == 18) {
				cout << "Special" << endl;
			}

			else if (day >= 1 && day < 18) {
				cout << "Before" << endl;
			}

			else if (day > 18 && day <= 31) {
				cout << "After" << endl;
			}
		}
	}

	return 0;
}