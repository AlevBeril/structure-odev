#include <iostream>
#include <string>
using namespace std;


struct Otomobil {
    string marka;       
    string model;       
    int yil;            
    char yakit;         
    double km;          
    double fiyat;       
};


void otomobilBilgileriniYazdir(Otomobil& oto) {
    cout << "Marka: " << oto.marka << endl;
    cout << "Model: " << oto.model << endl;
    cout << "Yil: " << oto.yil << endl;
    cout << "Yakit Türü: ";
    if (oto.yakit == 'B') {
        cout << "Benzin" << endl;
    } else if (oto.yakit == 'D') {
        cout << "Dizel" << endl;
    } else if (oto.yakit == 'G') {
        cout << "Gaz" << endl;
    } else if (oto.yakit == 'H') {
        cout << "Hibrit" << endl;
    } else {
        cout << "Bilinmeyen" << endl;
    }
    cout << "Kilometre: " << oto.km << " km" << endl;
    cout << "Fiyat: " << oto.fiyat << " TL" << endl;
    cout << "---------------------------" << endl;
}

int main() {
    
    Otomobil binek, suv, ticari; 
    cout << "Binek Otomobili Bilgilerini Girin:" << endl;
    cout << "Marka: ";
    getline(cin, binek.marka);  
    cout << "Model: ";
    getline(cin, binek.model);  
    cout << "Yil: ";
    cin >> binek.yil;  
    cout << "Yakit Türü ('B' = Benzin, 'D' = Dizel, 'G' = Gaz, 'H' = Hibrit): ";
    cin >> binek.yakit;  
    cin.get();  
    cout << "Kilometre: ";
    cin >> binek.km;  
    cout << "Fiyat: ";
    cin >> binek.fiyat;  
    cout << "\nSUV Otomobili Bilgilerini Girin:" << endl;
    cin.get();  
    cout << "Marka: ";
    getline(cin, suv.marka);  
    cout << "Model: ";
    getline(cin, suv.model);  
    cout << "Yil: ";
    cin >> suv.yil;  
    cout << "Yakit Türü ('B' = Benzin, 'D' = Dizel, 'G' = Gaz, 'H' = Hibrit): ";
    cin >> suv.yakit;  
    cin.get();  
    cout << "Kilometre: ";
    cin >> suv.km;  
    cout << "Fiyat: ";
    cin >> suv.fiyat;  
    cout << "\nTicari Otomobili Bilgilerini Girin:" << endl;
    cin.get();  
    cout << "Marka: ";
    getline(cin, ticari.marka);  
    cout << "Model: ";
    getline(cin, ticari.model);  
    cout << "Yil: ";
    cin >> ticari.yil;  
    cout << "Yakit Türü ('B' = Benzin, 'D' = Dizel, 'G' = Gaz, 'H' = Hibrit): ";
    cin >> ticari.yakit;  
    cin.get();  

    cout << "Kilometre: ";
    cin >> ticari.km;  
    cout << "Fiyat: ";
    cin >> ticari.fiyat;  
    cout << "\nGirdiðiniz Otomobil Bilgileri:" << endl;
    cout << "\nBinek Otomobili:" << endl;
    otomobilBilgileriniYazdir(binek);

    cout << "\nSUV Otomobili:" << endl;
    otomobilBilgileriniYazdir(suv);

    cout << "\nTicari Otomobili:" << endl;
    otomobilBilgileriniYazdir(ticari);

    return 0;
}

