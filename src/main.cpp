#include "mcq_test_maker.hpp"

int main(){
    MCQTestMaker* ez = new MCQTestMaker();
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