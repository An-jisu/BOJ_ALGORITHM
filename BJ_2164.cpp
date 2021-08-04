// 큐 이용
#include <iostream>  // https://blog.naver.com/anjisu2001/222456799415

using namespace std;

class Queue {
private:
	int front;
	int rear;
	int* queue = new int[5000000]; // 값을 담기 위한 공간 할당

public:
	void init_queue() {
		rear = -1;
		front = -1;
	}

	void enqueue(int x) {
		queue[++(rear)] = x;  // 넣을 때는 rear 증가시키고 넣기
	}

	int dequeue() {  // 뺄 때는 front를 증가시키고 빼기
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
	// 카드의 갯수 입력받기
	int n = 0;
	cin >> n;

	// 큐 초기화시키기(1~카드갯수)
	Queue* queue = new Queue();
	for (int i = 1;i <= n;i++) {
		queue->enqueue(i);
	}

	// rear랑 front차이 1이면 종료(값 하나 남은 것) 
	while (queue->get_size() != 1) {
		queue->dequeue();  // 맨 위에거 빼기
		queue->enqueue(queue->dequeue()); // 맨 앞꺼 맨 뒤로 보내기
	}

	// 마지막 하나 남은 값 출력
	cout << queue->get_result()<<endl;

	return 0;
}