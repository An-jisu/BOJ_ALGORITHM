// 스택 이용
#include <iostream> // https://blog.naver.com/anjisu2001

using namespace std;

class Stack {
private:
	int stack[50] = { 0 };
	int top = -1;

public:
	void push(int item) {
		stack[++top] = item; // top증가시키고 넣기
	}

	int pop() {
		int item = stack[top--];  // 빼고 증가시키기
		return item;
	}

	int stack_sum() {
		int sum = 0;
		for (int i = 0;i <= top;i++) {
			sum =sum+ stack[i];
		}
		return sum;
	}

	int get_count() { // 스택 안에 있는 막대 개수 세는 함수
		return top + 1;
	}
};


int main(void)
{
	Stack* stack = new Stack();

	// X입력받기
	int x = 0;
	cin >> x;

	// 가장 짧은 막대의 길이 64로 초기화
	int stick = 64;

	stack->push(stick); // 맨 처음 64값 스택에 넣기
	while (stack->stack_sum() > x) { // 남은 막대 합 x보다 클 동안 반복
		stick = stack->pop();
		stick = stick / 2;
		stack->push(stick); // 절반으로 자른 두개의 막대 모두 스택에 넣어줌.
		stack->push(stick);

		if ((stack->stack_sum()-stick)>=x) {  // 절반 자른 하나 버리고 남은 막대 합도 x보다 큰 경우 하나 버리기
			stack->pop();
		}
	}

	// 스택 안에 있는 값들의 갯수 출력하기
	cout << stack->get_count()<<endl;

	return 0;
}