#include <iostream>

using namespace std;

int main(void)
{
	// �� �Է¹ޱ�
	int month;
	cin >> month;

	// �� �Է¹ޱ�
	int day;
	cin >> day;

	// ���ǹ� Ȱ���ؼ� ����ϱ�
	if (month<1 || month>12 || day < 1 || day>31) {
		cout << "�Է��� �߸� �Ǿ����ϴ�." << endl;
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