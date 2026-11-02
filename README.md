# Student-Management-System
Student Management System (C)
A simple menu-driven Student Management System written in C. It uses a
struct to store student details and an array to maintain records
during program execution.
Features
- Add Student: Enter a student's roll number, name, and marks.
- Display Students: View all student records.
- Search Student: Find a student using their roll number.
- Exit: Close the program.
Requirements
- A C compiler, such as GCC
- A terminal or command prompt
How to Compile
Save the source code in a file named student_management.c, then open a
terminal in that folder and run:
gcc student_management.c -o student_management
How to Run
On Windows:
student_management.exe
On Linux or macOS:
./student_management
Menu Options
When the program starts, the following menu appears:
===== Student Management System =====
1. Add Student
2. Display Students
3. Search Student
4. Exit
Enter your choice:
Enter the number for the operation you want to perform.
Data Structure
The program defines a Student structure with these fields:

  Field      Data type    Description
  rollno   int        Student roll number
name     char[50]   Student name
marks    float      Student marks

An array of 100 Student records is used to store the data. The count
variable tracks how many students have been added.
Notes and Limitations
- The program can store up to 100 students.
- Student records are stored in memory only. They are lost when the
  program exits.
- Each student's roll number is not checked for duplicates.
- Enter valid numeric input for the menu choice, roll number, and
  marks.
Future Improvements
- Save and load student records using file handling.
- Add a feature to update or delete student records.
- Prevent duplicate roll numbers.
- Validate marks and other user input.
License
This project is provided for learning and practice purposes.
