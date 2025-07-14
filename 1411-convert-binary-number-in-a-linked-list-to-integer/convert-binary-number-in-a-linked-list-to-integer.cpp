/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        string s = "";
        ListNode* temp = head;
        while(temp){
            if(temp->val==1) s += "1";
            else s += "0";
            temp = temp->next;
        }
        reverse(begin(s),end(s));
        int res = 0, cnt = 0,i=0;
        while(i<s.size()){
            if(s[i]=='1'){
                res += pow(2,cnt);
                cnt++;
            }
            else{
                cnt++;
            }
            i++;
        }
        return res;
    }
};