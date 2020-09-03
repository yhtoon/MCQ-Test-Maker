# MCQ-Test-Maker
 big brain project 1
 
[![Run on Repl.it](https://repl.it/badge/github/DAVT0N/PGS)](https://repl.it/github/DAVT0N/PGS)

# Functionalities

-IN-

    1. asks user for question type (T/F or MC)
        - if T/F:
            1. user inputs question
            2. inputs answer choices (first input must be the correct choice)
        - if MC:
            1. user inputs number of correct choices
            2. user inputs question
            3. inputs answer choices (first input must be the correct choice)
    2. user can view and edit previous inputs at any moment.
    3. user will be met with a menu with options: add, remove, edit, display, output
    4. generate output file with list of all inputs

-OUT-

    1. takes output file of IN as input
    2. asks user for number of versions
    3. generates unique version(s) with individual IDs
    4. generates 1 answer key file for every version ID

-GRADE-

    1. reads answer key file
    2. reads user response file(s)
    3. (optional) outputs user response file(s) with identification of false answers if there are any
    4. generates 1 file that shows input(s) and corresponding scores