#include <iostream>

namespace Grade{
    std::uint16_t grade;

    void welcomeScreen(){
        std::cout << "Welcome to C++" << std::endl;
        std::cout << "Enter your grade: " << std::endl;
        std::cin >> grade;
    }
    void gradingSystem(){
        if (grade >= 0 && grade < 50){
            std::cout << "You have failed" << std::endl;
        }
        else if (grade >= 50 && grade < 65){
            std::cout << "Your grade is bad" << std::endl;
        }
        else if (grade >= 65 && grade < 75){
            std::cout << "Your grade is good" << std::endl;
        }
        else if (grade >= 75 && grade < 85){
            std::cout << "Enter your is very good" << std::endl;
        }
        
        else if (grade >= 85 && grade <= 100){
            std::cout << "Enter your grade is excellent" << std::endl;
        }
        else {
            std::cout << "Enter a valid number" << std::endl;
        }   
    }
}

int main(int argc, char* argv[]){
    Grade::welcomeScreen();
    Grade::gradingSystem();
}