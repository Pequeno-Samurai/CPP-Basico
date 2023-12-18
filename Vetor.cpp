#include <iostream> //default I/O streams
#include <algorithm> //alows us to use sort

int main(int argc, char *argv[]){ // main function

    int n, op; // n is the number of elements in the array and op is the operation to be performed

    std::cout << "Enter the number of elements: "; // prompts the user for the number of elements
    std::cin >> n; // reads the number of elements

    int array[n]; // array of integers

    for(int i = 0; i < n; i++){
        std::cout << "Enter the elements at position " << i << ": ";
        std::cin >> array[i];
    }

    std::cout << "1.Print the elements of the array.\n2.Print the elements of the array in reverse order.\n3.Sort the elements of the array.\n>>>>: "; 
    std::cin >> op;

    switch(op){
        //print the elements of the array
        case 1:
            for(int i = 0; i < n; i++){
                std::cout << "Value at position " << i << " is " << array[i] << std::endl;
            }
            break;
        
        //print the elements in reverse order
        case 2:
            for(int i = n - 1; i >= 0; i--){
                std::cout << "Value at position " << i << " is " << array[i] << std::endl;
            }
            break;

        //sort the elements of the array
        case 3:
            std::sort(array, array + n);
            for(int i = 0; i < n; i++){
                std::cout << "Value at position " << i << " is now:" << array[i] << std::endl;
            }
            break;
        //default case
        default:
        std::cout << "Invalid input." << std::endl;
        break;   
    }
    return 0;
}
