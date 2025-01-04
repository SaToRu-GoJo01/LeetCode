class Solution {
    public int countPalindromicSubsequence(String s) {
        int[] maxAp = new int[26];
        Arrays.fill(maxAp, Integer.MIN_VALUE);
        int[] minAp = new int[26];
        Arrays.fill(minAp, Integer.MAX_VALUE);
        for(int i = 0;i<s.length();i++){
            int index = s.charAt(i) - 'a';
            maxAp[index] = Math.max(maxAp[index],i);
            minAp[index] = Math.min(minAp[index],i);
        }
        int unique_count = 0;
        for (int index = 0; index < 26; index++) {
            if (maxAp[index] > minAp[index]) {
                Set<Character> mySet = new HashSet<>();
                for (int j = minAp[index] + 1; j < maxAp[index]; j++) {
                    mySet.add(s.charAt(j));
                }
                unique_count += mySet.size();
            }
        }
        return unique_count;
    }
}