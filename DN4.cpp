#include <iostream>
#include <cmath>


using namespace std;
int main()
{
	int ura, min;
    	cout << "Vnesi cas: Ure: "; 
	cin >> ura;
	cout << ", minute: ";
	cin >> min;

	double kotu, kotm, kot;
	
	kotm = min * 6;
	kotu = ura * 30; //Če želimo da se za vsako minuto premakne tudi urni kazalec: kotu = ura * 30 + kotm * 0.5; ali kotu = fma(ura, 30, kotm/2);
	kot = fabs(kotu - kotm); 
	if (kot > 180) {
		kot = fabs(360 - kot); //ne vem zakaj ampak brez absolutne vrednosti je včasih kot negativen primer: (18:19)
	}

	cout << "Urni in minutni kazalec ob " << ura << ":" << min << " oklepata kot " << kot << "°." << endl;
	return 0;
}
