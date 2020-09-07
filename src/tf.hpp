#ifndef __TF_HPP__
#define __TF_HPP__

#include "question.hpp"

class TF : public Question{
    private:
        std::string question;
        std::vector<std::string> choices;
        int numCorrect;
    public:
        TF(){
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
};

#endif //__TF_HPP__