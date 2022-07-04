/**
* @file Dugum.cpp
* @description Dugum cpp dosyası 
* @course 2B
* @assignment 1
* @date 11.11.2021
* @author EBUBEKIR MERT ebubekir.mert@ogr.sakarya.edu.tr
*/

#include <iostream>
#include "Dugum.hpp"

using namespace std;

Dugum::Dugum(string veri, Dugum* sonraki, Dugum* onceki){
    this->veri = veri;       
    this->sonraki = sonraki;
    this->onceki = onceki;
}