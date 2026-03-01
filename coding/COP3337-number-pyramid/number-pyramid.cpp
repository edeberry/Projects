// Create a pyramid
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int maxRows;
    cout << "Enter the number of lines (from 1 to 15): ";
    cin >> maxRows;

    
    /*
    The formula for the total width of the first row of any given max number of can be derived from the following logic:

    maxRows -> width of pyramid's first row
    1 -> 1
    2 -> 4
    3 -> 7
    4 -> 10
    5 -> 13
    6 -> 16
    7 -> 19
    8 -> 22
    9 -> 25     maxRow values of 1-9 increase by 3
    10 -> 29    maxRow values of 9-15 increase by 4 due to double digits
    11 -> 33
    12 -> 37
    13 -> 41
    14 -> 45
    15 -> 49

    Breakdown: 1 -> 1+0
               2 -> 1+3 // (2-1)*3=3
               3 -> 1+6 // (3-1)*3=6 // now need to add back 1 to get to 7
    The above values are increasing, relative to maxRows, by (maxRows-1)*3 + 1

    Simplify formula for total width of first row:
    width = 1 + (maxRows - 1)*3
    width = 1 + 3*maxRows - 3
    width = 3*maxRows - 2
    */
    
    // Width is the number of characters, including spaces, in a given row
    int width = 0;

    // The derivation for the formula for width is shown above
    width = 3*maxRows - 2;
    
    /* If there will be double digits in the code, the formula below is used
    Ex. width already calculated for 10: 3*10-2 = 28, which is 1 less than the value it should be, 29
    Width for each line 10-15 increases by 4. 10: 1+9, 11: 1+10, 12: 1+11, etc.
    10 - 9 = 1 which is what needs to be added, so width += maxRows - 9
    */
    if (maxRows >= 10) {
        width += maxRows - 9;
    }    

    // For loop iterates through each row
    for (int row = 1; row <= maxRows; row++) {
        // A string "line" is concatentated with each for loop and results in what will be printed for the current line/row
        string line = "";
        // For loop starts at highest number in row and decreases to 2
        // Adds that iteration's number and two spaces to the string for the current line/row
        for (int num = row; num > 1; num--) {
            line += to_string(num);
            line += "  ";
        }
        // Print the 1 for the middle of the pyramid
        line += "1";
        // For loop starts at 2 and increases to highest number in row
        // Adds that iteration's number and two spaces to the string for the current line/row
        for (int num = 2; num <= row; num++) {
            line += "  ";
            line += to_string(num);
        }
        
        /* The string "line" is printed with a right justification and the correct
        number of spaces at the beginning of each row using setw(width) to specify the number of columns*/
        cout << right << setw(width) << line << endl;
        
        // The set width for the next row will increase by 3 due to 1 digit and two spaces being added to the beginning of the row
        if (row < 9) {
            width += 3;
        }
        // If the row will display double digits, the width will increase by 4 to account for the second digit
        else width += 4;
    }

    return 0;
}
