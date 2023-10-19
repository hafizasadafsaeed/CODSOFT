#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> studentNames;
    std::vector<double> studentGrades;
    double grade;
    std::string name;
    char continueInput;

    do {
        std::cout << "Enter the student's name: ";
        std::cin >> name;
        studentNames.push_back(name);

        std::cout << "Enter the student's grade: ";
        std::cin >> grade;
        studentGrades.push_back(grade);

        std::cout << "Do you want to enter another student (y/n)? ";
        std::cin >> continueInput;
    } while (continueInput == 'y' || continueInput == 'Y');

    if (studentNames.empty()) {
        std::cout << "No student data entered. Exiting program." << std::endl;
        return 1;
    }

    double sum = 0.0;
    double highestGrade = studentGrades[0];
    double lowestGrade = studentGrades[0];

    for (double grade : studentGrades) {
        sum += grade;
        if (grade > highestGrade) {
            highestGrade = grade;
        }
        if (grade < lowestGrade) {
            lowestGrade = grade;
        }
    }

    double average = sum / studentGrades.size();

    std::cout << "\nStudent Grades:\n";
    for (size_t i = 0; i < studentNames.size(); i++) {
        std::cout << studentNames[i] << ": " << studentGrades[i] << std::endl;
    }

    std::cout << "\nAverage Grade: " << average << std::endl;
    std::cout << "Highest Grade: " << highestGrade << std::endl;
    std::cout << "Lowest Grade: " << lowestGrade << std::endl;

    return 0;
}