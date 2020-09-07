#ifndef __MCQ_TEST_MAKER_HPP__
#define __MCQ_TEST_MAKER_HPP__

#include <iostream>
#include <string>
#include <vector>

#include "in.hpp"
#include "question.hpp"
#include "tf.hpp"
#include "mc.hpp"

class MCQTestMaker{
    private:
        std::vector<Question*> tf_container;
        std::vector<Question*> mc_container;
        int size;
    public:
        MCQTestMaker(){
            std::cout << "TODO: MCQTestMaker::MCQTestMaker()" << std::endl;
            mainMenu();
            inMenu();
            outMenu();
            gradeMenu();
        }

    private:
        void mainMenu(){
            std::cout << "TODO: MCQTestMaker::mainMenu()" << std::endl;
        }

        void inMenu(){
            std::cout << "TODO: MCQTestMaker::inMenu()" << std::endl;
        }

        void outMenu(){
            std::cout << "TODO: MCQTestMaker::outMenu()" << std::endl;
        }

        void gradeMenu(){
            std::cout << "TODO: MCQTestMaker::gradeMenu()" << std::endl;
        }
};

#endif //__MCQ_TEST_MAKER_HPP__