// BJ 4948- �����佺�׳�ü �̿��ϸ� �Ҽ� ������ ���� �� ����. 
#include <iostream>

using namespace std;

int main(void)
{
	int n = 0, index = 0; // index ��� �迭 index
	int arr[10];

	while (1) {
		int count = 0;  // �Ҽ��� ���� ����
		cin >> n;
		if (n == 0) {
			break;
		}

		for (int i = n+1;i <= 2 * n;i++) {  // n���� 2n
			int a = 0; // �� �������� ����� ���� ����
			for (int j = 2;j <= i;j++) {
				if (i%j == 0) {
					a++;    
				}
			}

			if (a == 1) {  // ����� �ڱ��ڽŸ� ���� ��
				count++;
			}
		}

		// �Ҽ��� ���� ��� �迭�� �����ϱ�
		arr[index] = count;
		index++;
	}

	// ��� ����ϱ�
	for (int i = 0;i < index;i++) {
		cout << arr[i] << endl;
	}

	return 0;
}