// BJ 4948- 에라토스테네체 이용하면 소수 빠르게 구할 수 있음. 
#include <iostream>

using namespace std;

int main(void)
{
	int n = 0, index = 0; // index 결과 배열 index
	int arr[10];

	while (1) {
		int count = 0;  // 소수의 개수 저장
		cin >> n;
		if (n == 0) {
			break;
		}

		for (int i = n+1;i <= 2 * n;i++) {  // n부터 2n
			int a = 0; // 각 수에서의 약수의 개수 저장
			for (int j = 2;j <= i;j++) {
				if (i%j == 0) {
					a++;    
				}
			}

			if (a == 1) {  // 약수가 자기자신만 있을 때
				count++;
			}
		}

		// 소수의 개수 결과 배열에 저장하기
		arr[index] = count;
		index++;
	}

	// 결과 출력하기
	for (int i = 0;i < index;i++) {
		cout << arr[i] << endl;
	}

	return 0;
}