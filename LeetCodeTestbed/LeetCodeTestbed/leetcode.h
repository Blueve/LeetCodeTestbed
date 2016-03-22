#pragma once

#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <array>
#include <stack>
#include <unordered_set>
#include <set>
#include <unordered_map>
#include <map>
#include <bitset>
#include <utility>

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}

	ListNode(initializer_list<int> init)
	{
		ListNode h(0);
		auto node = &h;
		for (auto i : init)
		{
			node->next = new ListNode(i);
			node = node->next;
		}
		if (h.next)
		{
			this->val = h.next->val;
			this->next = h.next->next;
		}
	}
};

struct TreeLinkNode {
	int val;
	TreeLinkNode *left, *right, *next;
	TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
};

struct Interval {
	int start;
	int end;
	Interval() : start(0), end(0) {}
	Interval(int s, int e) : start(s), end(e) {}
};