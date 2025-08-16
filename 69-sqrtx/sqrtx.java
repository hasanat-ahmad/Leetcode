class Solution {
    public int mySqrt(int x) {
        if (x < 2) return x;

        int left = 1, right = x / 2;
        int answer = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // Use division to avoid overflow from mid * mid
            if (mid <= x / mid) {
                answer = mid;       // Mid could be a valid answer
                left = mid + 1;     // Try to find a larger one
            } else {
                right = mid - 1;
            }
        }

        return answer;
    }
}
