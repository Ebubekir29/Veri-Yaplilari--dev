/**
* @file listesec.hpp
* @description Cift yonlu bagli listenin hpp dosyasi 
* @course 2B
* @assignment 1
* @date 11.11.2021
* @author EBUBEKIR MERT ebubekir.mert@ogr.sakarya.edu.tr
*/

#ifndef LISTESEC_HPP
#define LISTESEC_HPP
#include "Dugum.hpp"

class listesec{
private:
    Dugum* ilk;
public:
    int uzunluk;
    listesec();  
    ~listesec();
    void yazdir();
    void ekle(int, string);
    void sil(int);
};

#endif