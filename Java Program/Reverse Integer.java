class Solution {
    public int reverse(int x) {
        boolean isNegative = x < 0;
        if(isNegative) x *= -1;
        int result = 0;
        while(x > 0) {
            if((result*10) % 10 != 0) return 0;
            int unitDigit = x % 10;
            result = result*10 + unitDigit;
            x /= 10;
        }
        if(isNegative) result *= -1;
        return result;
    }
}
