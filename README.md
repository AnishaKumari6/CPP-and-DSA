541. Reverse String II
     
s.length() already int deta hai, phir (int) cast kyu?

->s.length()
int nahi deta ❌
Yeh return karta hai:size_t
size_t kya hota hai?
Unsigned integer type (negative nahi ho sakta)
Mostly unsigned long hota hai
      
    class Solution {
    public:
        string reverseStr(string s, int k) {
            for(int i = 0; i < s.length(); i += 2*k) {
                int left = i;
                int right = min(i + k - 1, (int)s.length() - 1);
                
                // reverse k characters
                while(left < right) {
                    swap(s[left], s[right]);
                    left++;
                    right--;
                }
            }
            return s;
        }
    };


(Floyd’s Cycle Detection):

            class Solution {
            public:
                int findDuplicate(vector<int>& nums) {
                    int slow = nums[0];
                    int fast = nums[0];
            
                    // Phase 1: Detect cycle
                    do {
                        slow = nums[slow];
                        fast = nums[nums[fast]];
                    } while (slow != fast);
            
                    // Phase 2: Find duplicate (cycle entry)
                    slow = nums[0];
                    while (slow != fast) {
                        slow = nums[slow];
                        fast = nums[fast];
                    }
            
                    return slow;
                }
            };
