/**
* @file main.cpp
* @description Dosyaya ekleme silme ve yazma için cpp dosyasi.
* @course 2B
* @assignment 1
* @date 11.11.2021
* @author EBUBEKIR MERT ebubekir.mert@ogr.sakarya.edu.tr
*/

#include <iostream>
#include <sstream>
#include <fstream>
#include "listesec.hpp"
using namespace std;

int main()
{
    fstream dosya;
    listesec liste;
    dosya.open("./doc/Veri.txt");
    int sira;
    string veri;
    string satir;
    string ilkDeger;
    while(!dosya.eof())
	{
        getline(dosya, ilkDeger);
        if(ilkDeger[0] == 'e' || ilkDeger[0] == 'E')    //ilk deger kontrolu
		{ // Ekleme Durumu
            ilkDeger.erase(0,2);      //ilk parantezi silme
            ilkDeger.erase(ilkDeger.length()-1);  //son parantezi silme
            stringstream split(ilkDeger);
            getline(split, satir, '#');    
            getline(split, veri);
            sira = stoi(satir); 
            liste.ekle(sira, veri); //ekle
        }else
		{ // Silme 
            ilkDeger.erase(0,2);   //ilk parantezi silme
            ilkDeger.erase(ilkDeger.length()-1);   //son parantezi silme
            sira = stoi(ilkDeger);
            liste.sil(sira);   //sil
        }
    }
    dosya.close();
    
    cout << "------------------------------Liste------------------------------" << endl;
    liste.yazdir();   //yazdir

    return 0;
}