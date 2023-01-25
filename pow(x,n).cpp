class Solution {
public:
    
    double findPower(double base, int power){
            //Base Case
        if(power == 0)
                return 1;
        if(power == 1)
                return base;
            //Recursive step
        double ans = findPower(base, power/2);
        ans = ans * ans;    
        
        if(power & 1) // power is odd
                ans = ans * base;
            
        return ans;    
    }    
        
    double myPow(double x, int n) {
        
        if(n < 0){
                return 1.0 / findPower(x, abs(n));
        }    
        
        return findPower(x,n);    
    }
};