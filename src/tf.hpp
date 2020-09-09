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
            std::string strInput = "";
            while(1){
                strInput = "";
                std::cout << "Enter question:" << std::endl;
                std::cout << ">> ";
                std::getline(std::cin, strInput);
                std::cout << std::endl;
                if(proceed("ligmallama")){
                    question = strInput;
                    break;
                }
            }
        }

        void setChoices(){
            std::cout << "TODO: void TF::setChoices()" << std::endl;
        }

        void setNumCorrect(){
            std::cout << "TF questions has only one answer yeet." << std::endl;
        }

        void display() const{
            std::cout << "TODO: void TF::display()" << std::endl;
        }
};

#endif //__TF_HPP__