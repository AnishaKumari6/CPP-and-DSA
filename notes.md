**Time Complexity**
    * It is the rate of change of the time taken increase wrt input 

**Sliding Window**
    * looking at a contiguous subarray or substring.
    * expand the right pointer to include more elements.
    * shrink the left pointer when some condition breaks.
    # when to use: 
        *The problem talks about a contiguous segment (subarray / substring).
        *You are asked for longest, shortest, or count.
        *There is a condition that can be maintained incrementally (like sum, frequency, distinct count).
**Type casting**
    * jab chota data type bade data type me jaata hai, to usually compiler khud convert kar deta hai. Lekin jab bada type chote type me jaata hai, tab information lose ho sakti hai, isliye type casting karna padta hai.
    ⚡ Most important trick (used everywhere in DSA)
    **Convert '0' → 0, '1' → 1, etc.**
    char ch = '7';
    int num = ch - '0';

    cout << num;   // 7

    ** When ch is a character **
    char ch = 'c';
    int index = ch - 'a';

    cout << index;   // 2
    👉 This is used for:
    indexing arrays
    hashing alphabets