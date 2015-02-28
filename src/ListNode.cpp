#include "ListNode.h"


using namespace std;

void ListNode :: printList() {
	ListNode *temp = next;
	while (NULL != temp) {
		cout << temp->val << "->";
		temp = temp->next;
	}
	cout << temp->val << "->nullptr" << endl;
}

