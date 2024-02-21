class MyCalendar {
public:
    multiset<pair<int,int>> bookings;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        bookings.insert({start,1});
        bookings.insert({end,-1});
        int sum = 0;
        for(auto &i:bookings){
            sum+=i.second;
            if(sum == 2){
                bookings.erase(bookings.find(make_pair(end,-1)));
                bookings.erase(bookings.find(make_pair(start,1)));
                return false;
            }
        }
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
