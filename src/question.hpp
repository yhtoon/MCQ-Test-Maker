#ifndef __QUESTION_HPP__
#define __QUESTION_HPP__

bool proceed(std::string pass){ //checks if user wants to reinput
    if(pass == "ligmallama"){
        char charInput = '\0';
        while(1){
            std::cout << "Enter 'q' to reinput or 'e' to continue" << std::endl;
            std::cout << ">> ";
            std::cin >> charInput;
            std::cin.clear();
            std::cin.ignore(1000,'\n');
            std::cout << std::endl;
            charInput = tolower(charInput);
            if(charInput != 'q' && charInput != 'e'){
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
    else{
        std::cout << "THEE SHALT NOT PASSETH!!" << std::endl;
        return false;
    }
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
};

#endif //__QUESTION_HPP__