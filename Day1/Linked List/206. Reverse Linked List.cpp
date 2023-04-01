//https://leetcode.com/problems/reverse-linked-list/description/

class Solution{
	public:
		ListNode* prev_p = NULL;
		ListNode* curr_p = head;
		ListNode* next_p;
		
		while(curr_p){
			next_p = curr_p->next;
			curr_p->next = prev_p;
			
			prev_p = curr_p;
			curr_p = next_p;
		}
		head = prev_p;
		return head;
};
