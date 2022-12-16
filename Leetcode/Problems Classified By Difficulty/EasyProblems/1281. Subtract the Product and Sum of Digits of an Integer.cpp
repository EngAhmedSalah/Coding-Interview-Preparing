class Solution {
public:
    int getSum(int n)
    {
        int sum = 0;
        while(n)
            sum += n % 10 , n /= 10;
        return sum;
    }
    int getProduct(int n)
    {
        int p = 1;
        while(n)
            p *= n % 10 , n /= 10;
        return p;
    }
    int subtractProductAndSum(int n) 
    {
        return getProduct(n) - getSum(n);
    }
};
