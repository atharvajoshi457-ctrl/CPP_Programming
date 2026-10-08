#include<iostream>
using namespace std;

int main()
{
    int Size = 0;
    int i = 0;              // Loop Counter
    float * Marks = NULL;

    cout<<"Enter number of elements : \n";
    cin>>Size;
    
    // Dynamic Memory Allocation
    Marks = new float[Size];      // Allocate the memory
    
    cout<<"Enter your Marks : \n";

    // Iteration                                        // Use the memory

    //    1       2      3
    for(i = 0 ; i < Size ; i++)
    {
        cin>>Marks[i];  // 4
    }

    cout<<"Entered Marks Are : \n";

    //    1       2      3
    for(i = 0 ; i < Size ; i++)
    {
        cout<<Marks[i]<<"\n";  // 4
    }
    
    delete []Marks;                                        // Deallocate the memory

    return 0;
}