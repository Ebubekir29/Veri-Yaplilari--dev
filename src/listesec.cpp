/**
* @file listesec.cpp
* @description Cift yonlu bagli listenin cpp dosyası
* @course 2B
* @assignment 1
* @date 11.11.2021
* @author EBUBEKIR MERT ebubekir.mert@ogr.sakarya.edu.tr
*/
#include <iostream>

#include "listesec.hpp"


using namespace std;

listesec::listesec()
{
    ilk = 0;
    uzunluk = 0;
}
listesec::~listesec()
{
    while(ilk==0)
	{
        sil(0);
    }
}
void listesec::yazdir()
{
    if(!ilk==0)
	{
        Dugum* gecici = ilk;
        while(gecici != 0) //dugum sayisi kadar veri doner.
		{
            if(gecici->sonraki == 0)
                cout << gecici->veri;
            else
                cout << gecici->veri << "<-->";
            gecici = gecici->sonraki;
        }
        cout <<endl;
    }
}
void listesec::ekle(int sira, string veri)
{
    if(ilk==0)
	{
        ilk = new Dugum(veri);
        uzunluk++;
    }
    else{
        if(sira>=0&&uzunluk-1 >= sira)             
		{                                        
            Dugum* gecici = ilk;
            while(gecici->sonraki != 0)             //Son dugume kadar kontrol edilerek gidilir.
			{
                gecici = gecici->sonraki;
            }
            gecici->sonraki = new Dugum("", 0, gecici);
            gecici = gecici->sonraki;
            uzunluk++;
			int i = uzunluk-1;
			while(i>sira)
			{
				gecici->veri = gecici->onceki->veri;
				gecici = gecici->onceki;
				i--;
			}
            gecici->veri = veri;
        }else
		{ // sira yoksa sona ekle
            Dugum* gecici = ilk;
            while(gecici->sonraki != 0)
			{
                gecici = gecici->sonraki;
            }
            gecici->sonraki = new Dugum(veri, 0, gecici);
            uzunluk++;
        }
    }
}
void listesec::sil(int sira)
{
    if(!ilk==0)
	{
        if(sira>=0 && uzunluk-1>=sira)
		{
            Dugum* gecici = ilk;
            int i = 0;
            while(sira>i)
            {
                gecici = gecici->sonraki;
                i++;
            }
			int j = sira;
			while(uzunluk-1>j)
			{
				gecici->veri = gecici->sonraki->veri;
				gecici = gecici->sonraki;
				j++;
			}
            if(gecici == ilk)
			{
                delete gecici;
                ilk = 0;
            }else{
                gecici->onceki->sonraki = 0;
                delete gecici;
            }
            uzunluk--;
        }else
		{ // sira yoksa sondan sil
            Dugum* gecici = ilk;
            while(gecici->sonraki != 0)
			{
                gecici = gecici->sonraki;
            }
            if(gecici == ilk)
			{
                delete gecici;
                ilk = 0;
            }else{
                gecici->onceki->sonraki = 0;
                delete gecici;
            }
            uzunluk--;
        }
    }
}
