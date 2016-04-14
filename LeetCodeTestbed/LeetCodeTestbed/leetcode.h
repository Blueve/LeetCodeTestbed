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
#include <xstddef>
#include <functional>

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}

    TreeNode(string data)
    {
        int len = data.length();
        int num = 0, sign = 1;
        bool nil = false, number = false;
        TreeNode* root = NULL;
        queue<TreeNode**> q;
        q.push(&root);
        for (int i(1); i < len; ++i)
        {
            auto ch = data[i];
            if (ch == ',' || ch == ']')
            {
                auto node = q.front();
                q.pop();
                if (!nil && number)
                {
                    *node = new TreeNode(sign * num);
                    q.push(&((*node)->left));
                    q.push(&((*node)->right));
                }
                sign = 1;
                num = nil = number = 0;
            }
            else if (ch == 'n')
            {
                nil = true;
                i += 3;
            }
            else if (ch == '-')
                sign = -1;
            else if (ch == ' ');
            else
            {
                number = true;
                num *= 10;
                num += ch - '0';
            }
        }
        *this = *root;
    }
};


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}

	ListNode(initializer_list<int> init)
	{
		auto node = this;
		for (auto i : init)
		{
			node->next = new ListNode(i);
			node = node->next;
		}
		auto tmp = this->next;
		if(tmp)
		{
			*this = *tmp;
			delete tmp;
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

struct UndirectedGraphNode {
	int label;
	vector<UndirectedGraphNode *> neighbors;
	UndirectedGraphNode(int x) : label(x) {};
};