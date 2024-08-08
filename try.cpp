#include <iostream>
#include <fstream>

int main() {
    // Create and open a text file
    std::ofstream myfile("output.txt");

    // Check if the file was successfully opened
    if (myfile.is_open()) {
        // Write numbers from 1 to 10 to the file
        for (int i = 1; i <= 100000; ++i) {
            for(char ch='a';ch<'z';ch++)
            myfile << ch;
        }
        // Close the file
        myfile.close();
        std::cout << "Numbers 1 to 10 have been written to output.txt\n";
    } else {
        std::cout << "Unable to open file\n";
    }

    return 0;
}
