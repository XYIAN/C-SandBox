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
void test3(int n, int k);

int main()
{
    int n1,n2,n3; 
    char input; 
    input = 'Y';
    cout << "How many times would you like to recurse: " ;
    cin >> n1; 
    
    test(n1);
    
    cout << endl<<"test 2" <<endl << endl; 
    
    test2(n1);
    
    cout << "Would you like to recurse a number? (Y/N)";
    cin >> input;
    
    while(input == 'Y')
    {
        cout << "Please enter number to recurse: ";
        cin >> n2; 
        cout << "How many times would you like to recurse ->" << n2 << "<- ? "; 
        cin >> n3; 
        
        test3(n2, n3); 
        
        cout << "Would you like to recurse another number? (Y/N) " ;
        cin >> input; 
        
    }
    
    
    
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

void test3(int n, int k)
{
    for(int i = 0 ; i < k ; i ++)//info debug
    {
        cout << "bug " ; 
    }
    cout  << "N=" << k<<endl ;
    if(k==0)//base case
    {
        cout << " B A S E   C A S E   R E A C H E D    @N=" << k << endl; 
        return ; 
    }
    else if(k == 1)
    {
        cout << "Special case " << n << endl; ; 
        test3(n*4 , k-1); 
    }
    else if(k > 1)
    {
        cout << "recursing " << n  << " ";
        test3(n*4 , k-1);
        
        
    }
}