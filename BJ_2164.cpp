// ť �̿�
#include <iostream>  // https://blog.naver.com/anjisu2001/222456799415

using namespace std;

class Queue {
private:
	int front;
	int rear;
	int* queue = new int[5000000]; // ���� ��� ���� ���� �Ҵ�

public:
	void init_queue() {
		rear = -1;
		front = -1;
	}

	void enqueue(int x) {
		queue[++(rear)] = x;  // ���� ���� rear ������Ű�� �ֱ�
	}

	int dequeue() {  // �� ���� front�� ������Ű�� ����
		int item = queue[++front];
		return item;
	}

	int get_size() {
		return rear - front;
	}

	int get_result(){
		return queue[front+1];
	}
};

int main(void)
{
	// ī���� ���� �Է¹ޱ�
	int n = 0;
	cin >> n;

	// ť �ʱ�ȭ��Ű��(1~ī�尹��)
	Queue* queue = new Queue();
	for (int i = 1;i <= n;i++) {
		queue->enqueue(i);
	}

	// rear�� front���� 1�̸� ����(�� �ϳ� ���� ��) 
	while (queue->get_size() != 1) {
		queue->dequeue();  // �� ������ ����
		queue->enqueue(queue->dequeue()); // �� �ղ� �� �ڷ� ������
	}

	// ������ �ϳ� ���� �� ���
	cout << queue->get_result()<<endl;

	return 0;
}