#include <iostream>
#include "eventohistorico.h"
#include "cronologia.h"

using namespace std;

    Cronologia::Cronologia(){
      EventoHistorico evento;
      crono.push_back(evento);
    }
    Cronologia::Cronologia(int anio, string event){
      EventoHistorico evento;
      evento.setFecha(anio);
      evento.addEvento(event);
      crono.push_back(evento);
    }

    void Cronologia::addEventoCronologia(int anio, string event){
      EventoHistorico evento;
      evento.setFecha(anio);
      evento.addEvento(event);
      crono.push_back(evento);
    }
    vector <string> Cronologia::GetEventos(int anio){
      int j=0;
      int a = crono.size();

        for(int i=0 ; i< a ; i++)
          if(crono[i].getFecha() == anio)
            j=i;

      return crono[j].getEventos();
    }

    istream& operator>> (istream& is, Cronologia& c){
        int anio;
        string eventostr;
        EventoHistorico evento;
        char b;

        while(is >> anio){
          b=is.get();
          evento.eliminarElementos();
          do{
          if(b=='#')
            do{
              b=is.get();
              if(b!='#' && b!='\n')
              eventostr.push_back(b);
            }while(b!='\n' && b!='#');
            evento.addEvento(eventostr);
            eventostr='\0';
          }while(b!='\n');
          evento.setFecha(anio);
          c.crono.push_back(evento);
        }
       return is;
      }
