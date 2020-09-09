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
            std::cout << "...Constructing new True/False Question..." << std::endl;
            setQuestion();
            setChoices();
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
            char charInput = '\0';
            while(1){
                charInput = '\0';
                std::cout << "Enter (t or f):" << std::endl;
                std::cout << ">> ";   
                std::cin >> charInput;
                std::cin.clear();
                std::cin.ignore(1000,'\n');
                std::cout << std::endl;
                charInput = tolower(charInput);
                if(charInput != 't' && charInput != 'f'){
                    std::cout << "Error: character input must be either 't' or 'f'." << std::endl;
                    std::cout << "Please try again." << std::endl;
                }
                else{
                    if (proceed()){
                        if(charInput=='t'){
                            choices.push_back("T");
                        }
                        else  choices.push_back("F");
                        break;
                    }
                }  
            }
        }

        void setNumCorrect(){
            std::cout << "TF questions has only one answer yeet." << std::endl;
        }

        void display() const{
            std::cout << "Question: " << std::endl;
            std::cout << question << std::endl;
            std::cout << std::endl;
            std::cout << "Answer: " << std::endl;
            std::cout << choices.at(0) << std::endl;
            std::cout << std::endl;
        }
};

#endif //__TF_HPP__