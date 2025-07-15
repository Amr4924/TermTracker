/*
 * TermTracker - GPA Calculator
 * A comprehensive tool for calculating Grade Point Average (GPA)
 * Author: [Your Name]
 * Date: July 2025
 */

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

/**
 * Formats and capitalizes the first letter of first and last names
 * @param Fname First name
 * @param Lname Last name
 * @return Formatted full name with proper capitalization
 */
string formatName(string Fname, string Lname)
{
    // Capitalize first letter of first name if it's lowercase
    if (islower(Fname[0]))
    {
        Fname[0] = toupper(Fname[0]);
    }

    // Capitalize first letter of last name if it's lowercase
    if (islower(Lname[0]))
    {
        Lname[0] = toupper(Lname[0]);
    }

    // Return formatted full name with double space between names
    return Fname + "  " + Lname;
}

/**
 * Converts numerical grade to GPA points based on standard scale
 * @param grade Numerical grade (0-100)
 * @return GPA points (0.0-4.0)
 */
double getGradePoints(double grade)
{
    // GPA Scale: A=4.0, B+=3.7, B=3.3, C+=3.0, C-=2.7, C=2.3, D=2.0, D-=1.3, F=1.0, F=0.0
    if (grade >= 90)
        return 4.0; // A
    else if (grade >= 85)
        return 3.7; // B+
    else if (grade >= 80)
        return 3.3; // B
    else if (grade >= 75)
        return 3.0; // C+
    else if (grade >= 70)
        return 2.7; // C-
    else if (grade >= 65)
        return 2.3; // C
    else if (grade >= 60)
        return 2.0; // D
    else if (grade >= 55)
        return 1.3; // D-
    else if (grade >= 50)
        return 1.0; // F (passing)
    else
        return 0.0; // F (failing)
}

/**
 * Converts numerical grade to letter grade
 * @param degree Numerical grade (0-100)
 * @return Letter grade (A, B+, B, C+, C, D, F)
 */
string getLetterGrade(double degree)
{
    // Convert numerical grades to corresponding letter grades
    if (degree >= 90)
        return "A"; // Excellent
    else if (degree >= 85)
        return "B+"; // Very Good
    else if (degree >= 80)
        return "B"; // Good
    else if (degree >= 75)
        return "C+"; // Above Average
    else if (degree >= 65)
        return "C"; // Average
    else if (degree >= 60)
        return "D"; // Below Average
    else
        return "F"; // Fail
}

/**
 * Calculates weighted GPA based on grades and credit hours
 * @param Degree Vector of GPA points for each course
 * @param creditHours Vector of credit hours for each course
 * @return Calculated GPA (0.0-4.0)
 */
double calculateGPA(vector<double> Degree, vector<double> creditHours)
{
    float totalHours = 0; // Total credit hours
    float totalPoint = 0; // Total quality points (grade points * credit hours)

    // Calculate weighted sum: (grade points * credit hours) for each course
    for (int i = 0; i < Degree.size(); i++)
    {
        totalPoint += Degree.at(i) * creditHours.at(i); // Quality points
        totalHours += creditHours.at(i);                // Credit hours
    }

    // GPA = Total Quality Points / Total Credit Hours
    return totalPoint / totalHours;
}

/**
 * Main function - Entry point of the GPA Calculator program
 */
int main()
{
    // Display welcome banner
    cout << "============================\n";
    cout << "Welcome to the GPA Calculator\n";
    cout << "============================\n";

    cout << "\n============================\n";
    cout << "This program will help you calculate your GPA based on your grades and credit hours.\n";
    cout << "Please follow the prompts to enter your information.\n";
    cout << "============================\n";

    // Get user's name
    string name, lastName;
    cout << "Enter the first name\n";
    cout << ": ";
    cin >> name;
    cout << "Enter the last name\n";
    cout << ": ";
    cin >> lastName;
    cout << "Hello MR/MISS " << formatName(name, lastName) << endl;
    cout << "\n";

    // Main program loop
    char again;
    do
    {
        // Initialize vectors for storing course data
        vector<double> grade;       // Numerical grades
        vector<double> point;       // GPA points
        vector<double> GreditHours; // Credit hours
        vector<int> Materials;      // Course numbers

        double Pgrade;   // Input grade
        int Hours;       // Input credit hours
        int counter = 1; // Course counter

        // Input loop for courses
        while (true)
        {
            cout << "The material (" << counter << " )" << endl;
            cout << "Score out of ( 100 )\n";
            cout << ": ";
            cin >> Pgrade;

            // Exit condition: enter -1 to finish
            if (Pgrade == -1)
            {
                break;
            }

            // Validate grade range (0-100)
            if (Pgrade > 100)
            {
                cout << "*******\n";
                cout << "ERROR." << endl;
                cout << "*******\n";
                continue;
            }

            // Get credit hours for the course
            cout << "Enter the number of hours for the subject: ";
            cin >> Hours;

            // Validate credit hours (typically 1-6)
            if (Hours > 6)
            {
                cout << "\n********************\n";
                cout << "Oh, I put in more hours than usual." << endl;
                cout << "Try again \n";
                cout << "********************\n";
                cout << endl;
                continue;
            }

            cout << "======\n";
            cout << endl;

            // Store course data
            GreditHours.push_back(Hours);
            Materials.push_back(counter);
            point.push_back(getGradePoints(Pgrade));
            grade.push_back(Pgrade);

            counter++;
        }

        // Clear screen and display results
        system("cls");

        cout << "===================\n";
        cout << "Name: " << formatName(name, lastName) << endl;

        // Display course details
        for (int i = 0; i < Materials.size(); i++)
        {
            cout << "#material (" << Materials.at(i) << ") "
                 << "The degree(" << grade.at(i) << ") "
                 << "Appreciation (" << getLetterGrade(grade.at(i)) << ")" << endl;
        }

        // Display calculated GPA
        cout << "Gpa = " << "( " << calculateGPA(point, GreditHours) << " )" << endl;
        cout << "===================\n";

        // Ask if user wants to calculate again
        cout << "Do you want to use again? (Y/N)" << endl;
        cout << ": ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    // Display farewell message
    cout << " ===================\n";
    cout << "Thank you for using the program.\n";
    cout << "Have a nice day!\n";
    cout << " ===================\n";

    return 0;
}