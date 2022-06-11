/*you have a sentence which is 
mixed upper & lower letter cases, 
we need to make the sentence all lower case
i.e AUstralian BEacHES aRe GOoD In SUmMER  : >> australian beaches are good in summer*/
#include <iostream>
#include <string>

void toLower(std::string &str, void (*func)(std::string st)){
    for (auto &ch : str){
        if (ch >= 65 && ch <= 95){
            ch += 32;
        }
    }
    func(str);
}

int main(int argc, char* argv[]){
    std::string word = "AUstralian BEacHES aRe GOoD In SUmMER";
    // lambda as a function pointer
    void (*lambda)(std::string) = [](std::string str){std::cout << "Converted lamda as function pointer: " << str << std::endl;};
    toLower(word, lambda);

    // lambda as a normal function
    auto lambda2 = [](std::string str){for(char &ch : str){if(ch >= 65 && ch <= 95){ch += 32;}}std::cout << "Converted lambda as function: " << str << std::endl;};
    lambda2(word);

}