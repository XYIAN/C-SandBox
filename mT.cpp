/*
 * TITLE
 * ABSTRACT: recursion sandbox for midterm2 study
 * Author: Kyle Dilbeck 
 * ID: 1996
 * Date: 4/19/19
 */

#include <iostream>
#include <fstream>

using namespace std;

int test(int n); 
void test2(int n); 

int main()
{
    int n1; 
    cout << "How many times would you like to recurse: " ;
    cin >> n1; 
    
    test(n1);
    
    cout << endl<<"test 2" <<endl << endl; 
    
    test2(n1);
    
}

int test(int n)
{
    if (n == 0)   
    {
        cout << "Debug :: LAST" << n << endl; 
        return 0;
         
    }// Base case
       
    else 
    {
        cout << "Debug :: TOP " << n << endl; 
        return n + test(n-1);  // Recursive case
        cout << "Debug :: bottom " << n << endl; 
    }
    //cout << n + f(n-1) << " "; 
    
}

void test2(int n)
{
    cout << "DEBUG:: N=" << n << "   ";
    if(n == 0 )
    {
        cout << "! BASE CASE REACHED ! N=" << n << endl; 
        return ; 
    }
    if(n > 0)
    {
        for(int i = 0 ; i < n ; i++)
        {
            cout << "hi ";
        }
        cout << endl<< "Pre-recurse   " << n << endl; 
        test2(n -1); 
        cout << "DEBUG2:: N=" << n << "   "; 
                for(int i = n ; i > 0 ; i--)
        {
            cout << "bye ";
        }
        cout << endl<<"Post-recurse  " << n<< endl ;
        
    }
    else
    {
        
        cout << endl<<"sp " << n << endl; 
        test2(n-1);
        cout << "final  ";
    }
}