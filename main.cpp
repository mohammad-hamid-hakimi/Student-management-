#include <iostream>
using namespace std;

int main()
{
        struct student{
        string name;
        int age;
        string gender;
        long id_number;
        string field;
        int semester;
        double average;
        string result;
        string grade;
        };
        student numbers[15] = {
        {"Hamid", 20, "Male", 3278144, "Software", 2, 94.17},
        {"Farhad", 21, "Male", 3278152, "Hardware", 3, 90.2},
        {"Laila", 19, "Female", 3278163, "Software", 2, 87.12},
        {"Gulalai", 22, "Male", 3278174, "Software", 4, 83.45},
        {"Jamal", 23, "Male", 3278185, "Hardware", 2, 91.12},
        {"Ali", 19, "Male", 3278196, "Hardware", 3, 85.91},
        {"Freshta", 20, "Female", 3278143, "Software", 3, 78.4},
        {"Ahmad", 21, "Male", 3278148, "Software", 2, 88.23},
        {"Rustam", 19, "Male", 3278152, "Hardware", 4, 91.4},
        {"Mariam", 21, "Female", 3278164, "Software", 2, 63.2},
        {"Zuhal", 23, "Female", 3278189, "Software", 2, 48.5},
        {"Bahram", 19, "Male", 3278173, "Hardware", 3, 34.9},
        {"Zabiullah", 24, "Male", 3278134, "Hardware", 6, 41.7}
        };
        numbers[13].name = "Najeeb";
        numbers[13].age = 22;
        numbers[13].gender = "Male";
        numbers[13].id_number = 3278126;
        numbers[13].field = "Hardware";
        numbers[13].semester = 2;
        numbers[13].average = 71.56;
        cout << "Enter these Sections of the student" << endl;
        cout << "Name: ";
        cin >> numbers[14].name;
        cout << "Age: ";
        cin >> numbers[14].age;
        cout << "Gender: ";
        cin >> numbers[14].gender;
        cout << "ID_number: ";
        cin >> numbers[14].id_number;
        cout << "Feild: ";
        cin >> numbers[14].field;
        cout << "Semester: ";
        cin >> numbers[14].semester;
        cout << "Average: ";
        cin >> numbers[14].average;
        cout << endl;
        double total = 0, class_average;
        for (int i = 0; i < 15; i++)
        {
            total += numbers[i].average;
        }
        class_average = total /15.0;
        cout << "*******The average of the all students from class is: " << class_average << " %" <<  endl;
        for (int i = 0; i < 15; i++)
        {
            if (numbers[i].average >= 85)
            {
                numbers[i].grade = "(A+)";
                numbers[i].result = "Passed!";
            }
            else if(numbers[i].average >= 75)
            {
                numbers[i].grade = "(B)";
                numbers[i].result = "Passed!";
            }
            else if (numbers[i].average >= 55)
            {
                numbers[i].grade = "(C)";
                numbers[i].result = "Passed!";
            }
            else
            {
                numbers[i].grade = "F\t";
                numbers[i].result = "Failed Semester!";
            }
        }
        for (int i = 0; i < 14; i++)
        {
                for (int j = i+1; i < 15; i++)
                {
                     if (numbers[j].average > numbers[i].average)
                    {
                        student temp = numbers[i];
                        numbers[i] = numbers[j];
                        numbers[j] = temp;
                    }
                }
        }
        cout << endl;
        cout << "*******The sort of all averages is: " << endl << endl;
        for (int i = 0; i < 15; i++)
        {
            cout << "Name: " << numbers[i].name << '\t' << "Age: " << numbers[i].age << '\t';
            cout << "Gender: " << numbers[i].gender << '\t' << "ID: " << numbers[i].id_number << '\t';
            cout << "Field: " << numbers[i].field << '\t' << "Semester: " << numbers[i].semester << '\t';
            cout << "Average: " << numbers[i].average << '\t' <<  "Grade:" << numbers[i].grade << '\t';
            cout << "Result:" << numbers[i].result << endl;
        }
        return 0;
}
