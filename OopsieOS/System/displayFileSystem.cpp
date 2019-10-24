#include<experimental/filesystem>
#include <iostream>
#include <string>


int main() {
    std::string path = "System/UserContent";
    for (const auto & entry : std::experimental::filesystem::directory_iterator(path))
        std::cout << entry.path() << std::endl;


    return 0;
}
