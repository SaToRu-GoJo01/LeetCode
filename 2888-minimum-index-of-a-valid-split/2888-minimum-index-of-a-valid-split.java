import java.util.*;

class Solution {
    public int minimumIndex(List<Integer> nums) {
        Map<Integer, Integer> counter = new HashMap<>();
        int n = nums.size();
        int count = 0;
        int curr = -1;

        for (int num : nums) {
            counter.put(num, counter.getOrDefault(num, 0) + 1);
            if (count == 0) {
                curr = num;
                count = 1;
            } else if (curr == num) {
                count++;
            } else {
                count--;
            }
        }

        int currCount = counter.get(curr);
        if (currCount * 2 <= n) {
            return -1;
        }

        int tillNow = 0;
        for (int i = 0; i < n; i++) {
            if (nums.get(i) == curr) {
                tillNow++;
                int leftSize = i + 1, rightSize = n - (i + 1);
                if (2 * tillNow > leftSize && 2 * (currCount - tillNow) > rightSize) {
                    return i;
                }
            }
        }
        return -1;
    }
}
