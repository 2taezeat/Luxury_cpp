#include <iostream>
#include <string>
using namespace std;

class BaseArray {
private:
	int capacity; // 동적 할당된 메모리 용량
	int* mem;
protected:
	BaseArray(int capacity = 100){
		this->capacity = capacity;
		mem = new int[capacity];
	}
	~BaseArray() { delete[] mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity;  }

};
///////////////////////////////////////////////////////////

class MyQueue : public BaseArray{
	int head;
	int tail;
	int size; // 현재 큐 안에 있는 데이터의 개수
public:
	MyQueue(int capacity); // 생성자
	void enqueue(int n); // fun1
	int dequeue(); // fun2
	int capacity(); // fun3
	int length(); // fun4

};

// 생성자
MyQueue::MyQueue(int capacity) : BaseArray(capacity) {
	head = 0;
	tail = -1;
	size = 0;
}

// fun1
void MyQueue::enqueue(int n)
{
	if (size == capacity())
		return;

	put(head, n);
	head++;
	head = head % capacity();
	size++;
}
// fun2
int MyQueue::dequeue()
{
	if (size == 0)
		return -1; // queue empty error
	size--;
	tail++;
	tail = tail % capacity();

	return get(tail);
}
// fun3
int MyQueue::capacity()
{
	return getCapacity();
}
// fun4
int MyQueue::length()
{
	return size;
}


int main() {
	
	MyQueue mQ(100);
	int n;
	cout << "큐에 삽입할 5개의 정수를 입력하라 >> ";
	
	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		mQ.enqueue(n);
	}
	cout << "큐의 용량: " << mQ.capacity() << ", 큐의 크기: " << mQ.length() << endl;
	cout << "큐의 원소를 순서대로 제거하여 출력한다>> ";

	while (mQ.length() != 0) {
		cout << mQ.dequeue() << ' ';
	}
	cout << endl << "큐의 현재 크기 : " << mQ.length() << endl;

	return 0;
}