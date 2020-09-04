/****************************************************************************
 * 
 * Define array
 * Insert elements into an array
 * print elements of an array
 * Linear Searchinig
 * 
 * Home Work : Define 2 arrays of equal length and add elements of first 
                 array to the corresponding elements of scond array

*******************************************************************************/

#include <iostream>

using namespace std;

int main()

{
    
    
    // int array1 = {1,2,3,4,5,6};
    int array2[5];
    
    array2[0] = 123;
    array2[1] = 2;
    array2[2] = 22;
    array2[3] = 3;
    array2[4] = 4;
    array2[5] = 33;
    array2[6] = 44;
    array2[7] = 908;
    array2[8] = 78;
    array2[9] = 79;
    
    
    // Get Inputs via loop
    
    int Array_2[5];
    
    
    for(int x =0;x<5;x++)
        cin>>Array_2[x];
    
    
    cout<<"Elements of your array are : \n";
    for(int x = 0;x<5;x++)
        cout<<Array_2[x]<<endl;
    
    
    
   
    // Print Array   
    for(int x=0;x<10;x++){
        
        cout<<array2[x]<<endl; 
        
    }
    
    int to_find;
    
    cin>>to_find;
    
    for(int x=0;x<10;x++){
        
        if(array2[x] == to_find){
            
            cout<<"Index : "<<x<<endl;
            break;
            
        }
        
        else if(x>=9){
            
            cout<<"NO"<<endl;
            
        }
        
    }
    

    return 0;
}
