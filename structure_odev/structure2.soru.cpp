#include <iostream>
#include <string>
using namespace std;


struct kumas {
    string ipliktipi;
    double dm2agirlik;
    string dokumatipi;
    string renk;
    int miktar;
};


struct iskelet {
    string malzeme;
    string birlestirme;
    string tarz;
    string boyut;
    int miktar;
};


struct mobilya {
    kumas kaplama;
    iskelet malzeme;
    int fiyat;
    int adet;
};

int main() {
    const int urunSayisi = 10;
    mobilya urunler[urunSayisi];
    int toplamFiyat = 0;

    
    for (int i = 0; i < urunSayisi; i++) {
        cout << "Ürün " << (i + 1) << " icin bilgileri girin:" << endl;

        cout << "Kumas iplik tipi: ";
        cin >> urunler[i].kaplama.ipliktipi;
        cout << "Kumas dm2 agirlik: ";
        cin >> urunler[i].kaplama.dm2agirlik;
        cout << "Kumas dokuma tipi: ";
        cin >> urunler[i].kaplama.dokumatipi;
        cout << "Kumas renk: ";
        cin >> urunler[i].kaplama.renk;
        cout << "Kumas miktar: ";
        cin >> urunler[i].kaplama.miktar;

        cout << "iskelet malzeme: ";
        cin >> urunler[i].malzeme.malzeme;
        cout << "iskelet birlestirme: ";
        cin >> urunler[i].malzeme.birlestirme;
        cout << "iskelet tarz: ";
        cin >> urunler[i].malzeme.tarz;
        cout << "iskelet boyut: ";
        cin >> urunler[i].malzeme.boyut;
        cout << "iskelet miktar: ";
        cin >> urunler[i].malzeme.miktar;

        cout << "Ürün fiyati: ";
        cin >> urunler[i].fiyat;
        cout << "Ürün adedi: ";
        cin >> urunler[i].adet;

        toplamFiyat += urunler[i].fiyat * urunler[i].adet;
    }

    
    cout << "\nÜrün Bilgileri:\n";
    for (int i = 0; i < urunSayisi; i++) {
        cout << "Ürün " << (i + 1) << ":" << endl;
        cout << "Kumas: " << urunler[i].kaplama.ipliktipi << ", " 
             << urunler[i].kaplama.dm2agirlik << " dm2, " 
             << urunler[i].kaplama.dokumatipi << ", " 
             << urunler[i].kaplama.renk << ", " 
             << urunler[i].kaplama.miktar << endl;

        cout << "iskelet: " << urunler[i].malzeme.malzeme << ", " 
             << urunler[i].malzeme.birlestirme << ", " 
             << urunler[i].malzeme.tarz << ", " 
             << urunler[i].malzeme.boyut << ", " 
             << urunler[i].malzeme.miktar << endl;

        cout << "Fiyat: " << urunler[i].fiyat << ", Adet: " << urunler[i].adet << endl;
        cout << "------------------------" << endl;
    }

    
    cout << "Toplam Fiyat: " << toplamFiyat << endl;

    return 0;
}
 



