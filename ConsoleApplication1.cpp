#include <iostream>
using namespace std;
#define size  5

int stack[size], top = -1; 

void push(int value) {
	if (top == size-1) {
		cout << "stack overflow" << endl;
	}
	else {
		top++;
		stack[top] = value;
	}
}
int pop() {
	if (top == -1) {
		cout << "stack is empty" << endl;
	}
	else {
		return stack[top--];
	}
}
int peek() {
	if (top == -1) {
		cout << "stack is empty" << endl;
	}
	else {
		return stack[top];
	}
}
void display() {
	if (top == -1) {
		cout << "Stack Is Empty" << endl;
	}
	else {
		for (int i = top; i >= 0; i--) {
			cout << stack[i] << endl;
		}
	}
}
int main()
{
	push(5);
	push(4);
	push(3);
	push(2);
	push(1);
	pop();
	display();


}

