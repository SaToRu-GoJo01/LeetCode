class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n == 0) return true;
        if(flowerbed.size() == 1){
            if(n == 1 && flowerbed[0] == 1) return false;
            if((n == 1 && flowerbed[0] == 0) || n == 0) return true;
        }
        if(flowerbed.size() == 0){
            return false;
        }
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i] == 0){
                if(i-1 >= 0){
                    if(i+1 < flowerbed.size()){
                        if(flowerbed[i-1] == 0 && flowerbed[i+1] == 0){
                            flowerbed[i] = 1;
                            n--;
                        }
                    }
                    else{
                        if(flowerbed[i-1] == 0){
                            flowerbed[i] = 1;
                            n--;
                        }
                    }
                }
                else{
                    if(flowerbed[i+1] == 0){
                        flowerbed[i] = 1;
                        n--;
                    }
                }
            }
            if(n == 0){
                return true;
            }
        }
        return false;
    }
};
