#include<iostream>
#include<string>
#include<stack>
using namespace std;

class ListNode {
public:
	friend class LinkedList;
	ListNode() :data(0), next(0) {};
	ListNode(int a) :data(a), next(0) {};
private:
	int data;
	ListNode* next;
};

class LinkedList {
public:
	LinkedList() :first(0) { };
	void push_back(int n) {
		ListNode* newnode = new ListNode(n);

		if (first == 0) {
			first = newnode;
			return;
		}

		ListNode* current = first;
		while (current->next != 0) {
			current = current->next;
		}
		current->next = newnode;
	}
	bool palindrome() {
		if (first == NULL || first->next == NULL) return true;

		ListNode* current=first;
	}
	
private:
	ListNode *first;

};

int main() {
	string ss;
	while (getline(cin, ss)) {
		LinkedList list;
		for (int i = 0; i < ss.size(); i++) {
			if (ss[i] == '-' || ss[i] == '>') {
				continue;
			}
			else {
				list.push_back(ss[i]-48);
			}
		}
		if (list.palindrome()) {
			cout << "true" << endl;
		}
		else {
			cout << "false" << endl;
		}
	}
}