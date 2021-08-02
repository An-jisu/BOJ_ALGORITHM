#include <iostream>

using namespace std;

int main(void)
{
	// 노드의 갯수 입력받기
	int N;
	cin >> N;

	// 부모노드 입력받기
	int* arr = new int[N];
	for (int i = 0;i < N;i++) {
		cin >> arr[i];
	}

	// 지울 노드 번호 입력받기 
	int delete_node;
	cin >> delete_node;

	while (2 * delete_node+2 < N - 1) {
		
	}

	// 리프노드의 수 구하기 

	return 0;
}