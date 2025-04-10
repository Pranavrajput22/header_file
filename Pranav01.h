

// Function to add two numbers
int sum(int a, int b) {
    return a + b;
}

// Function to calculate factorial of a number
int factorial(int num) {
    if (num < 0) return -1;  // Error for negative input
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Function to check if a number is even
int is_even(int num) {
    return num % 2 == 0;
}

