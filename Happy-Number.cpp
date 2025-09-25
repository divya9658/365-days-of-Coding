class Solution {
public:
    int get_Squares(int n){
        int sum=0;
        while(n>0){
            sum += (n%10)*(n%10);
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        while(n>5){
            n = get_Squares(n);
        }
        if(n == 1) return true;
        else return false;
    }
};