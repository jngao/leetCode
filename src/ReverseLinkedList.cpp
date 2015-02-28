#include<iostream>
#include "ListNode.h"
using namespace std;

/*	ÃèÊö
	Reverse a linked list from position m to n. Do it in-place and in one-pass.
	For example: Given 1->2->3->4->5->nullptr, m = 2 and n = 4,
	return 1->4->3->2->5->nullptr.
	Note: Given m, n satisfy the following condition: 1  m  n  length of list.s
*/

void ReverseLinkedList(ListNode *header){

}

int main(int argc, char **argv) {
	ListNode *header = new ListNode(1);
	ListNode *node2 = new ListNode(2);
	ListNode *node3 = new ListNode(3);
	ListNode *node4 = new ListNode(4);
	ListNode *node5 = new ListNode(5);

	header->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;

	header->printList();


}

