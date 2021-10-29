//#2
//class Solution {
//public:
//	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//		//先以整数的形式相加再拆分逆序储存到数组中
//		ListNode*l1[];
//		ListNode * 12[];
//		sz1 = L1[].length；
//			sz2 = L2[].length;
//		int sum1 = 0;
//		int sum2 = 0;
//		int sum3 = 0;
//		for (int i = 0; i < sz1; i++)
//		{
//			sum1 += L1[i] * 10 * i;
//			for (int j = 0; j < sz2; j++)
//			{
//				sum2 += L2[j] * 10 * j;
//			}
//			sum3 == sum1 + sum2;
//			sz3 = sum3.length;
//			new string  L3 = string L3[];
//			for (int k = 0; k<sz3; k++)
//			{
//				L3[] = sum3 % (10 * k);
//			}
//		}
//
//	}
//};
class Solution{
	public：
	ListNode*addTwoNumbers(ListNode*ll, ListNode*l2)
	{
		ListNode *head = nullptr, *tail = nullptr;
		int carry = 0;
		whill(l1 || l2)
		{
			int n1 = l1 ? l1->vla : 0;
			int n2 = l2 ? l2->val : 0;
			int sum = n1 + n2 + carry;
			if (!head)
			{
				head = tail = new ListNode(sum % 10);
			}
			else
			{
				tail->next = new ListNode(sum % 10);
				tail = tail->next;
			}
			carry = sum / 10;
			if (l1)
			{
				l1 = l1->next;
			}
			if (l2)
			{
				l2 = l2->next;
			}
		}
		if (carry  >  0)
		{
			tail -> next = new ListNode(carry);
		}
		return head;
	}
};