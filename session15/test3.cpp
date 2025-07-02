#include <iostream>
using namespace std;
//Calculate Average  
struct Student {
    string name;
    int id;
    float scores[3];  
};
void input(Student* s) {
    cout << "Enter student name: ";
    getline(cin, s->name);

    cout << "Enter student ID: ";
    cin >> s->id;

    for (int i = 0; i < 3; i++) {
        cout << "Enter score " << i + 1 << ": ";
        cin >> s->scores[i];
    }

    cin.ignore(); 
}


float calcAverage(Student* s) {
    float sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += s->scores[i];
    }
    return sum / 3;
}


void print(Student* s) {
    cout << "Name: " << s->name << ", ID: " << s->id << ", Average: " << calcAverage(s) << endl;
}

int main() {
    int n = 3;
    Student* students = new Student[n];

      
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        input(&students[i]);
    }

      
    cout << "\n--- Students Information ---\n";
    for (int i = 0; i < n; i++) {
        print(&students[i]);
    }

    delete[] students;   
    return 0;
}
