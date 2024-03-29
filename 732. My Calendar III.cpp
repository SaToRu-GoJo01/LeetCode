class MyCalendarThree {
public:
    map<int,int> mp;
    MyCalendarThree() {
        
    }
    
    int book(int startTime, int endTime) {
        mp[startTime]++;
        mp[endTime]--;
        int booking = 0,ans = 0;
        for(auto &i:mp){
            booking += i.second;
            ans = max(booking,ans);
        }
        return ans;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(startTime,endTime);
 */
