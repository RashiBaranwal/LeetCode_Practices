class Solution {
public:
    bool isPalindrome(int x) {
         if (x < 0) {
            return false;
        }
        
        long long temp = x;
        long long rev = 0;
        while(temp!=0){
            rev = rev * 10 + temp%10;
            temp = temp/10;
        }
        return (rev == x);
    }
};