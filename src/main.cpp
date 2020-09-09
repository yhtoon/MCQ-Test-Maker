#include <iostream>
#include <vector>
#include <string>

#include "mcq_test_maker.hpp"
#include "mc.hpp"

//actual main

// int main(){
//     MCQTestMaker* ez = new MCQTestMaker();
//     return 0;
// }

//MC test

int main(){
    std::vector<Question*> tf_container;
    MC* mc = new MC();
    tf_container.push_back(mc);
    std::cout << tf_container.at(0)->getNumCorrect() << std::endl;
    std::cout << std::endl;
    std::cout << tf_container.at(0)->getQuestion() << std::endl;
    std::vector<std::string> v = tf_container.at(0)->getChoices();
    std::cout << std::endl;
    char c = 'A';
    for(unsigned i = 0; i < v.size(); ++i){
        std::cout << c << ". " << v.at(i) << std::endl;
        c++;
    }
    std::cout << std::endl;
    tf_container.at(0)->display();
    
    return 0;
}

/*
>>command line navigation

ls (show contents of current directory)

cd (change directory) 
 - cd .. : return to home directory
 - cd <directory> : enter selected directory
 - cd ../../<directory>/<directory>

a.out : executable file generated after compiling

cd MCQ-Test-Maker/src/ (go to src directory from start)

g++ main.cpp && ./a.out (to compile)

g++ main.cpp -o shit && ./shit

./ (run executable)
>>vector

.at(<index>)
.push_back(<item>)
<vector name>.pop_back(<item>)
*/