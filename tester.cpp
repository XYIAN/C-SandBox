#include <iostream>
#include <fstream>
using namespace std;

double average(double n1, double n2);

struct Student
{
    string name;
    int ID;
    //string name[]; 
    i//nt ID[];
};


int main()
{
    string file_name;
    int * s;
    int size; 
    
    
    cout << "Enter input file name: ";
    cin >> file_name;
    input_file >> size; 
    
    s = new Student[]; 
    
    ifstream input_file(file_name);
    if (input_file.fail()) 
    {
        cout << "Error: Input file open failed.\n";
        return 0;
    }
    input_file >> student1.name;

    for(int i = 0 ; i < size; i++)
    {
        input_file >> S[i].name;
        //N[i].name[i];
        input_file >> S[i].ID;  
    }

    cout << student1.name <<"'s average is : " << student1.average << endl;
    cout << student2.name <<"'s average is : " << student2.average << endl;

    if(student1.average == student2.average)
    {
        cout << student1.name << " and " << student2.name << " have the same scores.";
    }
    else if(student1.average < student2.average)
    {
        cout << student2.name << " has a better score than " << student1.name << "." << endl;
    }
    else
    {
        cout << student1.name << " has a better score than " << student2.name << "." << endl;
    }

    return 0;
}


double average(double n1, double n2)
{
    return (n1 + n2) / 2.0;
}




