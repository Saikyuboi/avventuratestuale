#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>
#include <string>
#include <conio.h>
#include <fstream>

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_ENTER '\r'

using namespace std;

int main()
{
    bool accesso5=false;
    bool puzzle=false;
    bool rosso=false;
    bool giallo=false;
    bool verde=false;
    int combo=0;
    int statua=1;
    int sedia=2;
    int sedia1=0;
    int trc=0;
    bool torcia=false;
    bool key=false;
    bool bottone1=false;
    bool bottone2=false;
    bool bottone3=false;
    char c;
    bool refresh=false;
    bool sel;
    bool map52=false;
    int scelta;
    int scelta1;
    int map;
    string line;
    system("mode con lines=50");
    system("mode con cols=150");
    while (true)
    {
        sel=true;
        scelta=1;
        map=1;
        cout<<"######################################################################################################################################################"<<endl;
        cout<<"#                                                                                                                                                    #"<<endl;
        cout<<"#                              8888888b.                             888               888                                                           #"<<endl;
        cout<<"#                              888   Y88b                            888               888                                                           #"<<endl;
        cout<<"#                              888    888                            888               888                                                           #"<<endl;
        cout<<"#                              888   d88P 888  888 88888888 88888888 888  .d88b.       888888 .d88b.  888  888  888  .d88b.  888d888                 #"<<endl;
        cout<<"#                              8888888P""   888  888    d88P     d88P  888 d8P  Y8b      888   d88""""  88b 888  888  888 d8P  Y8b 888P""                    #"<<endl;
        cout<<"#                              888        888  888   d88P     d88P   888 88888888      888   888  888 888  888  888 88888888 888                     #"<<endl;
        cout<<"#                              888        Y88b 888  d88P     d88P    888 Y8b.          Y88b. Y88..88P Y88b 888 d88P Y8b.     888                     #"<<endl;
        cout<<"#                              888         "" Y88888 88888888 88888888 888  ""Y8888        "   " Y888 ""  Y88P""   "" Y8888888P""   ""  Y8888   888                     #"<<endl;
        cout<<"#                                                                                                                                                    #"<<endl;
        cout<<"######################################################################################################################################################"<<endl;
        cout<<""<<endl;
        cout<<""<<endl;
        cout<<"Nuova partita <--          Impostazioni"<<endl;
        cout<<""<<endl;
        cout<<"Continua partita           Esci"<<endl;
        while (sel)
        {
            switch((c=_getch()))
            {
            case KEY_UP:
                if (scelta==3 || scelta==4)
                {
                    scelta=scelta-2;
                    refresh=true;
                }
                break;
            case KEY_DOWN:
                if (scelta==1 || scelta==2)
                {
                    scelta=scelta+2;
                    refresh=true;
                }
                break;
            case KEY_RIGHT:
                if (scelta==1 || scelta==3)
                {
                    scelta++;
                    refresh=true;
                }
                break;
            case KEY_LEFT:
                if (scelta==2 || scelta==4)
                {
                    scelta--;
                    refresh=true;
                }
                break;
            case KEY_ENTER:
                sel=false;
                break;
            }
            if (refresh)
            {
                system("cls");
                if (scelta==1)
                {
                    cout<<"######################################################################################################################################################"<<endl;
                    cout<<"#                                                                                                                                                    #"<<endl;
                    cout<<"#                              8888888b.                             888               888                                                           #"<<endl;
                    cout<<"#                              888   Y88b                            888               888                                                           #"<<endl;
                    cout<<"#                              888    888                            888               888                                                           #"<<endl;
                    cout<<"#                              888   d88P 888  888 88888888 88888888 888  .d88b.       888888 .d88b.  888  888  888  .d88b.  888d888                 #"<<endl;
                    cout<<"#                              8888888P""   888  888    d88P     d88P  888 d8P  Y8b      888   d88""""  88b 888  888  888 d8P  Y8b 888P""                    #"<<endl;
                    cout<<"#                              888        888  888   d88P     d88P   888 88888888      888   888  888 888  888  888 88888888 888                     #"<<endl;
                    cout<<"#                              888        Y88b 888  d88P     d88P    888 Y8b.          Y88b. Y88..88P Y88b 888 d88P Y8b.     888                     #"<<endl;
                    cout<<"#                              888         "" Y88888 88888888 88888888 888  ""Y8888        "   " Y888 ""  Y88P""   "" Y8888888P""   ""  Y8888   888                     #"<<endl;
                    cout<<"#                                                                                                                                                    #"<<endl;
                    cout<<"######################################################################################################################################################"<<endl;
                    cout<<""<<endl;
                    cout<<""<<endl;
                    cout<<"Nuova partita <--          Impostazioni"<<endl;
                    cout<<""<<endl;
                    cout<<"Continua partita           Esci"<<endl;
                }
                if (scelta==2)
                {
                    cout<<"######################################################################################################################################################"<<endl;
                    cout<<"#                                                                                                                                                    #"<<endl;
                    cout<<"#                              8888888b.                             888               888                                                           #"<<endl;
                    cout<<"#                              888   Y88b                            888               888                                                           #"<<endl;
                    cout<<"#                              888    888                            888               888                                                           #"<<endl;
                    cout<<"#                              888   d88P 888  888 88888888 88888888 888  .d88b.       888888 .d88b.  888  888  888  .d88b.  888d888                 #"<<endl;
                    cout<<"#                              8888888P""   888  888    d88P     d88P  888 d8P  Y8b      888   d88""""  88b 888  888  888 d8P  Y8b 888P""                    #"<<endl;
                    cout<<"#                              888        888  888   d88P     d88P   888 88888888      888   888  888 888  888  888 88888888 888                     #"<<endl;
                    cout<<"#                              888        Y88b 888  d88P     d88P    888 Y8b.          Y88b. Y88..88P Y88b 888 d88P Y8b.     888                     #"<<endl;
                    cout<<"#                              888         "" Y88888 88888888 88888888 888  ""Y8888        "   " Y888 ""  Y88P""   "" Y8888888P""   ""  Y8888   888                     #"<<endl;
                    cout<<"#                                                                                                                                                    #"<<endl;
                    cout<<"######################################################################################################################################################"<<endl;
                    cout<<""<<endl;
                    cout<<""<<endl;
                    cout<<"Nuova partita              Impostazioni <--"<<endl;
                    cout<<""<<endl;
                    cout<<"Continua partita           Esci"<<endl;
                }
                if (scelta==3)
                {
                    cout<<"######################################################################################################################################################"<<endl;
                    cout<<"#                                                                                                                                                    #"<<endl;
                    cout<<"#                              8888888b.                             888               888                                                           #"<<endl;
                    cout<<"#                              888   Y88b                            888               888                                                           #"<<endl;
                    cout<<"#                              888    888                            888               888                                                           #"<<endl;
                    cout<<"#                              888   d88P 888  888 88888888 88888888 888  .d88b.       888888 .d88b.  888  888  888  .d88b.  888d888                 #"<<endl;
                    cout<<"#                              8888888P""   888  888    d88P     d88P  888 d8P  Y8b      888   d88""""  88b 888  888  888 d8P  Y8b 888P""                    #"<<endl;
                    cout<<"#                              888        888  888   d88P     d88P   888 88888888      888   888  888 888  888  888 88888888 888                     #"<<endl;
                    cout<<"#                              888        Y88b 888  d88P     d88P    888 Y8b.          Y88b. Y88..88P Y88b 888 d88P Y8b.     888                     #"<<endl;
                    cout<<"#                              888         "" Y88888 88888888 88888888 888  ""Y8888        "   " Y888 ""  Y88P""   "" Y8888888P""   ""  Y8888   888                     #"<<endl;
                    cout<<"#                                                                                                                                                    #"<<endl;
                    cout<<"######################################################################################################################################################"<<endl;
                    cout<<""<<endl;
                    cout<<""<<endl;
                    cout<<"Nuova partita              Impostazioni"<<endl;
                    cout<<""<<endl;
                    cout<<"Continua partita <---      Esci"<<endl;
                }
                if (scelta==4)
                {
                    cout<<"######################################################################################################################################################"<<endl;
                    cout<<"#                                                                                                                                                    #"<<endl;
                    cout<<"#                              8888888b.                             888               888                                                           #"<<endl;
                    cout<<"#                              888   Y88b                            888               888                                                           #"<<endl;
                    cout<<"#                              888    888                            888               888                                                           #"<<endl;
                    cout<<"#                              888   d88P 888  888 88888888 88888888 888  .d88b.       888888 .d88b.  888  888  888  .d88b.  888d888                 #"<<endl;
                    cout<<"#                              8888888P""   888  888    d88P     d88P  888 d8P  Y8b      888   d88""""  88b 888  888  888 d8P  Y8b 888P""                    #"<<endl;
                    cout<<"#                              888        888  888   d88P     d88P   888 88888888      888   888  888 888  888  888 88888888 888                     #"<<endl;
                    cout<<"#                              888        Y88b 888  d88P     d88P    888 Y8b.          Y88b. Y88..88P Y88b 888 d88P Y8b.     888                     #"<<endl;
                    cout<<"#                              888         "" Y88888 88888888 88888888 888  ""Y8888        "   " Y888 ""  Y88P""   "" Y8888888P""   ""  Y8888   888                     #"<<endl;
                    cout<<"#                                                                                                                                                    #"<<endl;
                    cout<<"######################################################################################################################################################"<<endl;
                    cout<<""<<endl;
                    cout<<""<<endl;
                    cout<<"Nuova partita              Impostazioni"<<endl;
                    cout<<""<<endl;
                    cout<<"Continua partita           Esci <---"<<endl;
                }
            }
        }
        if (scelta==4)
        {
            return 0;
        }
        if (scelta==1 || scelta==3)
        {
           if (scelta==1)
           {
               system("cls");
               cout<<"Scegli la difficoltà"<<endl;
               cout<<""<<endl;
               cout<<"Torre dei sogni <---"<<endl;
               cout<<""<<endl;
               cout<<"Torre infernale"<<endl;
               scelta=1;
               sel=true;
               refresh=false;
               while(sel)
               {
                   switch((c=_getch()))
                   {
                   case KEY_DOWN:
                    if (scelta != 2)
                    {
                        scelta++;
                        refresh=true;
                    }
                    break;
                   case KEY_UP:
                    if (scelta!=1)
                    {
                        scelta--;
                        refresh=true;
                    }
                    break;
                   case KEY_ENTER:
                    sel=false;
                   }
                   if (refresh)
                   {
                       if (scelta==1)
                       {
                           system("cls");
                           cout<<"Scegli la difficoltà"<<endl;
                           cout<<""<<endl;
                           cout<<"Torre dei sogni <---"<<endl;
                           cout<<""<<endl;
                           cout<<"Torre infernale"<<endl;
                       }
                       else
                       {
                           system("cls");
                           cout<<"Scegli la difficoltà"<<endl;
                           cout<<""<<endl;
                           cout<<"Torre dei sogni"<<endl;
                           cout<<""<<endl;
                           cout<<"Torre infernale <---"<<endl;
                       }
                   }

               }
            if (scelta==1)
            {
                int a=10;
                ofstream file;
                file.open ("filePath.txt");
                file << a;
                file.close();
                ifstream myfile ("filePath.txt");
                if (myfile.is_open())
                    {
                        while ( getline (myfile,line) )
                            {
                            }
                        myfile.close();
                    }
            }
            if (scelta==2)
            {
                int a=20;
                ofstream file;
                file.open ("filePath.txt");
                file << a;
                file.close();
                ifstream myfile ("filePath.txt");
                if (myfile.is_open())
                    {
                        while ( getline (myfile,line) )
                            {
                            }
                        myfile.close();
                    }
            }
           }
           if (scelta==3)
           {
                ifstream myfile ("filePath.txt");
                if (myfile.is_open())
                    {
                        while ( getline (myfile,line) )
                            {
                            }
                        myfile.close();
                    }
           }
           int i=0;
           system("cls");
           while (line=="10")
                {
                    if (i==0)
                    {
                        i++;
                        cout<<"Ti ritrovi in cima ad una torre, senza finestre ne' persone"<<endl;
                        cout<<"Sta a te cercare di scappare dalla torre"<<endl;
                        Sleep(4000);
                        cout<<"Se ci riesci"<<endl;
                        Sleep(2000);
                        system("cls");
                    }
                    if (map==1)
                    {
                        system("cls");
                        cout<<"Sono in una stanza illuminata da delle candele poste al muro"<<endl;
                        cout<<"C'e' la porta che conduce al piano inferiore e anche un letto all'angolo nella stanza"<<endl;
                        cout<<"cosa dovrei fare?"<<endl;
                        cout<<""<<endl;
                        cout<<""<<endl;
                        cout<<"Esamina <---"<<endl;
                        cout<<"Usa "<<endl;
                        cout<<"Spostati"<<endl;
                        sel=true;
                        scelta=1;
                        refresh=false;
                        while(sel)
                        {
                            switch((c=_getch()))
                            {
                            case KEY_DOWN:
                                if (scelta != 3)
                                {
                                    scelta++;
                                    refresh=true;
                                }
                                break;
                            case KEY_UP:
                                if (scelta != 1)
                                {
                                    scelta--;
                                    refresh=true;
                                }
                                break;
                            case KEY_ENTER:
                                sel=false;
                            }
                            if (refresh)
                            {
                                if (scelta==1)
                                {
                                    system("cls");
                                    cout<<"Sono in una stanza illuminata da delle candele poste al muro"<<endl;
                                    cout<<"C'e' la porta che conduce al piano inferiore e anche un letto all'angolo nella stanza"<<endl;
                                    cout<<"cosa dovrei fare?"<<endl;
                                    cout<<""<<endl;
                                    cout<<""<<endl;
                                    cout<<"Esamina <---"<<endl;
                                    cout<<"Usa "<<endl;
                                    cout<<"Spostati"<<endl;
                                }
                                if (scelta==2)
                                {
                                    system("cls");
                                    cout<<"Sono in una stanza illuminata da delle candele poste al muro"<<endl;
                                    cout<<"C'e' la porta che conduce al piano inferiore e anche un letto all'angolo nella stanza"<<endl;
                                    cout<<"cosa dovrei fare?"<<endl;
                                    cout<<""<<endl;
                                    cout<<""<<endl;
                                    cout<<"Esamina "<<endl;
                                    cout<<"Usa <---"<<endl;
                                    cout<<"Spostati"<<endl;
                                }
                                if (scelta==3)
                                {
                                    system("cls");
                                    cout<<"Sono in una stanza illuminata da delle candele poste al muro"<<endl;
                                    cout<<"C'e' la porta che conduce al piano inferiore e anche un letto all'angolo nella stanza"<<endl;
                                    cout<<"cosa dovrei fare?"<<endl;
                                    cout<<""<<endl;
                                    cout<<""<<endl;
                                    cout<<"Esamina "<<endl;
                                    cout<<"Usa"<<endl;
                                    cout<<"Spostati <---"<<endl;
                                }
                            }
                        }
                        if (scelta==1)
                        {
                            system("cls");
                            cout<<"Ho controllato sotto il letto sperando ci fosse una cosa che mi potesse aiutare ad uscire"<<endl;
                            Sleep(2000);
                            cout<<"Ed effettivamente qua sotto c'e' un pulsante rosso, lo premo?"<<endl;
                            cout<<""<<endl;
                            cout<<"Non c'e' nient'altro che posso fare quindi tanto vale premerlo <---"<<endl;
                            cout<<"Non lo premero' per ora, ne devo sapere di piu'"<<endl;
                            sel=true;
                            refresh=false;
                            scelta1=1;
                            while (sel)
                            {
                                switch((c=_getch()))
                                {
                                    case KEY_UP:
                                        if (scelta1==2)
                                        {
                                            scelta1--;
                                            refresh=true;
                                        }
                                    break;
                                    case KEY_DOWN:
                                        if (scelta1 == 1)
                                        {
                                            scelta1++;
                                            refresh=true;
                                        }
                                    break;
                                    case KEY_ENTER:
                                        sel=false;
                                }
                                if (refresh)
                                    {
                                        if (scelta1==1)
                                            {
                                                system("cls");
                                                cout<<"Ho controllato sotto il letto sperando ci fosse una cosa che mi potesse aiutare ad uscire"<<endl;
                                                cout<<"Ed effettivamente qua sotto c'e' un pulsante rosso, lo premo?"<<endl;
                                                cout<<""<<endl;
                                                cout<<"Non c'e' nient'altro che posso fare quindi tanto vale premerlo <---"<<endl;
                                                cout<<"Non lo premero' per ora, ne devo sapere di piu'"<<endl;
                                            }
                                        if (scelta1==2)
                                            {
                                                system("cls");
                                                cout<<"Ho controllato sotto il letto sperando ci fosse una cosa che mi potesse aiutare ad uscire"<<endl;
                                                cout<<"Ed effettivamente qua sotto c'e' un pulsante rosso, lo premo?"<<endl;
                                                cout<<""<<endl;
                                                cout<<"Non c'e' nient'altro che posso fare quindi tanto vale premerlo"<<endl;
                                                cout<<"Non lo premero' per ora, ne devo sapere di piu' <---"<<endl;
                                            }
                                    }
                            }
                            if (scelta1==1)
                            {
                                Beep(700, 500);
                                if (bottone2)
                                {
                                    system("cls");
                                    bottone3=true;
                                    cout<<"Sento un rumore provenire da un'altra stanza, e' sicuramente successo qualcosa"<<endl;
                                    Sleep(4000);
                                }
                                else
                                {
                                    system("cls");
                                    Beep(700, 500);
                                    Sleep(1000);
                                    cout<<"Non e' successo niente..."<<endl;
                                    Sleep(3000);
                                }
                            }
                            if (scelta1==2)
                            {
                                system("cls");
                                cout<<"Forse e' meglio lasciare questo bottone in pace finche' non sapro' di preciso cosa fare"<<endl;
                                Sleep(4000);
                            }
                        }
                        if (scelta==2)
                        {
                            if (key)
                            {
                                system("cls");
                               cout<<"Ho aperto la porta che conduce al piano inferiore finalmente"<<endl;
                               Sleep(1000);
                               cout<<"Chissa' cosa mi aspettera' oltre quella porta..."<<endl;
                               Sleep(3000);
                               system("cls");
                               cout<<"         Vuoi salvare?"<<endl;
                               cout<<""<<endl;
                               cout<<"Salva <---            Non salvare"<<endl;
                               sel=true;
                               refresh=false;
                               scelta1=1;
                               while (sel)
                               {
                                   switch((c=_getch()))
                                   {
                                   case KEY_LEFT:
                                       if (scelta1==2)
                                       {
                                           scelta1--;
                                           refresh=true;
                                       }
                                   break;
                                   case KEY_RIGHT:
                                       if (scelta1==1)
                                       {
                                           scelta1++;
                                           refresh=true;
                                       }
                                   break;
                                   case KEY_ENTER:
                                       sel=false;
                                   break;
                                   }
                                   if (scelta1==1)
                                   {
                                       system("cls");
                                       cout<<"         Vuoi salvare?"<<endl;
                                       cout<<""<<endl;
                                       cout<<"Salva <---            Non salvare"<<endl;
                                   }
                                   if (scelta1==2)
                                   {
                                       system("cls");
                                       cout<<"         Vuoi salvare?"<<endl;
                                       cout<<""<<endl;
                                       cout<<"Salva                 Non salvare <---"<<endl;
                                   }
                               }
                               if (scelta1==1)
                               {
                                   int a=11;
                                   ofstream file;
                                   file.open ("filePath.txt");
                                   file << a;
                                   file.close();
                                   ifstream myfile ("filePath.txt");
                                   if (myfile.is_open())
                                        {
                                            while ( getline (myfile,line) )
                                                    {
                                                    }
                                            myfile.close();
                                        }
                               }
                           }
                           else
                               {
                                   system("cls");
                                   cout<<"Non ho nulla da usare..."<<endl;
                                   Sleep(4000);
                               }
                        }
                        if (scelta==3)
                        {
                            system("cls");
                            cout<<"In che stanza dovrei andare?"<<endl;
                            cout<<""<<endl;
                            cout<<"Stanza 2 <---"<<endl;
                            cout<<"Stanza 3"<<endl;
                            sel=true;
                            refresh=false;
                            scelta1=1;
                            while(sel)
                            {
                                switch((c=_getch()))
                                {
                                case KEY_UP:
                                    if (scelta1 != 1)
                                    {
                                        scelta1--;
                                        refresh=true;
                                    }
                                break;
                                case KEY_DOWN:
                                    if (scelta1 !=2)
                                    {
                                        scelta1++;
                                        refresh=true;
                                    }
                                break;
                                case KEY_ENTER:
                                    sel=false;
                                }
                                if (refresh)
                                {
                                    if (scelta1==1)
                                    {
                                        system("cls");
                                        cout<<"In che stanza dovrei andare?"<<endl;
                                        cout<<""<<endl;
                                        cout<<"Stanza 2 <---"<<endl;
                                        cout<<"Stanza 3"<<endl;
                                    }
                                    if (scelta1==2)
                                    {
                                        system("cls");
                                        cout<<"In che stanza dovrei andare?"<<endl;
                                        cout<<""<<endl;
                                        cout<<"Stanza 2"<<endl;
                                        cout<<"Stanza 3 <---"<<endl;
                                    }
                                }

                            }
                            if (scelta1==1)
                            {
                                map=2;
                            }
                            if (scelta1==2)
                            {
                                map=3;
                            }
                        }

                        }
                        if (map==2)
                        {
                            system("cls");
                            cout<<"Sono in una stanza buia, non si vede quasi nulla..."<<endl;
                            cout<<""<<endl;
                            cout<<"Cosa dovrei fare?"<<endl;
                            cout<<""<<endl;
                            cout<<"Esamina <---"<<endl;
                            cout<<"Usa"<<endl;
                            cout<<"Spostati"<<endl;
                            sel=true;
                            refresh=false;
                            scelta=1;
                            while(sel)
                            {
                                switch((c=_getch()))
                                {
                                    case KEY_UP:
                                        if (scelta != 1)
                                            {
                                                scelta--;
                                                refresh=true;
                                            }
                                    break;
                                    case KEY_DOWN:
                                        if (scelta != 3)
                                        {
                                            scelta++;
                                            refresh=true;
                                        }
                                    break;
                                    case KEY_ENTER:
                                        sel=false;
                                }
                                if (refresh)
                                {
                                    if (scelta==1)
                                    {
                                        system("cls");
                                        cout<<"Sono in una stanza buia, non si vede quasi nulla..."<<endl;
                                        cout<<""<<endl;
                                        cout<<"Cosa dovrei fare?"<<endl;
                                        cout<<""<<endl;
                                        cout<<"Esamina <---"<<endl;
                                        cout<<"Usa"<<endl;
                                        cout<<"Spostati"<<endl;
                                    }
                                    if (scelta==2)
                                    {
                                        system("cls");
                                        cout<<"Sono in una stanza buia, non si vede quasi nulla..."<<endl;
                                        cout<<""<<endl;
                                        cout<<"Cosa dovrei fare?"<<endl;
                                        cout<<""<<endl;
                                        cout<<"Esamina"<<endl;
                                        cout<<"Usa <---"<<endl;
                                        cout<<"Spostati"<<endl;
                                    }
                                    if (scelta==3)
                                    {
                                        system("cls");
                                        cout<<"Sono in una stanza buia, non si vede quasi nulla..."<<endl;
                                        cout<<""<<endl;
                                        cout<<"Cosa dovrei fare?"<<endl;
                                        cout<<""<<endl;
                                        cout<<"Esamina"<<endl;
                                        cout<<"Usa"<<endl;
                                        cout<<"Spostati <---"<<endl;
                                    }
                                }
                            }
                            if (scelta==1)
                            {
                                if (torcia)
                                {
                                    system("cls");
                                    cout<<"Grazie alla torcia, riesco a vedere unaa scritta su un muro che dice"<<endl;
                                    cout<<"'Giallo, Verde, Rosso'"<<endl;
                                    Sleep(5000);
                                    cout<<"Chissa' che vuol dire..."<<endl;
                                    Sleep(4000);
                                }
                                else
                                {
                                    system("cls");
                                    cout<<"Non riesco a vedere nulla..."<<endl;
                                    Sleep(4000);
                                }
                            }
                            if (scelta==2)
                            {
                                system("cls");
                                cout<<"L'unica cosa che posso usare in questo momento e' la mia testa e dovrebbe aiutarmi ad uscire da qui"<<endl;
                                Sleep(5000);
                            }
                            if (scelta==3)
                            {
                                system("cls");
                                cout<<"In che stanza dovrei andare?"<<endl;
                                cout<<""<<endl;
                                cout<<"Stanza 1 <---"<<endl;
                                cout<<"Stanza 4"<<endl;
                                sel=true;
                                refresh=false;
                                scelta1=1;
                                while(sel)
                                {
                                    switch((c=_getch()))
                                    {
                                    case KEY_UP:
                                        if(scelta1 != 1)
                                        {
                                            scelta1--;
                                            refresh=true;
                                        }
                                    break;
                                    case KEY_DOWN:
                                        if (scelta1 != 2)
                                        {
                                            scelta1++;
                                            refresh=true;
                                        }
                                    break;
                                    case KEY_ENTER:
                                        sel=false;
                                    }
                                    if (refresh)
                                    {
                                        if (scelta1==1)
                                        {
                                            system("cls");
                                            cout<<"In che stanza dovrei andare?"<<endl;
                                            cout<<""<<endl;
                                            cout<<"Stanza 1 <---"<<endl;
                                            cout<<"Stanza 4"<<endl;
                                        }
                                        if (scelta1==2)
                                        {
                                            system("cls");
                                            cout<<"In che stanza dovrei andare?"<<endl;
                                            cout<<""<<endl;
                                            cout<<"Stanza 1"<<endl;
                                            cout<<"Stanza 4 <---"<<endl;
                                        }

                                    }
                                }
                            if (scelta1==1)
                            {
                                map=1;
                            }
                            if (scelta1==2)
                            {
                                map=4;
                            }
                            }
                        }
                        if (map==3)
                        {
                            system("cls");
                            cout<<"Questa stanza e' piuttosto spoglia"<<endl;
                            cout<<"C'e' solo un tavolo ed una sedia"<<endl;
                            cout<<""<<endl;
                            cout<<"Cosa dovrei fare?"<<endl;
                            cout<<""<<endl;
                            cout<<"Esamina <---"<<endl;
                            cout<<"Usa"<<endl;
                            cout<<"Spostati"<<endl;
                            sel=true;
                            refresh=false;
                            scelta=1;
                            while(sel)
                            {
                                switch((c=_getch()))
                                {
                                    case KEY_UP:
                                        if (scelta != 1)
                                            {
                                                scelta--;
                                                refresh=true;
                                            }
                                    break;
                                    case KEY_DOWN:
                                        if (scelta != 3)
                                        {
                                            scelta++;
                                            refresh=true;
                                        }
                                    break;
                                    case KEY_ENTER:
                                        sel=false;
                                }
                                if (refresh)
                                {
                                    if (scelta==1)
                                    {
                                        system("cls");
                                        cout<<"Questa stanza e' piuttosto spoglia"<<endl;
                                        cout<<"C'e' solo un tavolo ed una sedia"<<endl;
                                        cout<<""<<endl;
                                        cout<<"Cosa dovrei fare?"<<endl;
                                        cout<<""<<endl;
                                        cout<<"Esamina <---"<<endl;
                                        cout<<"Usa"<<endl;
                                        cout<<"Spostati"<<endl;
                                    }
                                    if (scelta==2)
                                    {
                                        system("cls");
                                        cout<<"Questa stanza e' piuttosto spoglia"<<endl;
                                        cout<<"C'e' solo un tavolo ed una sedia"<<endl;
                                        cout<<""<<endl;
                                        cout<<"Cosa dovrei fare?"<<endl;
                                        cout<<""<<endl;
                                        cout<<"Esamina"<<endl;
                                        cout<<"Usa <---"<<endl;
                                        cout<<"Spostati"<<endl;
                                    }
                                    if (scelta==3)
                                    {
                                        system("cls");
                                        cout<<"Questa stanza e' piuttosto spoglia"<<endl;
                                        cout<<"C'e' solo un tavolo ed una sedia"<<endl;
                                        cout<<""<<endl;
                                        cout<<"Cosa dovrei fare?"<<endl;
                                        cout<<""<<endl;
                                        cout<<"Esamina"<<endl;
                                        cout<<"Usa"<<endl;
                                        cout<<"Spostati <---"<<endl;
                                    }
                            }

                        }
                        if (scelta==1)
                        {
                            if (!torcia && trc==0)
                            {
                                system("cls");
                                cout<<"Sul tavolo sono presenti un bottone verde e una torcia"<<endl;
                                cout<<"Cosa dovrei fare?"<<endl;
                                cout<<""<<endl;
                                cout<<"Premi il bottone <---"<<endl;
                                cout<<"Prendi la torcia"<<endl;
                                cout<<"Meglio non toccare nulla"<<endl;
                                sel=true;
                                refresh=false;
                                scelta1=1;
                                while(sel)
                                {
                                    switch((c=_getch()))
                                    {
                                    case KEY_UP:
                                        if (scelta1 !=1)
                                        {
                                            scelta1--;
                                            refresh=true;
                                        }
                                    break;
                                    case KEY_DOWN:
                                        if (scelta1 != 3)
                                        {
                                            scelta1++;
                                            refresh=true;
                                        }
                                    break;
                                    case KEY_ENTER:
                                        sel=false;
                                    }
                                    if (refresh)
                                    {
                                        if (scelta1==1)
                                        {
                                            system("cls");
                                            cout<<"Sul tavolo sono presenti un bottone verde e una torcia"<<endl;
                                            cout<<"Cosa dovrei fare?"<<endl;
                                            cout<<""<<endl;
                                            cout<<"Premi il bottone <---"<<endl;
                                            cout<<"Prendi la torcia"<<endl;
                                            cout<<"Meglio non toccare nulla"<<endl;
                                        }
                                        if (scelta1==2)
                                        {
                                            system("cls");
                                            cout<<"Sul tavolo sono presenti un bottone verde e una torcia"<<endl;
                                            cout<<"Cosa dovrei fare?"<<endl;
                                            cout<<""<<endl;
                                            cout<<"Premi il bottone"<<endl;
                                            cout<<"Prendi la torcia <---"<<endl;
                                            cout<<"Meglio non toccare nulla"<<endl;
                                        }
                                        if (scelta1==3)
                                        {
                                            system("cls");
                                            cout<<"Sul tavolo sono presenti un bottone verde e una torcia"<<endl;
                                            cout<<"Cosa dovrei fare?"<<endl;
                                            cout<<""<<endl;
                                            cout<<"Premi il bottone"<<endl;
                                            cout<<"Prendi la torcia"<<endl;
                                            cout<<"Meglio non toccare nulla <---"<<endl;
                                        }
                                    }
                                }
                                if (scelta1==1)
                                {
                                    Beep(700, 500);
                                    if (bottone1)
                                    {
                                        system("cls");
                                        bottone2=true;
                                        cout<<"Sono sulla strada giusta, me lo sento!"<<endl;
                                        Sleep(3000);
                                    }
                                    else
                                    {
                                        system("cls");
                                        cout<<"Non e' successo nulla..."<<endl;
                                        Sleep(3000);
                                    }
                                }
                                if (scelta1==2)
                                {
                                    system("cls");
                                    cout<<"Non significa rubare se non c'e' nessuno no?"<<endl;
                                    cout<<"*Torcia ottenuta*"<<endl;
                                    Beep(700, 250);
                                    Beep(800, 250);
                                    Beep(900, 500);
                                    torcia=true;
                                    trc++;
                                    Sleep(4000);
                                }
                                if (scelta1==3)
                                    {
                                        system("cls");
                                        cout<<"Meglio non fare niente, senno' il padrone di casa potrebbe arrabbiarsi"<<endl;
                                        Sleep(4000);
                                    }
                            }
                            else
                            {
                                system("cls");
                                cout<<"Ho gia' *preso in prestito* la torcia, qui c'e' solo un bottone verde"<<endl;
                                cout<<"Che faccio, lo premo?"<<endl;
                                cout<<""<<endl;
                                cout<<"Tanto vale premerlo <---"<<endl;
                                cout<<"E se si rompesse?"<<endl;
                                sel=true;
                                refresh=false;
                                scelta1=1;
                                while(sel)
                                {
                                    switch((c=_getch()))
                                    {
                                    case KEY_UP:
                                        if (scelta1==2)
                                        {
                                            scelta1--;
                                            refresh=true;
                                        }
                                    break;
                                    case KEY_DOWN:
                                        if (scelta1==1)
                                        {
                                            scelta1++;
                                            refresh=true;
                                        }
                                    break;
                                    case KEY_ENTER:
                                        sel=false;
                                    }
                                    if (refresh)
                                    {
                                        if (scelta1==1)
                                        {
                                            system("cls");
                                            cout<<"Ho gia' *preso in prestito* la torcia, qui c'e' solo un bottone verde"<<endl;
                                            cout<<"Che faccio, lo premo?"<<endl;
                                            cout<<""<<endl;
                                            cout<<"Tanto vale premerlo <---"<<endl;
                                            cout<<"E se si rompesse?"<<endl;
                                        }
                                        if (scelta1==2)
                                        {
                                            system("cls");
                                            cout<<"Ho gia' *preso in prestito* la torcia, qui c'e' solo un bottone verde"<<endl;
                                            cout<<"Che faccio, lo premo?"<<endl;
                                            cout<<""<<endl;
                                            cout<<"Tanto vale premerlo"<<endl;
                                            cout<<"E se si rompesse? <---"<<endl;
                                        }
                                    }
                                }
                            if (scelta1==1)
                            {
                                Beep(700, 500);
                                if (bottone1)
                                {
                                    system("cls");
                                    bottone2=true;
                                    cout<<"Sono sulla strada giusta me lo sento!"<<endl;
                                }
                            }
                            if (scelta1==2)
                            {
                                system("cls");
                                cout<<"Capita spesso che un bottone si rompa dopo l'uso, meglio non tentare la fortuna"<<endl;
                                Sleep(5000);
                            }
                            }
                        }
                        if (scelta==2)
                        {
                            system("cls");
                            cout<<"L'unica cosa che posso usare in questo momento e' la mia testa e dovrei usarla per cercare di uscire da qui"<<endl;
                            Sleep(4000);
                        }
                        if (scelta==3)
                        {
                            system("cls");
                            cout<<"In che stanza dovrei andare?"<<endl;
                            cout<<""<<endl;
                            cout<<"Stanza 1 <---"<<endl;
                            cout<<"Stanza 4"<<endl;
                            sel=true;
                            refresh=false;
                            scelta1=1;
                            while(sel)
                            {
                                switch((c=_getch()))
                                {
                                case KEY_UP:
                                    if(scelta1 != 1)
                                    {
                                        scelta1--;
                                        refresh=true;
                                    }
                                break;
                                case KEY_DOWN:
                                    if (scelta1 != 2)
                                    {
                                        scelta1++;
                                        refresh=true;
                                    }
                                break;
                                case KEY_ENTER:
                                    sel=false;
                                }
                                if (refresh)
                                {
                                    if (scelta1==1)
                                    {
                                        system("cls");
                                        cout<<"In che stanza dovrei andare?"<<endl;
                                        cout<<""<<endl;
                                        cout<<"Stanza 1 <---"<<endl;
                                        cout<<"Stanza 4"<<endl;
                                    }
                                    if (scelta1==2)
                                    {
                                        system("cls");
                                        cout<<"In che stanza dovrei andare?"<<endl;
                                        cout<<""<<endl;
                                        cout<<"Stanza 1"<<endl;
                                        cout<<"Stanza 4 <---"<<endl;
                                    }
                                }
                            }
                        if (scelta1==1)
                        {
                            map=1;
                        }
                        if (scelta1==2)
                        {
                            map=4;
                        }
                        }
                    }
                    if (map==4)
                    {
                        if (bottone1 && bottone2 && bottone3)
                        {
                            if (!key)
                            {
                                system("cls");
                                cout<<"La statua ha lasciato andare la chiave, meglio prenderla e tornare subito alla prima stanza"<<endl;
                                cout<<""<<endl;
                                cout<<""<<endl;
                                cout<<"############################################################"<<endl;
                                cout<<"#                                                          #"<<endl;
                                cout<<"#    ************                                          #"<<endl;
                                cout<<"#    *           *                                         #"<<endl;
                                cout<<"#    *           ***********************************       #"<<endl;
                                cout<<"#    *           *                  *              *       #"<<endl;
                                cout<<"#    ************                   *              *       #"<<endl;
                                cout<<"#                                   *              *       #"<<endl;
                                cout<<"#                                                          #"<<endl;
                                cout<<"############################################################"<<endl;
                                key=true;
                                Sleep(4000);
                                map=1;
                            }
                            else
                            {
                                system("cls");
                                cout<<"C'e' solo una statua con nessuna chiave in mano, a differenza mia, meglio tornare alla prima stanza"<<endl;
                                Sleep(4000);
                                map=1;
                            }
                        }
                        else
                        {
                            system("cls");
                        cout<<"C'e' una statua che tiene in mano una chiave, pero' la statua ha una presa troppo forte per prendere la chiave"<<endl;
                        cout<<"Cosa faccio?"<<endl;
                        cout<<""<<endl;
                        cout<<"Esamina <---"<<endl;
                        cout<<"Usa"<<endl;
                        cout<<"Spostati"<<endl;
                        sel=true;
                        refresh=false;
                        scelta=1;
                        while(sel)
                        {
                            switch((c=_getch()))
                            {
                            case KEY_UP:
                                if (scelta !=1)
                                {
                                    scelta--;
                                    refresh=true;
                                }
                            break;
                            case KEY_DOWN:
                                if (scelta != 3)
                                {
                                    scelta++;
                                    refresh=true;
                                }
                            break;
                            case KEY_ENTER:
                                sel=false;
                            }
                            if (refresh)
                            {
                                if (scelta==1)
                                {
                                    system("cls");
                                    cout<<"C'e' una statua che tiene in mano una chiave, pero' la statua ha una presa troppo forte per prendere la chiave"<<endl;
                                    cout<<"Cosa faccio?"<<endl;
                                    cout<<""<<endl;
                                    cout<<"Esamina <---"<<endl;
                                    cout<<"Usa"<<endl;
                                    cout<<"Spostati"<<endl;
                                }
                                if (scelta==2)
                                {
                                    system("cls");
                                    cout<<"C'e' una statua che tiene in mano una chiave, pero' la statua ha una presa troppo forte per prendere la chiave"<<endl;
                                    cout<<"Cosa faccio?"<<endl;
                                    cout<<""<<endl;
                                    cout<<"Esamina"<<endl;
                                    cout<<"Usa <---"<<endl;
                                    cout<<"Spostati"<<endl;
                                }
                                if (scelta==3)
                                {
                                    system("cls");
                                    cout<<"C'e' una statua che tiene in mano una chiave, pero' la statua ha una presa troppo forte per prendere la chiave"<<endl;
                                    cout<<"Cosa faccio?"<<endl;
                                    cout<<""<<endl;
                                    cout<<"Esamina"<<endl;
                                    cout<<"Usa"<<endl;
                                    cout<<"Spostati <---"<<endl;
                                }
                            }
                        }
                        if (scelta==1)
                        {
                            system("cls");
                            cout<<"C'e' un bottone giallo alla base della statua"<<endl;
                            Sleep(1500);
                            cout<<"Di fianco c'e' scritto che questo pulsante funzionera' solo se sara' premuto di continuo"<<endl;
                            Sleep(1500);
                            cout<<"dovrei lasciarci qualcosa sopra..."<<endl;
                            Sleep(1500);
                            if (!torcia && trc==1)
                            {
                                system("cls");
                                cout<<"Ho gia' lasciato qui la torcia, ed e' ormai bloccata da uno strano meccanismo"<<endl;
                                Sleep(4000);
                                cout<<"Non credo sia recuperabile..."<<endl;
                                Sleep(3000);
                            }
                            if (torcia)
                            {
                                cout<<""<<endl;
                                cout<<"Chissa' se e' una buona idea lasciare qui la torcia?"<<endl;
                                cout<<""<<endl;
                                cout<<"Meglio lasciare qui la torcia <---"<<endl;
                                cout<<"C'e' ancora un posto buio che voglio esplorare"<<endl;
                                sel=true;
                                refresh=false;
                                scelta1=1;
                                while(sel)
                                {
                                    switch((c=_getch()))
                                    {
                                    case KEY_UP:
                                        if (scelta1==2)
                                        {
                                            scelta1--;
                                            refresh=true;
                                        }
                                    break;
                                    case KEY_DOWN:
                                        if (scelta1==1)
                                        {
                                            scelta1++;
                                            refresh=true;
                                        }
                                    break;
                                    case KEY_ENTER:
                                        sel=false;
                                    }
                                    if (refresh)
                                    {
                                        if (scelta1==1)
                                        {
                                            system("cls");
                                            cout<<"C'e' un bottone giallo alla base della statua"<<endl;
                                            cout<<"Di fianco c'e' scritto che questo pulsante funzionera' solo se sara' premuto di continuo"<<endl;
                                            cout<<"dovrei lasciarci qualcosa sopra..."<<endl;
                                            cout<<""<<endl;
                                            cout<<"Chissa' se e' una buona idea lasciare qui la torcia?"<<endl;
                                            cout<<""<<endl;
                                            cout<<"Meglio lasciare qui la torcia <---"<<endl;
                                            cout<<"C'e' ancora un posto buio che voglio esplorare"<<endl;
                                        }
                                        if (scelta1==2)
                                        {
                                            system("cls");
                                            cout<<"C'e' un bottone giallo alla base della statua"<<endl;
                                            cout<<"Di fianco c'e' scritto che questo pulsante funzionera' solo se sara' premuto di continuo"<<endl;
                                            cout<<"dovrei lasciarci qualcosa sopra..."<<endl;
                                            cout<<""<<endl;
                                            cout<<"Chissa' se e' una buona idea lasciare qui la torcia?"<<endl;
                                            cout<<""<<endl;
                                            cout<<"Meglio lasciare qui la torcia"<<endl;
                                            cout<<"C'e' ancora un posto buio che voglio esplorare <---"<<endl;
                                        }
                                    }
                                }
                                if (scelta1==1)
                                {
                                    system("cls");
                                    cout<<"*Torcia piazzata*"<<endl;
                                    torcia=false;
                                    Beep(700, 500);
                                    Sleep(2000);
                                    bottone1=true;
                                    system("cls");
                                    cout<<"Perfetto, ora cosa dovrei fare?"<<endl;
                                    Sleep(3000);
                                }
                                if (scelta1==2)
                                {
                                    system("cls");
                                    cout<<"Gia' devo ancora esplorare *quella* stanza"<<endl;
                                    Sleep(4000);
                                }
                            }
                            if (torcia && trc==0)
                            {
                                cout<<"Beh non credo di avere nulla al momento..."<<endl;
                                Sleep(4000);
                            }
                        }
                        if (scelta==2)
                        {
                            system("cls");
                            cout<<"L'unica cosa che posso usare al momento e' la mia testa, e dovrebbe aiutarmi ad uscire da qui"<<endl;
                            Sleep(4000);
                        }
                        if (scelta==3)
                        {
                            system("cls");
                            cout<<"In che stanza dovrei andare?"<<endl;
                            cout<<""<<endl;
                            cout<<"Stanza 2 <---"<<endl;
                            cout<<"Stanza 3"<<endl;
                            sel=true;
                            refresh=false;
                            scelta1=1;
                            while(sel)
                            {
                                switch((c=_getch()))
                                {
                                case KEY_UP:
                                    if(scelta1 != 1)
                                    {
                                        scelta1--;
                                        refresh=true;
                                    }
                                break;
                                case KEY_DOWN:
                                    if (scelta1 != 2)
                                    {
                                        scelta1++;
                                        refresh=true;
                                    }
                                break;
                                case KEY_ENTER:
                                    sel=false;
                                }
                                if (refresh)
                                {
                                    if (scelta1==1)
                                    {
                                        system("cls");
                                        cout<<"In che stanza dovrei andare?"<<endl;
                                        cout<<""<<endl;
                                        cout<<"Stanza 2 <---"<<endl;
                                        cout<<"Stanza 3"<<endl;
                                    }
                                    if (scelta1==2)
                                    {
                                        system("cls");
                                        cout<<"In che stanza dovrei andare?"<<endl;
                                        cout<<""<<endl;
                                        cout<<"Stanza 2"<<endl;
                                        cout<<"Stanza 3 <---"<<endl;
                                    }
                                }
                            }
                        if (scelta1==1)
                        {
                            map=2;
                        }
                        if (scelta1==2)
                        {
                            map=3;
                        }

                        }
                        }

                    }
                }
            i=0;
            key=false;
           while(line=="11")
           {
               if (map==1)
               {
                   if (i==0)
                   {
                       i++;
                       system("cls");
                       cout<<"Appena oltrepassata la porta che permetteva l'accesso al piano, essa si e' richiusa"<<endl;
                       Sleep(2000);
                       cout<<"A quanto pare non posso tornare indietro"<<endl;
                       Sleep(4000);
                   }
                   system("cls");
                   if (sedia==2)
                    {
                        cout<<"Due sedie polverose ed un tavolo nelle stesse condizioni delle sedie"<<endl;
                    }
                    if (sedia==1)
                    {
                        cout<<"Una sola sedia e un tavolo, entrambi piuttosto polverosi"<<endl;
                    }
                    if (sedia==0)
                    {
                        cout<<"Un solo polveroso tavolo solitario che aspetta un compagno che possa fargli compagnia"<<endl;
                    }
                   cout<<"Cosa dovrei fare?"<<endl;
                   cout<<""<<endl;
                   cout<<"Esamina <---"<<endl;
                   cout<<"Usa"<<endl;
                   cout<<"Spostati"<<endl;
                   sel=true;
                   refresh=false;
                   scelta=1;
                   while(sel)
                   {
                       switch((c=_getch()))
                       {
                        case KEY_UP:
                            if (scelta != 1)
                            {
                                scelta--;
                                refresh=true;
                            }
                        break;
                        case KEY_DOWN:
                            if (scelta != 3)
                            {
                                scelta++;
                                refresh=true;
                            }
                        break;
                        case KEY_ENTER:
                            sel=false;
                       }
                       if (refresh)
                       {
                           if (scelta==1)
                           {
                               system("cls");
                               if (sedia==2)
                               {
                                   cout<<"Due sedie polverose ed un tavolo nelle stesse condizioni delle sedie"<<endl;
                               }
                               if (sedia==1)
                               {
                                   cout<<"Una sola sedia e un tavolo, entrambi piuttosto polverosi"<<endl;
                               }
                               if (sedia==0)
                               {
                                   cout<<"Un solo polveroso tavolo solitario che aspetta un compagno che possa fargli compagnia"<<endl;
                               }
                               cout<<"Cosa dovrei fare?"<<endl;
                               cout<<""<<endl;
                               cout<<"Esamina <---"<<endl;
                               cout<<"Usa"<<endl;
                               cout<<"Spostati"<<endl;
                           }
                           if (scelta==2)
                           {
                               system("cls");
                               if (sedia==2)
                               {
                                   cout<<"Due sedie polverose ed un tavolo nelle stesse condizioni delle sedie"<<endl;
                               }
                               if (sedia==1)
                               {
                                   cout<<"Una sola sedia e un tavolo, entrambi piuttosto polverosi"<<endl;
                               }
                               if (sedia==0)
                               {
                                   cout<<"Un solo polveroso tavolo solitario che aspetta un compagno che possa fargli compagnia"<<endl;
                               }
                               cout<<"Cosa dovrei fare?"<<endl;
                               cout<<""<<endl;
                               cout<<"Esamina"<<endl;
                               cout<<"Usa <---"<<endl;
                               cout<<"Spostati"<<endl;
                           }
                           if (scelta==3)
                           {
                               system("cls");
                               if (sedia==2)
                               {
                                   cout<<"Due sedie polverose ed un tavolo nelle stesse condizioni delle sedie"<<endl;
                               }
                               if (sedia==1)
                               {
                                   cout<<"Una sola sedia e un tavolo, entrambi piuttosto polverosi"<<endl;
                               }
                               if (sedia==0)
                               {
                                   cout<<"Un solo polveroso tavolo solitario che aspetta un compagno che possa fargli compagnia"<<endl;
                               }
                               cout<<"Cosa dovrei fare?"<<endl;
                               cout<<""<<endl;
                               cout<<"Esamina"<<endl;
                               cout<<"Usa"<<endl;
                               cout<<"Spostati <---"<<endl;
                           }
                       }
                   }
                   if (scelta==1)
                   {
                       system("cls");
                        if (map52==true)
                        {
                            cout<<"Se questa stanza e la stanza 3 devono essere uguali dovrei portare qualcosa nell'altra stanza..."<<endl;
                            Sleep(3000);
                            cout<<"Ma cosa esattamente?"<<endl;
                            if (sedia>= 1)
                            {
                                cout<<""<<endl;
                                cout<<"Forse una sedia <---"<<endl;
                                cout<<"Non saprei"<<endl;
                                sel=true;
                                refresh=false;
                                scelta1=1;
                                while(sel)
                                {
                                    switch((c=_getch()))
                                    {
                                    case KEY_UP:
                                        if (scelta1==2)
                                        {
                                            scelta1--;
                                            refresh=true;
                                        }
                                    break;
                                    case KEY_DOWN:
                                        if (scelta1==1)
                                        {
                                            scelta1++;
                                            refresh=true;
                                        }
                                    break;
                                    case KEY_ENTER:
                                        sel=false;
                                    }
                                    if (refresh)
                                    {
                                        if (scelta1==1)
                                        {
                                            system("cls");
                                            cout<<"Se questa stanza e la stanza 3 devono essere uguali dovrei portare qualcosa nell'altra stanza..."<<endl;
                                            cout<<"Ma cosa esattamente?"<<endl;
                                            cout<<""<<endl;
                                            cout<<"Forse una sedia <---"<<endl;
                                            cout<<"Non saprei"<<endl;
                                        }
                                        if (scelta1==2)
                                        {
                                            system("cls");
                                            cout<<"Se questa stanza e la stanza 3 devono essere uguali dovrei portare qualcosa nell'altra stanza..."<<endl;
                                            cout<<"Ma cosa esattamente?"<<endl;
                                            cout<<""<<endl;
                                            cout<<"Forse una sedia"<<endl;
                                            cout<<"Non saprei <---"<<endl;
                                        }
                                    }
                                }
                            if (scelta1==1)
                            {
                                system("cls");
                                cout<<"Meglio portare questa sedia nella stanza 3"<<endl;
                                sedia--;
                                sedia1++;
                                map=3;
                                Sleep(3000);
                            }
                            if (scelta1==2)
                            {
                                system("cls");
                                cout<<"Non sono ancora sicuro di cio' che devo fare, fino ad allora meglio non toccare nulla"<<endl;
                            }
                            }
                        }
                        else
                        {
                            system("cls");
                            cout<<"Non c'e' niente di speciale in questa stanza"<<endl;
                            Sleep(3000);
                        }
                   }
                   if (scelta==2)
                   {
                       if (key)
                       {
                           system("cls");
                           cout<<"Fine della demo"<<endl;
                           Sleep(3000);
                           return 0;
                       }
                       else
                       {
                           system("cls");
                           cout<<"La chiave che ha aperto la prima porta non sembra capace di aprire anche questa, ci stavo sperando"<<endl;
                           Sleep(4000);
                       }
                   }
                   if (scelta==3)
                   {
                        system("cls");
                        cout<<"In che stanza dovrei andare?"<<endl;
                        cout<<""<<endl;
                        cout<<"Stanza 2 <---"<<endl;
                        cout<<"Stanza 3"<<endl;
                        sel=true;
                        refresh=false;
                        scelta1=1;
                        while(sel)
                        {
                            switch((c=_getch()))
                            {
                            case KEY_UP:
                                if (scelta1 != 1)
                                {
                                    scelta1--;
                                    refresh=true;
                                }
                            break;
                            case KEY_DOWN:
                                if (scelta1 !=2)
                                {
                                    scelta1++;
                                    refresh=true;
                                }
                            break;
                            case KEY_ENTER:
                                sel=false;
                            }
                            if (refresh)
                            {
                                if (scelta1==1)
                                {
                                    system("cls");
                                    cout<<"In che stanza dovrei andare?"<<endl;
                                    cout<<""<<endl;
                                    cout<<"Stanza 2 <---"<<endl;
                                    cout<<"Stanza 3"<<endl;
                                }
                                if (scelta1==2)
                                {
                                    system("cls");
                                    cout<<"In che stanza dovrei andare?"<<endl;
                                    cout<<""<<endl;
                                    cout<<"Stanza 2"<<endl;
                                    cout<<"Stanza 3 <---"<<endl;
                                }
                            }
                            }
                            if (scelta1==1)
                            {
                                map=2;
                            }
                            if (scelta1==2)
                            {
                                map=3;
                            }
                   }
               }
               if (map==3)
               {
                   system("cls");
                   if (sedia1==2)
                    {
                        cout<<"Due sedie polverose ed un tavolo nelle stesse condizioni delle sedie"<<endl;
                    }
                    if (sedia1==1)
                    {
                        cout<<"Una sola sedia e un tavolo, entrambi piuttosto polverosi"<<endl;
                    }
                    if (sedia1==0)
                    {
                        cout<<"Un solo polveroso tavolo solitario che aspetta un compagno che possa fargli compagnia"<<endl;
                    }
                   cout<<"Cosa dovrei fare?"<<endl;
                   cout<<""<<endl;
                   cout<<"Esamina <---"<<endl;
                   cout<<"Usa"<<endl;
                   cout<<"Spostati"<<endl;
                   sel=true;
                   refresh=false;
                   scelta=1;
                   while(sel)
                   {
                       switch((c=_getch()))
                       {
                        case KEY_UP:
                            if (scelta != 1)
                            {
                                scelta--;
                                refresh=true;
                            }
                        break;
                        case KEY_DOWN:
                            if (scelta != 3)
                            {
                                scelta++;
                                refresh=true;
                            }
                        break;
                        case KEY_ENTER:
                            sel=false;
                       }
                       if (refresh)
                       {
                           if (scelta==1)
                           {
                               system("cls");
                               if (sedia1==2)
                               {
                                   cout<<"Due sedie polverose ed un tavolo nelle stesse condizioni delle sedie"<<endl;
                               }
                               if (sedia1==1)
                               {
                                   cout<<"Una sola sedia e un tavolo, entrambi piuttosto polverosi"<<endl;
                               }
                               if (sedia1==0)
                               {
                                   cout<<"Un solo polveroso tavolo solitario che aspetta un compagno che possa fargli compagnia"<<endl;
                               }
                               cout<<"Cosa dovrei fare?"<<endl;
                               cout<<""<<endl;
                               cout<<"Esamina <---"<<endl;
                               cout<<"Usa"<<endl;
                               cout<<"Spostati"<<endl;
                           }
                           if (scelta==2)
                           {
                               system("cls");
                               if (sedia1==2)
                               {
                                   cout<<"Due sedie polverose ed un tavolo nelle stesse condizioni delle sedie"<<endl;
                               }
                               if (sedia1==1)
                               {
                                   cout<<"Una sola sedia e un tavolo, entrambi piuttosto polverosi"<<endl;
                               }
                               if (sedia1==0)
                               {
                                   cout<<"Un solo polveroso tavolo solitario che aspetta un compagno che possa fargli compagnia"<<endl;
                               }
                               cout<<"Cosa dovrei fare?"<<endl;
                               cout<<""<<endl;
                               cout<<"Esamina"<<endl;
                               cout<<"Usa <---"<<endl;
                               cout<<"Spostati"<<endl;
                           }
                           if (scelta==3)
                           {
                               system("cls");
                               if (sedia1==2)
                               {
                                   cout<<"Due sedie polverose ed un tavolo nelle stesse condizioni delle sedie"<<endl;
                               }
                               if (sedia1==1)
                               {
                                   cout<<"Una sola sedia e un tavolo, entrambi piuttosto polverosi"<<endl;
                               }
                               if (sedia1==0)
                               {
                                   cout<<"Un solo polveroso tavolo solitario che aspetta un compagno che possa fargli compagnia"<<endl;
                               }
                               cout<<"Cosa dovrei fare?"<<endl;
                               cout<<""<<endl;
                               cout<<"Esamina"<<endl;
                               cout<<"Usa"<<endl;
                               cout<<"Spostati <---"<<endl;
                           }
                       }
                   }
                   if (scelta==1)
                   {
                       system("cls");
                        if (map52==true)
                        {
                            cout<<"Se questa stanza e la stanza 1 devono essere uguali dovrei portare qualcosa nell'altra stanza..."<<endl;
                            Sleep(4000);
                            cout<<"Ma cosa esattamente?"<<endl;
                            Sleep(2000);
                            if (sedia1>= 1)
                            {
                                cout<<""<<endl;
                                cout<<"Forse una sedia <---"<<endl;
                                cout<<"Non saprei"<<endl;
                                sel=true;
                                refresh=false;
                                scelta1=1;
                                while(sel)
                                {
                                    switch((c=_getch()))
                                    {
                                    case KEY_UP:
                                        if (scelta1==2)
                                        {
                                            scelta1--;
                                            refresh=true;
                                        }
                                    break;
                                    case KEY_DOWN:
                                        if (scelta1==1)
                                        {
                                            scelta1++;
                                            refresh=true;
                                        }
                                    break;
                                    case KEY_ENTER:
                                        sel=false;
                                    }
                                    if (refresh)
                                    {
                                        if (scelta1==1)
                                        {
                                            system("cls");
                                            cout<<"Se questa stanza e la stanza 1 devono essere uguali dovrei portare qualcosa nell'altra stanza..."<<endl;
                                            cout<<"Ma cosa esattamente?"<<endl;
                                            cout<<""<<endl;
                                            cout<<"Forse una sedia <---"<<endl;
                                            cout<<"Non saprei"<<endl;
                                        }
                                        if (scelta1==2)
                                        {
                                            system("cls");
                                            cout<<"Se questa stanza e la stanza 1 devono essere uguali dovrei portare qualcosa nell'altra stanza..."<<endl;
                                            cout<<"Ma cosa esattamente?"<<endl;
                                            cout<<""<<endl;
                                            cout<<"Forse una sedia"<<endl;
                                            cout<<"Non saprei <---"<<endl;
                                        }
                                    }
                                }
                            if (scelta1==1)
                            {
                                system("cls");
                                cout<<"Meglio portare questa sedia nella stanza 1"<<endl;
                                sedia++;
                                sedia1--;
                                map=1;
                                Sleep(3000);
                            }
                            if (scelta1==2)
                            {
                                system("cls");
                                cout<<"Non sono ancora sicuro di cio' che devo fare, fino ad allora meglio non toccare nulla"<<endl;
                                Sleep(5000);
                            }
                            }
                        }
                   }
                   if (scelta==2)
                   {
                        system("cls");
                        cout<<"Non c'e' niente che possa usare se non la mia intelligenza per uscire da qui"<<endl;
                        Sleep(5000);
                   }
                   if (scelta==3)
                   {
                        system("cls");
                        cout<<"In che stanza dovrei andare?"<<endl;
                        cout<<""<<endl;
                        cout<<"Stanza 1 <---"<<endl;
                        cout<<"Stanza 4"<<endl;
                        sel=true;
                        refresh=false;
                        scelta1=1;
                        while(sel)
                        {
                            switch((c=_getch()))
                            {
                            case KEY_UP:
                                if (scelta1 != 1)
                                {
                                    scelta1--;
                                    refresh=true;
                                }
                            break;
                            case KEY_DOWN:
                                if (scelta1 !=2)
                                {
                                    scelta1++;
                                    refresh=true;
                                }
                            break;
                            case KEY_ENTER:
                                sel=false;
                            }
                            if (refresh)
                            {
                                if (scelta1==1)
                                {
                                    system("cls");
                                    cout<<"In che stanza dovrei andare?"<<endl;
                                    cout<<""<<endl;
                                    cout<<"Stanza 1 <---"<<endl;
                                    cout<<"Stanza 4"<<endl;
                                }
                                if (scelta1==2)
                                {
                                    system("cls");
                                    cout<<"In che stanza dovrei andare?"<<endl;
                                    cout<<""<<endl;
                                    cout<<"Stanza 1"<<endl;
                                    cout<<"Stanza 4 <---"<<endl;
                                }
                            }
                            }
                            if (scelta1==1)
                            {
                                map=1;
                            }
                            if (scelta1==2)
                            {
                                map=4;
                            }
                   }
               }
               if (map==2)
               {
                   system("cls");
                   cout<<"Ci sono diversi mobili, la polvere non manca mai"<<endl;
                   cout<<"Cosa dovrei fare?"<<endl;
                   cout<<""<<endl;
                   cout<<"Esamina <---"<<endl;
                   cout<<"Usa"<<endl;
                   cout<<"Spostati"<<endl;
                   sel=true;
                   refresh=false;
                   scelta=1;
                   while(sel)
                   {
                       switch((c=_getch()))
                       {
                       case KEY_UP:
                        if (scelta!= 1)
                        {
                            scelta--;
                            refresh=true;
                        }
                        break;
                       case KEY_DOWN:
                        if (scelta!=3)
                        {
                            scelta++;
                            refresh=true;
                        }
                        break;
                       case KEY_ENTER:
                        sel=false;
                       }
                       if (refresh)
                       {
                           system("cls");           //Ma se...   system("cls")X+system("cls")Y allora system("cls")(X+Y) sarà la stessa cosa no?
                           if (scelta==1)
                           {
                               cout<<"Ci sono diversi mobili, la polvere non manca mai"<<endl;
                               cout<<"Cosa dovrei fare?"<<endl;
                               cout<<""<<endl;
                               cout<<"Esamina <---"<<endl;
                               cout<<"Usa"<<endl;
                               cout<<"Spostati"<<endl;
                           }
                           if (scelta==2)
                           {
                               cout<<"Ci sono diversi mobili, la polvere non manca mai"<<endl;
                               cout<<"Cosa dovrei fare?"<<endl;
                               cout<<""<<endl;
                               cout<<"Esamina"<<endl;
                               cout<<"Usa <---"<<endl;
                               cout<<"Spostati"<<endl;
                           }
                           if (scelta==3)
                           {
                               cout<<"Ci sono diversi mobili, la polvere non manca mai"<<endl;
                               cout<<"Cosa dovrei fare?"<<endl;
                               cout<<""<<endl;
                               cout<<"Esamina"<<endl;
                               cout<<"Usa"<<endl;
                               cout<<"Spostati <---"<<endl;
                           }
                       }
                   }
                   if (scelta==1)
                   {
                       system("cls");
                       if (statua==1 && !accesso5)
                       {
                           cout<<"L'unica cosa interessante qui è una piccola statua di un'avventuriero"<<endl;
                           Sleep(5000);
                       }
                       if (statua==0)
                       {
                           cout<<"Ho gia'..."<<endl;
                           Sleep(3000);
                           cout<<"Sgraffignato suona male, diciamo che ho gia' preso in prestito cio' che potevo prendere ecco"<<endl;
                           Sleep(5000);
                       }
                       if (accesso5 && statua==1)
                       {
                           cout<<"L'unica cosa interessante qui è una piccola statua di un'avventuriero"<<endl;
                           cout<<"Dovrei prenderla?"<<endl;
                           cout<<""<<endl;
                           cout<<"Sarebbe un'ottimo souvenir <---"<<endl;
                           cout<<"Meglio non toccare nulla"<<endl;
                           sel=true;
                           refresh=false;
                           scelta1=1;
                           while(sel)
                           {
                               switch((c=_getch()))
                               {
                               case KEY_UP:
                                if (scelta1==2)
                                {
                                    scelta1--;
                                    refresh=true;          //Ora che ci penso a che serve refresh se è sempre true dopo una sola scelta?
                                }                          //Ma va beh chissene
                                break;
                               case KEY_DOWN:
                                if (scelta1==1)
                                {
                                    scelta1++;
                                    refresh=true;
                                }
                                break;
                               case KEY_ENTER:
                                sel=false;
                               }
                               if (refresh)
                               {
                                   system("cls");
                                   if (scelta1==1)
                                   {
                                       cout<<"L'unica cosa interessante qui è una piccola statua di un'avventuriero"<<endl;
                                       cout<<"Dovrei prenderla?"<<endl;
                                       cout<<""<<endl;
                                       cout<<"Sarebbe un'ottimo souvenir <---"<<endl;
                                       cout<<"Meglio non toccare nulla"<<endl;
                                   }
                                   if (scelta1==2)
                                   {
                                       cout<<"L'unica cosa interessante qui è una piccola statua di un'avventuriero"<<endl;
                                       cout<<"Dovrei prenderla?"<<endl;
                                       cout<<""<<endl;
                                       cout<<"Sarebbe un'ottimo souvenir"<<endl;
                                       cout<<"Meglio non toccare nulla <---"<<endl;
                                   }
                               }
                           }
                           system("cls");
                           if (scelta1==1)
                           {
                               Beep(700, 500);
                               Beep(800, 500);
                               Beep(950, 500);
                               cout<<"*Souvenir particolare ottenuto*"<<endl;
                               Sleep(3000);
                               statua--;
                           }
                           if (scelta1==2)
                           {
                               cout<<"Meglio non toccare nulla"<<endl;
                               Sleep(3000);
                           }
                       }
                   }
                   if (scelta==2)
                   {
                       cout<<"Se potessi usare qualcosa lo fare"<<endl;
                       Sleep(2000);
                       cout<<"E poi a me non e' che piacciano molto gli Stati Uniti d'America ahah USA capita?..."<<endl;
                       Sleep(4000);
                       cout<<"Perche' sto parlando da solo?"<<endl;
                       Sleep(3000);
                   }
                   if (scelta==3)
                   {
                       system("cls");
                        cout<<"In che stanza dovrei andare?"<<endl;
                        cout<<""<<endl;
                        cout<<"Stanza 1 <---"<<endl;
                        cout<<"Stanza 4"<<endl;
                        sel=true;
                        refresh=false;
                        scelta1=1;
                        while(sel)
                        {
                            switch((c=_getch()))
                            {
                            case KEY_UP:
                                if (scelta1 != 1)
                                {
                                    scelta1--;
                                    refresh=true;
                                }
                            break;
                            case KEY_DOWN:
                                if (scelta1 !=2)
                                {
                                    scelta1++;
                                    refresh=true;
                                }
                            break;
                            case KEY_ENTER:
                                sel=false;
                            }
                            if (refresh)
                            {
                                if (scelta1==1)
                                {
                                    system("cls");
                                    cout<<"In che stanza dovrei andare?"<<endl;
                                    cout<<""<<endl;
                                    cout<<"Stanza 1 <---"<<endl;
                                    cout<<"Stanza 4"<<endl;
                                }
                                if (scelta1==2)
                                {
                                    system("cls");
                                    cout<<"In che stanza dovrei andare?"<<endl;
                                    cout<<""<<endl;
                                    cout<<"Stanza 1"<<endl;
                                    cout<<"Stanza 4 <---"<<endl;
                                }
                            }
                            }
                            if (scelta1==1)
                            {
                                map=1;
                            }
                            if (scelta1==2)
                            {
                                map=4;
                            }
                   }
               }
               if (map==4)
               {
                   system("cls");
                   if (accesso5)
                   {
                       cout<<"Una porta non piu' sigillata, tre pulsanti e una scritta sul muro"<<endl;
                   }
                   else
                   {
                       cout<<"Una porta sigillata, tre pulsanti, e una scritta sul muro"<<endl;
                   }
                    cout<<"La scritta dice *Cio' che hai imparato in passato ti aiutera' anche nel presente"<<endl;
                    cout<<"Che faccio?"<<endl;
                    cout<<""<<endl;
                    cout<<"Esamina <---"<<endl;
                    cout<<"Usa"<<endl;
                    cout<<"Spostati"<<endl;
                    sel=true;
                    refresh=false;
                    scelta=1;
                    while(sel)
                    {
                        switch((c=_getch()))
                        {
                        case KEY_UP:
                         if (scelta!= 1)
                         {
                             scelta--;
                             refresh=true;
                         }
                         break;
                        case KEY_DOWN:
                         if (scelta!=3)
                         {
                             scelta++;
                             refresh=true;
                         }
                         break;
                        case KEY_ENTER:
                         sel=false;
                        }
                        if (refresh)
                        {
                            system("cls");           //Ore 00:20 giorno ZY non pensavo di essere cosi' stanco da usare sporchi trucchi come il copia e incolla... mi sbagliavo
                            if (scelta==1)
                            {
                                if (accesso5)
                                {
                                    cout<<"Una porta non piu' sigillata, tre pulsanti e una scritta sul muro"<<endl;
                                }
                                else
                                {
                                    cout<<"Una porta sigillata, tre pulsanti, e una scritta sul muro"<<endl;
                                }
                                cout<<"La scritta dice *Cio' che hai imparato in passato ti aiutera' anche nel presente"<<endl;
                                cout<<"Che faccio?"<<endl;
                                cout<<""<<endl;
                                cout<<"Esamina <---"<<endl;
                                cout<<"Usa"<<endl;
                                cout<<"Spostati"<<endl;
                            }
                            if (scelta==2)
                            {
                                if (accesso5)
                                {
                                    cout<<"Una porta non piu' sigillata, tre pulsanti e una scritta sul muro"<<endl;
                                }
                                else
                                {
                                    cout<<"Una porta sigillata, tre pulsanti, e una scritta sul muro"<<endl;
                                }
                                cout<<"La scritta dice *Cio' che hai imparato in passato ti aiutera' anche nel presente"<<endl;
                                cout<<"Che faccio?"<<endl;
                                cout<<""<<endl;
                                cout<<"Esamina"<<endl;
                                cout<<"Usa <---"<<endl;
                                cout<<"Spostati"<<endl;
                            }
                            if (scelta==3)
                            {
                                if (accesso5)
                                {
                                    cout<<"Una porta non piu' sigillata, tre pulsanti e una scritta sul muro"<<endl;
                                }
                                else
                                {
                                    cout<<"Una porta sigillata, tre pulsanti, e una scritta sul muro"<<endl;
                                }
                                cout<<"La scritta dice *Cio' che hai imparato in passato ti aiutera' anche nel presente"<<endl;
                                cout<<"Che faccio?"<<endl;
                                cout<<""<<endl;
                                cout<<"Esamina"<<endl;
                                cout<<"Usa"<<endl;
                                cout<<"Spostati <---"<<endl;
                            }
                        }
                   }
                   if (scelta==1)
                   {
                       system("cls");
                       cout<<"Ci sono tre pulsanti, uno di colore rosso, uno di colore giallo e uno di colore verde"<<endl;
                       Sleep(2000);
                       cout<<"Hey proprio come i colori di un semaforo!"<<endl;
                       Sleep(2000);
                       cout<<"Forse premendoli in uno specifico ordine succedera' qualcosa"<<endl;
                       Sleep(3000);
                       cout<<""<<endl;
                       cout<<"Tasto rosso <---"<<endl;
                       cout<<"Tasto giallo"<<endl;
                       cout<<"Tasto verde"<<endl;
                       sel=true;
                       scelta1=1;
                       refresh=false;
                       while(sel)
                       {
                           switch((c=_getch()))
                           {
                           case KEY_UP:
                            if (scelta1 !=1)
                            {
                                scelta1--;
                                refresh=true;
                            }
                            break;
                           case KEY_DOWN:
                            if (scelta1 != 3)
                            {
                                scelta1++;
                                refresh=true;
                            }
                            break;
                           case KEY_ENTER:
                               combo++;
                               Beep(700,500);
                               if (scelta1==2 && combo==1)
                               {
                                   giallo=true;
                               }
                               if (scelta1==3 && combo==2)
                               {
                                   verde=true;
                               }
                               if (scelta1==1 && combo==3)
                               {
                                   rosso=true;
                               }
                               if (combo==3)
                               {
                                   sel=false;
                               }
                           }
                           if (refresh)
                           {
                               if (scelta1==1)
                               {
                                   system("cls");
                                   cout<<"Ci sono tre pulsanti, uno di colore rosso, uno di colore giallo e uno di colore verde"<<endl;
                                   cout<<"Hey proprio come i colori di un semaforo!"<<endl;
                                   cout<<"Forse premendoli in uno specifico ordine succedera' qualcosa"<<endl;
                                   cout<<""<<endl;
                                   cout<<"Tasto rosso <---"<<endl;
                                   cout<<"Tasto giallo"<<endl;
                                   cout<<"Tasto verde"<<endl;
                               }
                               if (scelta1==2)
                               {
                                   system("cls");
                                   cout<<"Ci sono tre pulsanti, uno di colore rosso, uno di colore giallo e uno di colore verde"<<endl;
                                   cout<<"Hey proprio come i colori di un semaforo!"<<endl;
                                   cout<<"Forse premendoli in uno specifico ordine succedera' qualcosa"<<endl;
                                   cout<<""<<endl;
                                   cout<<"Tasto rosso"<<endl;
                                   cout<<"Tasto giallo <---"<<endl;
                                   cout<<"Tasto verde"<<endl;
                               }
                               if (scelta1==3)
                               {
                                   system("cls");
                                   cout<<"Ci sono tre pulsanti, uno di colore rosso, uno di colore giallo e uno di colore verde"<<endl;
                                   cout<<"Hey proprio come i colori di un semaforo!"<<endl;
                                   cout<<"Forse premendoli in uno specifico ordine succedera' qualcosa"<<endl;
                                   cout<<""<<endl;
                                   cout<<"Tasto rosso"<<endl;
                                   cout<<"Tasto giallo"<<endl;
                                   cout<<"Tasto verde <---"<<endl;
                               }
                           }
                       }
                       system("cls");
                       if (rosso && giallo && verde)
                       {
                           if (!puzzle)
                           {
                               Beep(700, 500);
                               Beep(800, 500);
                               Beep(950, 500);
                               cout<<"La porta prima bloccata si e' aperta"<<endl;
                               puzzle=true;
                               accesso5=true;
                               Sleep(3000);
                           }
                           else
                           {
                               cout<<"Che mi aspettavo sarebbe successo facendo un puzzle due volte?"<<endl;
                               Sleep(3000);
                           }
                       }
                       else
                       {
                           cout<<"Non e' successo nulla, avro' sbagliato qualcosa?"<<endl;
                           rosso=false;
                           giallo=false;
                           verde=false;
                           Sleep(3000);
                       }
                   }
                   if (scelta==2)
                   {
                       system("cls");
                       cout<<"E se usassi la mia testa per rompere il muro della torre?"<<endl;
                       Sleep(3000);
                       cout<<"Qualcosa mi dice che il mio piano non funzionerebbe..."<<endl;
                       Sleep(3000);
                   }
                   if (scelta==3)
                   {
                       if (!accesso5)
                       {
                           system("cls");
                        cout<<"In che stanza dovrei andare?"<<endl;
                        cout<<""<<endl;
                        cout<<"Stanza 2 <---"<<endl;
                        cout<<"Stanza 3"<<endl;
                        sel=true;
                        refresh=false;
                        scelta1=1;
                        while(sel)
                        {
                            switch((c=_getch()))
                            {
                            case KEY_UP:
                                if (scelta1 != 1)
                                {
                                    scelta1--;
                                    refresh=true;
                                }
                            break;
                            case KEY_DOWN:
                                if (scelta1 !=2)
                                {
                                    scelta1++;
                                    refresh=true;
                                }
                            break;
                            case KEY_ENTER:
                                sel=false;
                            }
                            if (refresh)
                            {
                                if (scelta1==1)
                                {
                                    system("cls");
                                    cout<<"In che stanza dovrei andare?"<<endl;
                                    cout<<""<<endl;
                                    cout<<"Stanza 2 <---"<<endl;
                                    cout<<"Stanza 3"<<endl;
                                }
                                if (scelta1==2)
                                {
                                    system("cls");
                                    cout<<"In che stanza dovrei andare?"<<endl;
                                    cout<<""<<endl;
                                    cout<<"Stanza 2"<<endl;
                                    cout<<"Stanza 3 <---"<<endl;
                                }
                            }
                            }
                            if (scelta1==1)
                            {
                                map=2;
                            }
                            if (scelta1==2)
                            {
                                map=3;
                            }
                       }
                       if (accesso5)
                       {
                           system("cls");
                        cout<<"In che stanza dovrei andare?"<<endl;
                        cout<<""<<endl;
                        cout<<"Stanza 2 <---"<<endl;
                        cout<<"Stanza 3"<<endl;
                        cout<<"Stanza ?"<<endl;
                        sel=true;
                        refresh=false;
                        scelta1=1;
                        while(sel)
                        {
                            switch((c=_getch()))
                            {
                            case KEY_UP:
                                if (scelta1 != 1)
                                {
                                    scelta1--;
                                    refresh=true;
                                }
                            break;
                            case KEY_DOWN:
                                if (scelta1 !=3)
                                {
                                    scelta1++;
                                    refresh=true;
                                }
                            break;
                            case KEY_ENTER:
                                sel=false;
                            }
                            if (refresh)
                            {
                                if (scelta1==1)
                                {
                                    system("cls");
                                    cout<<"In che stanza dovrei andare?"<<endl;
                                    cout<<""<<endl;
                                    cout<<"Stanza 2 <---"<<endl;
                                    cout<<"Stanza 3"<<endl;
                                    cout<<"Stanza ?"<<endl;
                                }
                                if (scelta1==2)
                                {
                                    system("cls");
                                    cout<<"In che stanza dovrei andare?"<<endl;
                                    cout<<""<<endl;
                                    cout<<"Stanza 2"<<endl;
                                    cout<<"Stanza 3 <---"<<endl;
                                    cout<<"Stanza ?"<<endl;
                                }
                                if (scelta1==3)
                                {
                                    system("cls");
                                    cout<<"In che stanza dovrei andare?"<<endl;
                                    cout<<""<<endl;
                                    cout<<"Stanza 2"<<endl;
                                    cout<<"Stanza 3"<<endl;
                                    cout<<"Stanza ? <---"<<endl;
                                }
                            }
                            }
                            if (scelta1==1)
                            {
                                map=2;
                            }
                            if (scelta1==2)
                            {
                                map=3;
                            }
                            if (scelta1==3)
                            {
                                map=5;
                            }
                       }
                   }
               }
               if (map==5)
               {
                   system("cls");
                   cout<<"Un piedistallo con una descrizione *L'avventuriero ti aprira' la strada*"<<endl;
                   cout<<"Cosa dovrei fare?"<<endl;    //00:50 Cosa dovrei fare? se potessi direi dormire
                   cout<<""<<endl;
                   cout<<"Esamina <---"<<endl;
                   cout<<"Usa"<<endl;
                   cout<<"Spostati"<<endl;
                   sel=true;
                   refresh=false;
                   scelta=1;
                   while(sel)
                   {
                       switch((c=_getch()))
                       {
                       case KEY_UP:
                        if (scelta!= 1)
                        {
                            scelta--;
                            refresh=true;
                        }
                        break;
                       case KEY_DOWN:
                        if (scelta!=3)
                        {
                            scelta++;
                            refresh=true;
                        }
                        break;
                       case KEY_ENTER:
                        sel=false;
                       }
                       if (refresh)
                       {
                           system("cls");
                           if (scelta==1)
                           {
                               cout<<"Un piedistallo con una descrizione *L'avventuriero ti aprira' la strada*"<<endl;
                               cout<<"Cosa dovrei fare?"<<endl;
                               cout<<""<<endl;
                               cout<<"Esamina <---"<<endl;
                               cout<<"Usa"<<endl;
                               cout<<"Spostati"<<endl;
                           }
                           if (scelta==2)
                           {
                               cout<<"Un piedistallo con una descrizione *L'avventuriero ti aprira' la strada*"<<endl;
                               cout<<"Cosa dovrei fare?"<<endl;
                               cout<<""<<endl;
                               cout<<"Esamina"<<endl;
                               cout<<"Usa <---"<<endl;
                               cout<<"Spostati"<<endl;
                           }
                           if (scelta==3)
                           {
                               cout<<"Un piedistallo con una descrizione *L'avventuriero ti aprira' la strada*"<<endl;
                               cout<<"Cosa dovrei fare?"<<endl;
                               cout<<""<<endl;
                               cout<<"Esamina"<<endl;
                               cout<<"Usa"<<endl;
                               cout<<"Spostati <---"<<endl;
                           }
                       }
                   }
                   if (scelta==1)
                   {
                       system("cls");
                       cout<<"Una scritta sul muro cattura la mia attenzione"<<endl;
                       Sleep(2000);
                       cout<<"C'e' scritto *Uno specchio deve dividere la prima e la terza stanza"<<endl;
                       map52=true;
                       Sleep(3000);
                   }
                   if (scelta==2)
                   {
                       if (statua==0)
                       {
                           system("cls");
                           cout<<"Avventuriero?"<<endl;
                           Sleep(2000);
                           cout<<"Credo che dovro' dar via il mio souvenir"<<endl;
                           cout<<""<<endl;
                           cout<<"Addio mio amato souvenir <---"<<endl;
                           cout<<"Non ti abbandonerei mai mio avventuriero"<<endl;       //La mancanza di sonno rende stupidi
                           sel=true;
                           refresh=false;
                           scelta1=1;
                           while(sel)
                           {
                               switch((c=_getch()))
                               {
                               case KEY_UP:
                                if (scelta1==2)
                                {
                                    scelta1--;
                                    refresh=true;
                                }
                                break;
                               case KEY_DOWN:
                                if (scelta1==1)
                                {
                                    scelta1++;
                                    refresh=true;
                                }
                                break;
                               case KEY_ENTER:
                                sel=false;
                               }
                               if (refresh)
                               {
                                   if (scelta1==1)
                                   {
                                       system("cls");
                                       cout<<"Avventuriero?"<<endl;
                                       cout<<"Credo che dovro' dar via il mio souvenir"<<endl;
                                       cout<<""<<endl;
                                       cout<<"Addio mio amato souvenir <---"<<endl;
                                       cout<<"Non ti abbandonerei mai mio avventuriero"<<endl;
                                   }
                                   if (scelta1==2)
                                   {
                                       system("cls");
                                       cout<<"Avventuriero?"<<endl;
                                       cout<<"Credo che dovro' dar via il mio souvenir"<<endl;
                                       cout<<""<<endl;
                                       cout<<"Addio mio amato souvenir"<<endl;
                                       cout<<"Non ti abbandonerei mai mio avventuriero <---"<<endl;
                                   }
                               }
                           }
                           system("cls");
                           if (scelta1==1)
                           {
                                if (sedia==sedia1)
                                {
                                cout<<"il piedistallo sprofonda nel terreno, ne compare un'altro, il quale possiede la chiave del piano"<<endl;
                                cout<<""<<endl;
                                cout<<""<<endl;
                                cout<<"############################################################"<<endl;
                                cout<<"#                                                          #"<<endl;
                                cout<<"#    ************                                          #"<<endl;
                                cout<<"#    *           *                                         #"<<endl;
                                cout<<"#    *           ***********************************       #"<<endl;
                                cout<<"#    *           *                  *              *       #"<<endl;
                                cout<<"#    ************                   *              *       #"<<endl;
                                cout<<"#                                   *              *       #"<<endl;
                                cout<<"#                                                          #"<<endl;
                                cout<<"############################################################"<<endl;
                                key=true;
                                statua--;
                                Sleep(2000);
                                cout<<""<<endl;
                                cout<<""<<endl;
                                cout<<"Meglio tornare alla prima stanza"<<endl;
                                Sleep(4000);
                                map=1;
                                }
                                else
                                {
                                    cout<<"Non e' successo nulla"<<endl;
                                    Sleep(2000);
                                    cout<<"Forse mi manca qualche pezzo del puzzle..."<<endl;
                                    Sleep(3000);
                                }
                           }
                           if (scelta1==2)
                           {
                               cout<<"Non me la sento di abbandonare il mio unico amico qua dentro"<<endl;
                               Sleep(3000);
                           }
                       }
                   }
                   if (scelta==3)
                   {
                       system("cls");
                       cout<<"Beh posso andare solo nella stanza 4"<<endl;
                       Sleep(3000);
                       map=4;
                   }
               }
           }
        }

    }



}
