switch statements shine when you have a single variable to compare against multiple distinct values.
 They are concise, making the code cleaner and more structured. 
 So, if-else statements and switch statements can complement each other, with if-else statements 
 handling complex conditions and switch statements simplifying cases with multiple exact matches.

To illustrate the switch statement, let's consider a common problem: given a number between 1 and 7, 
print the corresponding day of the week. Here's how we can use the switch statement for this task:

 #include <iostream>
using namespace std;

int main() {
    int day;

    // Prompt user to enter a number between 1 and 7
    cout << "Enter a number (1-7): ";
    cin >> day;

    // Switch statement to determine the day
    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break; // Exit switch after matching case
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            // Executed if input is not between 1 and 7
            cout << "Invalid" << endl;
    }

    return 0; // End program
}


In this example, if you set the day variable to 4, it will print "Thursday"
 since it matches the case 4 statement. The break statement is crucial;
 it ensures that the switch statement exits after the matching case is executed, 
 preventing the execution of subsequent cases.

The Default Case: The default case serves as a safety net. If none of the cases match the expression, 
the code inside the default block will execute.In our example, if you input a number outside the range of 1 to 7,
 it will print "Invalid."