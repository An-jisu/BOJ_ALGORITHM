// BJ 1057��-������(��ʸ�Ʈ)
/* �� ���尡 ����ɼ��� �����ΰ� ���Ѽ��� �� ��° ���� ���ϴ��� ���ؼ�
�迭�� ����.(�� ���� ����ŭ �ݺ�)
�� ���� ������ �� ���� ��ȯ. �ݺ��� �������� ���ȿ��� ���� ������ -1��ȯ */
#include <iostream>
#include <cmath>

using namespace std;

int get_round(int* arr_kim, int* arr_lim, int round_sum, int kim_num, int lim_num);

int main(void)
{
	// �Է¹ޱ�
	int N = 0, kim_num = 0, lim_num;
	cin >> N >> kim_num >> lim_num;

	// �� ROUND�� ���ϱ�(���� 1���� �ο����� 2�� ������ ���ϱ�-Ȧ���̸� +1)
	int round_sum = 0;
	if (N % 2 != 0) { // Ȧ�����̸�
		round_sum++;
	}

	while (N >= 1) {
		round_sum++;
		N /= 2;
	}

	// ROUND�� ��ŭ, �����ΰ� ���Ѽ��� �� ���帶�� ���°�� ���ϴ��� �����ϱ� ���� ������ �迭 �����Ҵ�
	int* arr_kim = NULL;
	int* arr_lim = NULL;
	arr_kim = new int[round_sum];
	arr_lim = new int[round_sum];

	// ����ϴ� ROUND ��ȣ���ϱ� ���� �Լ� ȣ��(�Ű����� �ְ�-�迭, ��ȯ�� ����-ROUND �� �Ǵ� -1)
	int result = get_round(arr_kim, arr_lim, round_sum, kim_num, lim_num);

	// �Լ��� ��ȯ�� ����ϱ�
	cout << result << endl;

	return 0;
}

int get_round(int* arr_kim, int* arr_lim, int round_sum, int kim_num, int lim_num) {
	int round_now = 0;
	for (int i = 0;i < round_sum;i++) {
		arr_kim[round_now] = (int)ceil(kim_num / 2.0);
		arr_lim[round_now] = (int)ceil(lim_num / 2.0);
		if (arr_kim[round_now] == arr_lim[round_now]) {
			return round_now + 1; // �ε����̴ϱ� 1���ؼ� ��ȯ
		}

		kim_num = arr_kim[round_now];
		lim_num = arr_lim[round_now];
		round_now++;
	}

	return -1;
}