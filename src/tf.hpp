#ifndef __TF_HPP__
#define __TF_HPP__

#include "question.hpp"

class TF : public Question{
    private:
        std::string question;
        std::vector<std::string> choices;
        int numCorrect;
    public:
        /*
        1. asks user for input
        2. store input into variables
        */
        TF():numCorrect(1){ 
            std::cout << "TODO: TF::TF()" << std::endl;
        }

        std::string getQuestion() const{
            return question;
        }

        std::vector<std::string> getChoices() const{
            return choices;
        }

        int getNumCorrect() const{
            return numCorrect;
        }

        void setQuestion(){
            std::cout << "TODO: void TF::setQuestion()" << std::endl;
        }

        void setChoices(){
            std::cout << "TODO: void TF::setChoices()" << std::endl;
        }

        void setNumCorrect(){
            std::cout << "TODO: void TF::setNumCorrect()" << std::endl;
        }

        void display() const{
            std::cout << "TODO: void TF::display()" << std::endl;
        }

    private:
        bool proceed(){ //checks if user wants to reinput
            char charInput = '\0';
            while(1){
                    std::cout << "Enter 'q' to reinput or 'e' to continue" << std::endl;
                    std::cout << ">> ";
                    std::cin >> charInput;
                    std::cin.clear();
                    std::cin.ignore(1000,'\n');
                    std::cout << std::endl;
                    if(std::cin.fail()){ //check if input is char
                        std::cout << "Error: input must be of character type ['a', 'A', 'b', ...]." << std::endl;
                        std::cout << "Please try again." << std::endl;
                    }
                    else if(charInput != 'q' && charInput != 'e'){
                        std::cout << "Error: character input must be either 'q' or 'e'." << std::endl;
                        std::cout << "Please try again." << std::endl;
                    }
                    else
                        break;
            }
            if(charInput == 'e')
                return true;
            else
                return false;
        }
};

#endif //__TF_HPP__