class ProductOfNumbers {
    private ArrayList<Integer> temp = null;
    public ProductOfNumbers() {
        temp = new ArrayList<>();
    }
    
    public void add(int num) {
        temp.add(num);
    }
    
    public int getProduct(int k) {
        int ans = 1;
        for(int i = temp.size() - k;i<temp.size();i++){
            ans *= temp.get(i);
        }
        return ans;
    }
}

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers obj = new ProductOfNumbers();
 * obj.add(num);
 * int param_2 = obj.getProduct(k);
 */