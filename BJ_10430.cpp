#include <iostream>

using namespace std;

int main(void)
{
	// A, B, C를 입력받기
	int A = 0, B = 0, C = 0;   // 변수 선언 및 초기화
	cout << "A, B, C를 공백으로 분리하여 입력: ";
	cin >> A >> B >> C;

	// '(A+B)%C' 계산하여 출력
	cout << "(A+B)%C: " << (A + B) % C << endl;

	// '((A%C) + (B%C))%C' 계산하여 출력
	cout << "((A%C) + (B%C))%C: " << ((A%C) + (B%C)) % C << endl;

	// '(A×B)%C' 계산하여 출력
	cout << "(A×B)%C: " << (A*B) % C << endl;

	// '((A%C) × (B%C))%C' 계산하여 출력
	cout << "((A%C) × (B%C))%C: " << ((A%C) * (B%C)) % C << endl << endl;

	return 0;
}