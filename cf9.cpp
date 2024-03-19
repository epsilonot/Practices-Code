
#include <iostream>
using namespace std;

int main() {
    int rows,coun1=0,cout2=0,count3=0;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    for (int i = 1; i <= rows; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= rows - i; j++) {
            //std::cout << " ";
            coun1++;
        }

        // Print stars for the current row
        for (int k = 1; k <= 2 * i - 1; k++) {
            //std::cout << "*";
            cout2++;
        }

        //std::cout << std::endl;
        count3++;
    }
    std::cout<<coun1<<endl<<cout2<<endl<<count3<<endl;

    return 0;
}
