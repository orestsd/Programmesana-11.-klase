#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    string atb1;
    string atb2;
    string atb3;
    string atb4;
    int skaitlis;
    int randskaitlis = rand() % 5;
    cout<<"Tu dzirdi, ka nakts vidū kāds klauvē pie durvīm, vai tu iesi atvērt durvis? Y/N: ";
    cin>> atb1;
    while(atb1!="Y"&& atb1!= "N"){
        cout<<"Ieraksti Y (yes) vai N (no): ";
        cin>>atb1;
    }
    
    if(atb1=="Y"){
        cout<< "Tu atver durvis un ieraugi aizdomīga izskata cilvēku. Viņš jautā, vai gribi ar viņu spēlēt spēli. Y/N: ";
        cin>>atb2;
        
        while(atb2!="Y"&& atb2!= "N"){
        cout<<"Ieraksti Y (yes) vai N (no): ";
        cin>>atb2;
        
        }if(atb2=="Y"){
            cout<<"Mini skaitli no 1 līdz 4: ";
            cin>>skaitlis;
            while (skaitlis < 1 || skaitlis > 4) {
            cout << "Skaitlim jābūt veselam no 1 lidz 4... Mini vēlreiz: ";
            cin >> skaitlis;
            }
            if(skaitlis != randskaitlis){
                cout<<"Tu neuziminēji, tagad tu mirsi.... BAM";
            }else{
                cout<< "Apsveicu, tu uzvarēji, tagad došos projām, paldies par spēlēšanu...";
            }                        
        }else{
            cout<<"Man nepatīk šī atbilde, es domāju, ka cilvēkiem kā tev nevajadzētu dzīvot. Viņs no kabatas izvelk ieroci un tevi nošauj.BAM";
        }
    }else{
        cout<<"Tu izvēlies ignorēt cilvēku un ej atpakaļ uz gultu"<< endl;
        cout<<"Tu atkal pamosties, jo liekas, ka dzirdēji kaut ko nokrītam. Vai tu gribi iet pārbaudīt vai slēpties? P/S: ";
        cin>> atb4;
        while(atb4!="P"&& atb4!= "S"){
        cout<<"Ieraksti P (pārbaudīt) vai S (slēpties): ";
        cin>>atb4;
        } 
        if(atb4 == "S"){
            cout<< "Tu ātri noslēpies zem gultas un dzirdi, ka kāds tuvojas. Kad viņš iziet ārā no istabas, tu paņem telefonu un ātri izlēc pa logu un piezani policijai.";
            cout<< "Atbrauc policija un apcietina aizdomīgo vīrieti, apsveicu, tu esi drošībā !";
            
        }else{
            cout<<"Tu aizej uz virtuvi, kad pēkšni tev kāds iedur ar nazi un saka \"Vajadzēja ielaist mani kad klauvēju, tagad tu mirsi\" ";
        }
    }
}