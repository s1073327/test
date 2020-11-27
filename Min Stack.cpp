#include<iostream>
#include<stack>
using namespace std;

class MinStack{
public:
	MinStack() {
		cout << "null" << endl;
	}
	~MinStack() {
	}
	void push(int n) {
		stack1.push(n);
		if (stack2.size() != 0) {
			if (stack1.top() < stack2.top()) {
				stack2.push(n);
			}
			else {
				stack2.push(stack2.top());
			}
		}
		else {
			stack2.push(n);
		}
		cout << "null" << endl;
	}
	void pop() {
		stack1.pop();
		stack2.pop(); 
		cout << "null" << endl;
	}
	void top() {
		cout << stack1.top() << endl;
	}
	void getMin() {
		cout << stack2.top() << endl;
	}
private:
	stack<int> stack1;
	stack<int> stack2;
};

int main() {
	MinStack minstack;
	minstack.push(-2);
	minstack.push(0);
	minstack.push(-3);
	minstack.getMin();  
	minstack.pop();
	minstack.top();  
	minstack.getMin();  
	system("pause");
	return 0;
}