class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int sandwich = 0,student = 0;
        int count = 0;
        while(sandwiches.size() != 0){
            if(sandwiches[0] == students[0]){
                sandwiches.erase(sandwiches.begin());
                students.erase(students.begin()); 
                count = 0;
            }
            else{
                count++;
                students.push_back(students[0]);
                students.erase(students.begin());
            }
            if(count == sandwiches.size()) return sandwiches.size();
        }
        return 0;
    }
};
