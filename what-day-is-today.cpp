#include <iostream>
using namespace std;

int main() {

    int dayOfWeek;

    cout << "Please type the number of your favorite day! \n"; // User will input a number from the options in the next line of code.
    cout << "1. Monday\n2. Tuesday\n3. Wednesday\n4. Thursday\n5. Friday\n6. Saturday\n7. Sunday\n" << endl; // Numbers are the selector for the day of the week.
        cin >> dayOfWeek;
    // The following switch is used to determine the output based on the user's input of their favorite day.
    switch(dayOfWeek) {
        case 1: 
            cout << "Monday!  Time to grind!";
            break;
        case 2:
            cout << "Taco Tuesday!";
            break;
        case 3: 
            cout << "Wednesday!  Hump day!";  
            break;  
        case 4: 
            cout << "Thor's day (aka Thursday)!  Named after the hammer wielding Norse drunkard/antihero!";
            break;
        case 5: 
            cout << "TGIF!  Get ready for the weekend!";           
            break; 
        case 6: 
            cout << "Saturday!  Time to work on the non-work list!";
            break;
        case 7:
            cout << "Sunday!  Finally you can rest.";
            break;
        default:
            cout << "I do not think you successfully did what you were supposed to do.";  
            // If the user inputs an invalid selection, this message will appear. A loop to the initial question would be a good future again so the user could try again.

    }

    return 0;
    }





