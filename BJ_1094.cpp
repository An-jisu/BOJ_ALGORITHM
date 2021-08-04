// ���� �̿�
#include <iostream> // https://blog.naver.com/anjisu2001

using namespace std;

class Stack {
private:
	int stack[50] = { 0 };
	int top = -1;

public:
	void push(int item) {
		stack[++top] = item; // top������Ű�� �ֱ�
	}

	int pop() {
		int item = stack[top--];  // ���� ������Ű��
		return item;
	}

	int stack_sum() {
		int sum = 0;
		for (int i = 0;i <= top;i++) {
			sum =sum+ stack[i];
		}
		return sum;
	}

	int get_count() { // ���� �ȿ� �ִ� ���� ���� ���� �Լ�
		return top + 1;
	}
};


int main(void)
{
	Stack* stack = new Stack();

	// X�Է¹ޱ�
	int x = 0;
	cin >> x;

	// ���� ª�� ������ ���� 64�� �ʱ�ȭ
	int stick = 64;

	stack->push(stick); // �� ó�� 64�� ���ÿ� �ֱ�
	while (stack->stack_sum() > x) { // ���� ���� �� x���� Ŭ ���� �ݺ�
		stick = stack->pop();
		stick = stick / 2;
		stack->push(stick); // �������� �ڸ� �ΰ��� ���� ��� ���ÿ� �־���.
		stack->push(stick);

		if ((stack->stack_sum()-stick)>=x) {  // ���� �ڸ� �ϳ� ������ ���� ���� �յ� x���� ū ��� �ϳ� ������
			stack->pop();
		}
	}

	// ���� �ȿ� �ִ� ������ ���� ����ϱ�
	cout << stack->get_count()<<endl;

	return 0;
}