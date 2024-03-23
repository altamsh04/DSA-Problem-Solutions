class Solution {
public:
int sum_of_digit_squares(int x)
{
    int sum = 0;
    while (x > 0) {
        int digit = x % 10;
        sum += digit * digit;
        x /= 10;
    }
    return sum;
}

bool isHappy(int n) {
    int slow = n, fast = n;
    do {
        slow = sum_of_digit_squares(slow);
        fast = sum_of_digit_squares(sum_of_digit_squares(fast));
    } while (slow != fast);
    return slow == 1;
}
};
