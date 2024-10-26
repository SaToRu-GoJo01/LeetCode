// class Solution {
//     public int findContentChildren(int[] g, int[] s) {
//         Arrays.sort(g);
//         Arrays.sort(s);
//         int count = 0;
//         int i = 0;
//         int j = 0;
//         for(;i<g.length;i++){
//             while(j < s.length && g[i] > s[j]){
//                 j++;
//             }
//             if(j < s.length){
//                 count++;
//                 j++;
//             }
//         }
//         return count;
//     }
// }

import java.util.Arrays;

class Solution {
    public int findContentChildren(int[] greed, int[] size) {
        Arrays.sort(greed);
        Arrays.sort(size);
        int contentChildren = 0;
        int greedIndex = 0;
        int sizeIndex = 0;

        while (greedIndex < greed.length && sizeIndex < size.length) {
            if (size[sizeIndex] >= greed[greedIndex]) {
                contentChildren++;
                greedIndex++;
            }
            sizeIndex++;
        }
        
        return contentChildren;
    }
}
