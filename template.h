//
// Created by Alexander on 06.09.2021.
//

#ifndef LAB_TEMPLATE_TEMPLATE_H
#define LAB_TEMPLATE_TEMPLATE_H

#include <iostream>

void introduce(const std::string &authorsName, bool isFemale = false);

void introduce(const std::string &authorsName, const std::string &email, bool isFemale = false);


void enterTaskNumber(int &selectedTask, const int &minTaskNumber, const int &maxTaskNumber);


void task1();

void task2();


#endif //LAB_TEMPLATE_TEMPLATE_H
