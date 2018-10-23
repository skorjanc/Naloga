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

	/* namesto if zanke pri kotu bi lahko uporabil zanko
	int ura2;
	if(ura>12) {
		ura2 = ura - 12;
	}
	potem pri racunanju uporabimo ura2 pri izpisu pa ura
	*/
	double kotu, kotm, kot; //lahko bi uporabil cela števila
	
	kotm = min * 6;
	kotu = ura * 30; //Če želimo da se za vsako minuto premakne tudi urni kazalec: kotu = ura * 30 + kotm * 0.5; ali kotu = fma(ura, 30, kotm/2);
	
	if(kotu > 360) {
		kotu -= 360;
	}
	
	kot = fabs(kotu - kotm); 
	
	if (kot > 180) {
		kot = (360 - kot); 
	}

	cout << "Urni in minutni kazalec ob " << ura << ":" << min << " oklepata kot " << kot << "°." << endl;
	
	return 0;
}
