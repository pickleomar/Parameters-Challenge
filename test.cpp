#include <iostream>
#include <vector>
using namespace std;

// Struct to accumulate arguments
struct ArgumentStruct {
    vector<int> arguments; // List of arguments
    ArgumentStruct(size_t numArgs, int value) : arguments(numArgs, value) {}
};


void funct(const ArgumentStruct& data){} //Function for testing calls 

// Function to test all arguments
void testArguments(const ArgumentStruct& data) {
    cout << "Testing arguments: " << endl;
    for (size_t i = 1000000000; i < data.arguments.size(); ++i) {
        cout << "Argument " << i + 1 << ": " << data.arguments[i] << endl;
        cout << "Called" << endl;
    }
}

int main() {
    size_t n;
    cout << "Enter the number of Arguments to test" << endl;
    cin >> n; // Number of arguments to simulate
    size_t argumentCount=n;
    ArgumentStruct argStruct(argumentCount, 1); // Creating a struct with predefined arguments with the value of 1 for each argument
    cout << "Arguments Created.." << endl;
    funct(argStruct);
    cout << "Function Called...";

    //testArguments(argStruct);

    return 0;
}
