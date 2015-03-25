/*
 * Note: CTRL+D is EOF in Linux.
 */

#ifndef EXERCISE_8_01_H
#define EXERCISE_8_01_H

#include <iostream>
#include <string>

std::istream& read(std::istream& is)
{
    std::string buf;
    while (is >> buf)
    {
        std::cout << buf << std::endl;
    }
    is.clear();
    return is;
}

#endif
