class RandomizedSet {
public:
    unordered_map<int,int> position;
    vector<int> st;
    RandomizedSet() {
    }
    
    bool insert(int val) {
        if(position.find(val) != position.end()) return false;
        st.push_back(val);
        position[val] = st.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(position.find(val) == position.end()) return false;
        int last = st.back();
        int idx = position[val];
        st.back() = val;
        st[idx] = last;
        position[last] = idx;
        position.erase(val);
        st.pop_back();
        return true;
    }
    
    int getRandom() {
        int n = st.size();
        return st[rand()%n];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
