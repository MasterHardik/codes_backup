#include <iostream>
#include <limits>
/*Second, add the following code at the end of the main() function (just before the return statement);*/
int main(){
std::cin.clear(); // reset any error flags
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer until we find a newline
std::cin.get(); // get one more char from the user (waits for user to press enter)

}