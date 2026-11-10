// Write a C++ program to calculate the electricity bill based on the total number of units
// consumed.

// The electricity charges are calculated according to the following slabs:
// Units             Consumed

// Rate per Unit
// First 100 units      ₹2
// Next 100 units       ₹3
// Next 200 units       ₹5
// Above 400 units      ₹7

// An additional fixed charge of ₹50 must be added to the final bill.

// Requirements:
// ●​ Accept the total units consumed as input.
// ●​ Calculate the bill using progressive slab-based taxation.
// ●​ Display the final electricity bill.
// Sample Input:

// 250
// Sample Output:

// Total Electricity Bill: Rs. 800


# include<iostream>

using namespace std;

int main()
{
    int unit, bill;

    cout << "enter the total unit: ";
    cin >> unit;

    bill = 50;

    if (unit <= 100)
    {
        bill += unit*2;
    }
    else if(100< unit && unit<=200)
    {
        bill += 100*2 + (unit-100)*3;
    }
    else if (200<unit && unit <=400)
    {
        bill += 100*2 + 100*3 + (unit-200)*5;
    }
    else
    {
        bill += 100*2 + 100*3 + 200*5 + (unit-400)*5;
    }

    cout << "final bill is " << bill << endl;
    
    

    return 0;
}