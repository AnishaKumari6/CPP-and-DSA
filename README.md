3658. GCD of Odd and Even Sum

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


283. Move Zeroes
     is ques mai main logic swap ka tha isme hme is chiz pe dhyan dena hai ki i and j mai j tabhi move krega jab i!=0 hoga      ,isme i aage non-zero values ke pas jayega aur j zero pe hi rhega aur tab hi swap honge values

               class Solution {
          public:
              void moveZeroes(vector<int>& nums) {
                  int j=0;
                  for(int i=0;i<nums.size();i++){
                      if(nums[i]!=0){
                          swap(nums[i],nums[j]);
                          j++;
                      }
                  }
          
              }
          };
     iska ek aur method hai jisme hmm combing array ka concept use kar sakte hai jisme hmm j=0 rkhenge and jab i!=0 toh nums[j]=nums[i] jiski wajah se sare non-zero values pehle sorted way may store honge aur zeroes ke liye ek loop lgega isme j<nums.size() krenge aur nums[j]=0.......aisehi last mai sare zeros store kar lenge.

26.Remove Duplicates from Sorted Array

               class Solution {
               public:
               int removeDuplicates(vector<int>& nums) {
                  map<int,int>mp;
                  int sum=0;
                  int j=0;
                  for(int i=0;i<nums.size();i++){
                      mp[nums[i]]++;
                  }
                  nums.clear();
                  for(auto &i:mp){
                      sum++;
                      nums.push_back(i.first);
                      j++;
                  }
                  return sum;
                  
               }
               }
Majority Element Problem: Find the element that appears more than n/2 times in an array.

Brute Force: Count occurrences for each element with nested loops.

Better Approach: Use hashing (maps) to store frequencies efficiently.

Best Approach (Moore’s Voting Algorithm): Selects a candidate and adjusts a counter based on matches/mismatches, then verifies if the candidate is truly the majority. This runs in linear time and constant space.
               
