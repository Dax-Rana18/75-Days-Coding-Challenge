class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int i = 0;
        int n = students.size();
        int count = 0; // no of rotations without sandwhich being taken
        while (n != 0) {
            if (students.front() == sandwiches.front()) {
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
                count = 0;
            } else {
                students.push_back(students[0]);
                students.erase(students.begin());
                count++;

                // if no top sandwhich is taken then the counter for students
                // going to back of queue increases and it stops till all
                // students have rejected the top sandwhich and we are back to
                // 1st student in queue
                if (count == students.size()) {
                    break;
                }
            }
        }
        return students.size();
    }
};