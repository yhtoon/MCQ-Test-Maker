#ifndef __IN_HPP__
#define __IN_HPP__

#include "question.hpp"

class In{
    private:
        std::vector<Question*> tf_container;
        std::vector<Question*> mc_container;
        int size;

    public:
        In(){
            std::cout << "Welcome to the MCQ builder!!!" << std::endl;
            while(1){

            }
            //std::cout << "TODO: In::In()" << std::endl;
        }

        ~In(){
            std::cout << "TODO: In::~In()" << std::endl;
        }

        void add(){
            std::cout << "TODO: void In::add()" << std::endl;
        }

        void remove(){
            std::cout << "TODO: void In::remove()" << std::endl;
        }

        void edit(){
            std::cout << "TODO: void In::edit()" << std::endl;
        }

        void display(){
            std::cout << "TODO: void In::display()" << std::endl;
        }

        std::vector<Question*> outputVector(){
            std::vector<Question*> mixedBaby;
            mixedBaby.reserve( tf_container.size() + mc_container.size() ); 
            //^preallocating memory makes combining two vectors faster than just inserting the second vector into the first because there is no need to check if capacity is reached before appending each item
            mixedBaby.insert( mixedBaby.end(), tf_container.begin(), tf_container.end() );
            mixedBaby.insert( mixedBaby.end(), mc_container.begin(), mc_container.end() );
            return mixedBaby;
        }

        int getSize() const{
            return size;
        }

        void outputFile(){
            std::cout << "TODO: void In::outputFile()" << std::endl;
        }

    private:
        char menu(){
            char charInput = '\0';
            while(1){
                std::cout << "...MCQ builder MENU..." << std::endl;
                std::cout << "a -> add      - build a TF (true/false) or MC (multiple choice) question" << std::endl;
                std::cout << "s -> edit     - view, select, and edit a question" << std::endl;
                std::cout << "d -> remove   - view, select, and remove a question" << std::endl;
                std::cout << "f -> file out - outputs formatted file for test build in another session" << std::endl;
                std::cout << "e -> generate - exit and continue to the test version generator" << std::endl;
                std::cout << "q -> quit     - exit MCQ builder" << std::endl;
                std::cout << std::endl;
                std::cout << "Choose one of the above" << std::endl;
                std::cout << ">> ";
                std::cin >> charInput;
                std::cin.clear();
                std::cin.ignore(1000,'\n');
                std::cout << std::endl;
                if(std::cin.fail()){ //check if input is char
                    std::cout << "Error: input must be of character type ['a', 'A', 'b', ...]." << std::endl;
                    std::cout << "Please try again." << std::endl;
                }
                else if(charInput != 'a' && charInput != 's' && charInput != 'd' && charInput != 'f' && charInput != 'e' && charInput != 'q'){
                    std::cout << "Error: character input must be 'a', 's', 'd', 'f', 'e', or 'q'." << std::endl;
                    std::cout << "Please try again." << std::endl;
                }
                else
                    break;
            }
            if(proceed())
                return charInput;
        }
        
        // bool proceed(){ //checks if user wants to reinput
        //     char charInput = '\0';
        //     while(1){
        //             std::cout << "Enter 'q' to reinput or 'e' to continue" << std::endl;
        //             std::cout << ">> ";
        //             std::cin >> charInput;
        //             std::cin.clear();
        //             std::cin.ignore(1000,'\n');
        //             std::cout << std::endl;
        //             if(std::cin.fail()){ //check if input is char
        //                 std::cout << "Error: input must be of character type ['a', 'A', 'b', ...]." << std::endl;
        //                 std::cout << "Please try again." << std::endl;
        //             }
        //             else if(charInput != 'q' && charInput != 'e'){
        //                 std::cout << "Error: character input must be either 'q' or 'e'." << std::endl;
        //                 std::cout << "Please try again." << std::endl;
        //             }
        //             else
        //                 break;
        //     }
        //     if(charInput == 'e')
        //         return true;
        //     else
        //         return false;
        // }
};

#endif //__IN_HPP__