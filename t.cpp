#include <iostream>
using namespace std;

// Student class
class Student {
protected:
    int roll_no; // student roll number

public:
    // constructor to initialize roll number
    Student(int r) {
        roll_no = r;
    }

    // getter method for roll number
    int get_roll_no() {
        return roll_no;
    }
};

// Test class (derived from Student)
class Test : public Student {
protected:
    int math_score; // score in mathematics
    int sci_score; // score in science

public:
    // constructor to initialize scores and roll number
    Test(int r, int m, int s) : Student(r) {
        math_score = m;
        sci_score = s;
    }

    // getter methods for scores
    int get_math_score() {
        return math_score;
    }

    int get_sci_score() {
        return sci_score;
    }
};

// Sports class
class Sports {
protected:
    int sport_score; // score in sports

public:
    // constructor to initialize score
    Sports(int sp) {
        sport_score = sp;
    }

    // getter method for score
    int get_sport_score() {
        return sport_score;
    }
};

// Result class (derived from Test and Sports)
class Result : public Test, public Sports {
private:
    int total_score; // total score of the student

public:
    // constructor to initialize total score and other attributes
    Result(int r, int m, int s, int sp) : Test(r, m, s), Sports(sp) {
        total_score = m + s + sp;
    }

    // method to display the final result
    void display_result() {
        cout << "Student Roll No: " << get_roll_no() << endl;
        cout << "Math Score: " << get_math_score() << endl;
        cout << "Science Score: " << get_sci_score() << endl;
        cout << "Sports Score: " << get_sport_score() << endl;
        cout << "Total Score: " << total_score << endl;
    }
};

int main() {
    Result studentResult(101, 80, 90, 70);
    studentResult.display_result();
    return 0;
}

