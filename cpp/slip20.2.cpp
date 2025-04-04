#include <iostream>
#include <fstream>
using namespace std;

class Department
{
    int Dept_Id;
    char Dept_Name[50];
    char HOD[50];
    int Number_Of_Staff;

public:
    void acceptDetails()
    {
        cout << "Enter Department ID: ";
        cin >> Dept_Id;
        cin.ignore(); // Ignore newline character after integer input

        cout << "Enter Department Name: ";
        cin.getline(Dept_Name, 50);

        cout << "Enter H.O.D. Name: ";
        cin.getline(HOD, 50);

        cout << "Enter Number of Staff: ";
        cin >> Number_Of_Staff;
    }

    void writeToFile(ofstream &outfile)
    {
        outfile << Dept_Id << "\n"
                << Dept_Name << "\n"
                << HOD << "\n"
                << Number_Of_Staff << "\n";
    }
    void readFile(ifstream &infile)
    {
        infile>>Dept_Id;
        infile.getline(Dept_Name, 50);
        infile.getline(HOD, 50);
        infile>>Number_Of_Staff;
    }
    // Function to display department details
    void displayDetails()
    {
        cout << "\nDepartment ID: " << Dept_Id;
        cout << "\nDepartment Name: " << Dept_Name;
        cout << "\nH.O.D.: " << HOD;
        cout << "\nNumber of Staff: " << Number_Of_Staff << "\n";
        cout << "-----------------------------------\n";
    }
};

int main()
{

    Department d1;
    d1.acceptDetails();
    d1.displayDetails();
    ofstream outfile("Dept.txt");
    ifstream inFile("Dept.txt");


    d1.writeToFile(outfile);
    d1.readFile(inFile);



    return 0;
}