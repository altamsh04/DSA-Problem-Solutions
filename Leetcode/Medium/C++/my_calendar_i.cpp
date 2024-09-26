class MyCalendar {
private:
    map<int, int> events;

public:
    MyCalendar() {
    }

    bool book(int start, int end) {
        events[start]++;
        events[end]--;

        int currentEvents = 0;

        for (auto& keyValue : events) {
            currentEvents += keyValue.second;
            if (currentEvents > 1) {
                events[start]--;
                events[end]++;
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
