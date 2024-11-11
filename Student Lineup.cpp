#include <iostream>
#include <string>
#include <limits>

int main() {
    int numStudents;

    // Input: number of students with validation
    do {
        std::cout << "Enter the number of students (1 - 25): ";
        std::cin >> numStudents;
        if (numStudents < 1 || numStudents > 25) {
            std::cout << "Error: Number of students must be between 1 and 25.\n";
        }
    } while (numStudents < 1 || numStudents > 25);

    // Input: student names
    std::string name, firstStudent, lastStudent;
    std::cout << "Enter the names of the students:\n";

    for (int i = 0; i < numStudents; ++i) {
        std::cout << "Student " << (i + 1) << ": ";
        std::cin >> name;

        // Initialize firstStudent and lastStudent with the first entered name
        if (i == 0) {
            firstStudent = lastStudent = name;
        }
        else {
            // Update firstStudent and lastStudent based on alphabetical order
            if (name < firstStudent) {
                firstStudent = name;
            }
            if (name > lastStudent) {
                lastStudent = name;
            }
        }
    }

    // Output results
    std::cout << "\nStudent at the front of the line: " << firstStudent << "\n";
    std::cout << "Student at the end of the line: " << lastStudent << "\n";

    return 0;
}