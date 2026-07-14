class Solution {
public:
    double reverseInteger(int original) {
        double reversed = 0;
        while (original > 0) {
            reversed = reversed * 10 + original % 10;
            original = original / 10;
        }
        return reversed;
    }
    bool isPalindrome(int x){
        if (x < 0) {
            return false;
        }
        if  (x == reverseInteger(x)){
            return true;
       
        }else{
        return false;
       }
    }
};