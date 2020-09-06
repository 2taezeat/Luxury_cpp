#include <iostream>
#include <string>
using namespace std;

class BaseArray {
private:
	int capacity; // ���� �Ҵ�� �޸� �뷮
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
	int size; // ���� ť �ȿ� �ִ� �������� ����
public:
	MyQueue(int capacity); // ������
	void enqueue(int n); // fun1
	int dequeue(); // fun2
	int capacity(); // fun3
	int length(); // fun4

};

// ������
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
	cout << "ť�� ������ 5���� ������ �Է��϶� >> ";
	
	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		mQ.enqueue(n);
	}
	cout << "ť�� �뷮: " << mQ.capacity() << ", ť�� ũ��: " << mQ.length() << endl;
	cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";

	while (mQ.length() != 0) {
		cout << mQ.dequeue() << ' ';
	}
	cout << endl << "ť�� ���� ũ�� : " << mQ.length() << endl;

	return 0;
}