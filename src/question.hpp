#ifndef __QUESTION_HPP__
#define __QUESTION_HPP__

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