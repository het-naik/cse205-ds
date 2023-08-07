class Solution {
public:
    int sum(int num1, int num2) {
        return num1+num2;
    }
};



class Solution {
public:
    int smallestEvenMultiple(int n) {
     if (n%2==0){
         return n;
     } 
     return n*2;  
    }
};



class Solution {
public:
    int sumOfMultiples(int n) {
        int sum=0;
        for (int i=0; i<=n; i++) {
            if (i%3==0 or i%5==0 or i%7==0){
                sum=sum+i;
            }
        }
        return sum;
        
    }
};