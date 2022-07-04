/**
* @file Dugum.hpp
* @description Dugumun hpp dosyasi
* @course 2B
* @assignment 1
* @date 11.11.2021
* @author EBUBEKIR MERT ebubekir.mert@ogr.sakarya.edu.tr
*/

#ifndef DUGUM_HPP
#define DUGUM_HPP
#include <iostream>
using namespace std;

class Dugum{
    public:
    string veri;
    Dugum* sonraki;
    Dugum* onceki;
    Dugum(string="", Dugum* = 0, Dugum* = 0);
};

#endif