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
            char charInput = '';
            std::string strInput = "";
            while(intInput < 1 || intInput > 9){ //verifies and receives user input for numCorrect
                std::cout << "Enter number of correct choices (1 to 9):" << std::endl;
                std::cout << ">> ";
                std::cin.clear();
                std::cin.ignore(1000,'\n');
                std::cin >> intInput;
                std::endl;
                if(std::cin.fail()){ //check if input is int
                    std::cout << "Error: input must be of integer type [1, 2, 3, ...]." << std::endl;
                    std::cout << "Please try again." << std::endl;
                }
                else if(intInput < 1 || intInput > 9){
                    std::cout << "Error: integer input must be greater than 0 and less than 10." << std::endl;
                    std::cout << "Please try again." << std::endl;
                }
                else
                    numCorrect = intInput; //numCorrect value set
            }
            
            while(1){
                std::cout << "Enter question:" << std::endl;
                std::cout << ">> ";
                std::cin.clear();
                std::cin.ignore(1000,'\n');
                std::getline(std::cin, strInput);
                std::endl;
                std::cout << "Enter 'q' to reenter question or 'e' to continue" << std::endl;
                std::cout << ">> ";
                std::cin.clear();
                std::cin.ignore(1000,'\n');
                std::cin >> charInput;
                std::endl;
                if(std::cin.fail()){ //check if input is char
                    std::cout << "Error: input must be of character type ['a', 'A', 'b', ...]." << std::endl;
                    std::cout << "Please try again." << std::endl;
                }
                else if(charInput != 'q' && charInput != 'e'){
                    std::cout << "Error: character input must be either 'q' or 'e'." << std::endl;
                    std::cout << "Please try again." << std::endl;
                }
                else
                    question = strInput;
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