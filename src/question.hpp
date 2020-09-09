#ifndef __QUESTION_HPP__
#define __QUESTION_HPP__

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

class Question{
    public:
        Question(){};
        virtual std::string getQuestion() const = 0;
        virtual std::vector<std::string> getChoices() const = 0;
        virtual int getNumCorrect() const = 0;
        virtual void setQuestion() = 0;
        virtual void setChoices() = 0;
        virtual void setNumCorrect() = 0;
        virtual void display() const = 0;
    // private:
    //     virtual bool proceed() = 0;
};

#endif //__QUESTION_HPP__