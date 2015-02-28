/*
 * ListNode.h
 *
 *  Created on: 2015Äê2ÔÂ26ÈÕ
 *      Author: Administrator
 */

#ifndef SRC_LISTNODE_H_
#define SRC_LISTNODE_H_
#include<iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}

	void printList() {
		ListNode *temp = this;
		while (NULL != temp->next) {
			cout << temp->val << " -> ";
			temp = temp->next;
		}
		cout << temp->val << " -> nullptr" << endl;
	}
};


#endif /* SRC_LISTNODE_H_ */
