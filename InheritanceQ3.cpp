#include <iostream>
using namespace std;

class Academic {
protected:
    int marks;

public:
    void setMarks(int m) {
        marks = m;
    }
};

class Sports {
protected:
    int score;

public:
    void setScore(int s) {
        score = s;
    }
};

class Result : public Academic, public Sports {
public:
    void displayResult() {
        cout << "Academic Marks: " << marks << endl;
        cout << "Sports Score: " << score << endl;
    }
};

int main() {
    Result r;

    r.setMarks(85);
    r.setScore(90);

    r.displayResult();

    return 0;
}