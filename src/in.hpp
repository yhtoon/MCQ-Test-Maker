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
            std::cout << "TODO: In::In()" << std::endl;
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
};

#endif //__IN_HPP__