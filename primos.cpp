#include <iostream> 
using namespace std; 
  
// Method to compute the prime number 
// Time Complexity is O(sqrt(N)) 
bool checkPrime(int numberToCheck) 
{ 
    if(numberToCheck == 1) { 
        return false; 
    } 
    for (int i = 2; i*i <= numberToCheck; i++) { 
        if (numberToCheck % i == 0) { 
            return false; 
        } 
    } 
    return true; 
} 
  
// Method to iterate the loop from l to r 
// If the current number is prime, sum the value 
int primeSum(int l, int r) 
{ 
    int sum = 0; 
    for (int i = r; i >= l; i--) { 
  
        // Check for prime 
        bool isPrime = checkPrime(i); 
        if (isPrime) { 
  
            // Sum the prime number 
            sum = sum + i; 
        } 
    } 
    return sum; 
} 
// Time Complexity is O(r x sqrt(N)) 
  
//Driver code 
int main() 
{ 
    int l = 4, r = 13; 
  
    // Call the method with l and r 
    cout << primeSum(l, r); 
} 
