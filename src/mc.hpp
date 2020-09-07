#ifndef __MC_HPP__
#define __MC_HPP__

#include "question.hpp"

class MC : public Question{
    private:
        std::string question;
        std::vector<std::string> choices;
        int numCorrect;
    public:
        MC(){
            int intInput = 0;
            while(intInput < 1 || intInput > 9){
                std::cout << "Enter number of correct choices (up to 9): ";
                std::cin >> intInput;
                std::cin.clear();
                std::cin.ignore(1000,'\n');
                if(intInput < 1 || intInput > 9)
                    std::cout << "Error: integer input must be greater than 0 and less than 10." << std::endl;
            }
            //std::cout << "TODO: MC::MC()" << std::endl;
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
            std::cout << "TODO: void MC::setQuestion()" << std::endl;
        }

        void setChoices(){
            std::cout << "TODO: void MC::setChoices()" << std::endl;
        }

        void setNumCorrect(){
            std::cout << "TODO: void MC::setNumCorrect()" << std::endl;
        }

        void display() const{
            std::cout << "TODO: void MC::display()" << std::endl;
        }
};

#endif //__MC_HPP__