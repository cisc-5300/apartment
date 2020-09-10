#include "std_lib_facilities.h"

int main() {
    int numRooms = 0;
    cout << "How many rooms do you have?\n";
    cin >> numRooms;
    vector<int> rooms; 

    // Step 1: Collect room dimensions
    for(int i = 0; i < numRooms; i++) {
        int width = 0;
        int length = 0;
        int height = 0;
        string name;

        cout << "Please input the length of you room\n";
        cin >> length; 
        cout << "Please input the width of your room \n";
        cin >> width; 
        cout << "Please input the height of your room\n";
        cin >> height;
        cout << "Please input the name of your room\n";
        cin >> name;

        rooms.push_back(length * width); 
    }

    // Step 2: Summarize room information
    int sum_area = 0; 
    cout << "Room areas:\n";
    for (int x : rooms){
        sum_area += x;
        cout << x << "\n";
    }

    cout << "Total area: " << sum_area << "\n";

    return 0;
}