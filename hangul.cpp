//	Prototipo generatore casuale di sillabe coreane
// C"è da sistemare tutti i rand()% e aggiungere i caratteri coreani, per il resto dovrebbe funzionare il tutto

#include <ctime>
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){

	string consonante[] = {"ㄱ", "ㄴ", "ㄷ", "ㄹ", "ㅁ", "ㅂ", "ㅅ", "ㅇ", "ㅈ", "ㅊ", "ㅋ", "ㅌ", "ㅍ", "ㅎ", "ㄲ", "ㄸ", "ㅃ", "ㅆ","ㅉ"};
	string vocale[] = {"ㅗ", "ㅜ", "ㅡ", "ㅛ", "ㅠ", "ㅚ", "ㅟ", "ㅢ", "ㅘ", "ㅝ", "ㅙ", "ㅞ", "ㅏ", "ㅓ", "ㅣ", "ㅐ", "ㅔ", "ㅑ", "ㅕ", "ㅒ", "ㅖ"};
	
//////////  "ㅗ", "ㅜ", "ㅡ", "ㅛ", "ㅠ", "ㅚ", "ㅟ", "ㅢ", "ㅘ", "ㅝ", "ㅙ", "ㅞ"


	srand(time(NULL));

	string third_c;
	string third_as;
	cout << " Terza consonante? (S/N) ";
	cin >>	third_c;
	
	if(third_c == "S"){
		cout << "Sempre o qualche volta? (S/M)  ";
		cin >> third_as;
	}
	
	int voc_rand;
	int cons_rand;
		
			while(true){
				cons_rand = rand()%18; // entrambi da 0 al numero massimo di vocali (17) /consonanti(19)
				voc_rand = rand()%16;
				
				cout << consonante[cons_rand];
				if(voc_rand<=11)
					cout << endl;
				cout << vocale[voc_rand] << endl << endl << endl;;

				int perc_rand_third;
				
				if(third_as ==	"S")
					perc_rand_third = 100;		// sicuro che mette la terza consonante
				else
					perc_rand_third = rand()%100; // da 0 a 100, 50% di probabilità
					
				if((third_c == "S")&&(perc_rand_third>=50)){
					int rand_third_c = rand()%18;
					cout << " " << consonante[rand_third_c] << endl << endl;
					
				}
				string gioj;
				cin >> gioj;
				system("clear");
				cout << endl << endl;
												
			}	
		
			return 0;
}
