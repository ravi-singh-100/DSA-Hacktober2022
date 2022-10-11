#include <stdio.h>
/*
Time Complexity: O(log3n)
Auxiliary Space: O(log3n)

Because In ternary search array is divided into 3 parts for seaching
*/

//This function copy the array passed to it and take size of the array ==> Then it print the array of length SIZE
void print(int a[], int size)
{
    int l;
    printf("\nARRAY ELEMENT:\n");
    printf("------");
    for (l = 1; l < size; l++)
    {
        printf("-----");
    }
    printf("\n|");
    for (int i = 0; i < size; i++)
    {
        printf("%-2d  |", a[i]);
    }
    printf("\n------");
    for (l = 1; l < size; l++)
    {
        printf("-----");
    }
    printf("\n");
}

//Tis function is used to initialization of array which make a copy of array and insert element to the array as SIZE is provided by user
int initialization(int a[])
{
    int size;
    printf("\nENTER THE SIZE OF ARRAY:");
    scanf("%d", &size);                         
    printf("ENTER ELEMENTS:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);                     
    }
    return size;                // Return SIZE of array for further processes
}

//This the main ternary search function which is used to implement the ternary search
// ARRAY GIVEN MUST BE SORTED INITIALLY

// It take the array , searching element , initially START=0 and END = SIZE-1
int ternary_searching(int a[], int key, int start, int end)
{
    int mid1 = start + ((end-start) / 3);
    int mid2 = end - ((end-start) / 3);

    //printf("\nstart: %d ,mid1:%d ,mid2: %d ,end: %d \n", start, mid1, mid2, end);    // Tis line is for checking how ternary search process done 
    
    if (end - start >= 0 )                            
    {
        if (a[mid1] == key)
        {
            return mid1;                        // if key present at mid1 index ==> Return the mid1
        }
        else if (a[mid2] == key)
        {
            return mid2;                        // if key present at mid2 index ==> Return the mid2
        }
        else if (a[mid1] > key)
        {
            ternary_searching(a, key, start, mid1-1);                // if key is less than the array element at mid1 index ==> Recursive calling of function take place for searching between start and mid1-1
        }
        else if (a[mid1] < key && a[mid2] > key)
        {
            ternary_searching(a, key, mid1+1,mid2-1);               // if key is less than the array element at mid2 index AND greater than array element at mid1  ==> Recursive calling of function take place for searching between mid1+1 and mid2-1
        }
        else if (a[mid2] < key)
        {
            ternary_searching(a, key,mid2+1,end);                   // if key is less than the array element at mid2 index ==> Recursive calling of function take place for searching between mid2+1 and end
        }
    }
    else
    {
        return -1;                             // Return -1 if element not found
    }
}


// MAIN FUNCTION CALLING
int main()
{
    int a[5], size, c,key;                               
    size = initialization(a);
    print(a, size);


    printf("\nENTER THE ELEMENT WANT TO SEARCH:");
    scanf("%d",&key);


    c = ternary_searching(a, key, 0, size-1);
    printf("%d", c);
    return 0;
}