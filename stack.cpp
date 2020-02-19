#include<iostream>
using namespace std;

const int MAX_SIZE = 100;
class stack{
private:
	int top;
	int items[MAX_SIZE];
public:
	stack() :top(-1){};
	void push(int element){
		if (top >= MAX_SIZE - 1){
			cout << "stack is full" << endl;
		}
		else{
			top++;
			items[top] = element;
		}
	}
	bool isEmpty() {
		if (top == -1)
			return true;
		else
			return false;
	};
	void pop() {
		if (isEmpty()){ cout << "stack is empty" << endl; }
		else{ top--; };
	}
	void pop(int &element) {
		if (isEmpty()){ cout << "stack is empty" << endl; }
		else{
			element = items[top];
			top--;
		};
	};

	int getTop(int &stacktop) {
		if (isEmpty()){ cout << "stack is empty to get top" << endl; }
		else
		{
			stacktop = items[top];
			top--;
		};
		return stacktop;
	};
	void print() {
		cout << "[";
		for (int i = top; i >= 0; i--)
		{
			cout << items[i] << " ";
		};
		cout << "]";
		cout << endl;
	}
};

int main() {
	stack s1;
	s1.push(5);
	s1.push(10);
	s1.push(15);
	s1.push(20);
	s1.pop();
	s1.push(7);
	s1.print();



		system("pause");
		return 0;
};