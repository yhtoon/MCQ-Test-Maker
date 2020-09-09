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
            std::cout << "...Constructing new Multiple Choice Question..." << std::endl;
            setNumCorrect();
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

        void setQuestion(){ //receives and verifies user input for std::string question
            std::string strInput = "";
            while(1){
                strInput = "";
                std::cout << "Enter question:" << std::endl;
                std::cout << ">> ";
                std::getline(std::cin, strInput);
                std::cout << std::endl;
                if(proceed()){
                    question = strInput;
                    break;
                }
            }
        }

        void setChoices(){ //receives and verifies user input for std::vector<std::string> choices
            char charInput = '\0';
            std::string strInput = "";
            bool choiceTypeFlag = false;
            int correctChoiceIndex = 1;
            int incorrectChoiceIndex = 1;
            while(1){
                charInput = '\0';
                strInput = "";
                if(correctChoiceIndex <= numCorrect){
                    std::cout << "Enter correct choice (" << correctChoiceIndex << " / " << numCorrect << "):" << std::endl;
                    choiceTypeFlag = true;
                }
                else{
                    std::cout << "Enter incorrect choice (" << incorrectChoiceIndex << " / max of " << 10 - numCorrect << "):" << std::endl;
                    choiceTypeFlag = false;
                }
                std::cout << ">> ";
                std::getline(std::cin, strInput);
                std::cout << std::endl;
                if(proceed()){ //if user is satisfied with most recent input
                    if(choices.size() >= 9){
                        std::cout << "Maximum number of choices reached." << std::endl;
                        std::cout << std::endl;
                        std::cout << "...Multiple Choice Question successfully built..." << std::endl;
                        std::cout << std::endl;
                        choices.push_back(strInput);
                        return;
                    }
                    while(1){ //checks if user wants to add more choices
                        std::cout << "Enter 'q' to stop adding choices or 'e' to continue" << std::endl;
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
                    if(charInput == 'q'){
                        if(choices.size() <= numCorrect){
                            std::cout << "Error: user must input at least " << numCorrect + 1 << " choices as determined by previous input for number of correct choices (" << numCorrect << ")" << std::endl;
                            std::cout << std::endl;
                            if(choiceTypeFlag)
                                correctChoiceIndex++;
                            else
                                incorrectChoiceIndex++;
                            choices.push_back(strInput);
                        }
                        else{
                            std::cout << "...Multiple Choice Question successfully built..." << std::endl;
                            std::cout << std::endl;
                            choices.push_back(strInput);
                            return;
                        }
                    }
                    else{
                        if(choiceTypeFlag)
                            correctChoiceIndex++;
                        else
                            incorrectChoiceIndex++;
                        choices.push_back(strInput);
                    }
                }
            }
        }

        void setNumCorrect(){ //receives and verifies user input for int numCorrect
            int intInput = 0;
            while(1){
                //resets temp input variables
                intInput = 0;
                std::cout << "Enter number of correct choices (1 to 9):" << std::endl;
                std::cout << ">> ";
                std::cin >> intInput;
                std::cin.clear();
                std::cin.ignore(1000,'\n');
                std::cout << std::endl;
                if(std::cin.fail()){ //check if input is int
                    std::cout << "Error: input must be of integer type [1, 2, 3, ...]." << std::endl;
                    std::cout << "Please try again." << std::endl;
                }
                else if(intInput < 1 || intInput > 9){
                    std::cout << "Error: integer input must be greater than 0 and less than 10." << std::endl;
                    std::cout << "Please try again." << std::endl;
                }
                else if(proceed()){
                    numCorrect = intInput; //numCorrect value set
                    break;
                }
            }
        }

        void display() const{
            std::cout << "Question: " << std::endl;
            std::cout << question << std::endl;
            std::cout << std::endl;
            std::cout << "Choices: " << std::endl;
            char c = 'A';
            for(unsigned i = 0; i < choices.size(); ++i){
                std::cout << c << ". " << choices.at(i) << std::endl;
                c++;
            }
            std::cout << std::endl;
        }

    // private:
    //     bool proceed(){ //checks if user wants to reinput
    //         char charInput = '\0';
    //         while(1){
    //                 std::cout << "Enter 'q' to reinput or 'e' to continue" << std::endl;
    //                 std::cout << ">> ";
    //                 std::cin >> charInput;
    //                 std::cin.clear();
    //                 std::cin.ignore(1000,'\n');
    //                 std::cout << std::endl;
    //                 if(std::cin.fail()){ //check if input is char
    //                     std::cout << "Error: input must be of character type ['a', 'A', 'b', ...]." << std::endl;
    //                     std::cout << "Please try again." << std::endl;
    //                 }
    //                 else if(charInput != 'q' && charInput != 'e'){
    //                     std::cout << "Error: character input must be either 'q' or 'e'." << std::endl;
    //                     std::cout << "Please try again." << std::endl;
    //                 }
    //                 else
    //                     break;
    //         }
    //         if(charInput == 'e')
    //             return true;
    //         else
    //             return false;
    //     }
};

#endif //__MC_HPP__