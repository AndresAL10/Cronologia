#include <iostream>
#include <vector>
#include "eventohistorico.h"

using namespace std;

EventoHistorico::EventoHistorico(){
}

EventoHistorico::EventoHistorico(string event, int f){
      eventos.push_back(event);
      fecha = f;
}

int EventoHistorico::getFecha(){
    return fecha;
}

vector <string> EventoHistorico::getEventos(){
    return eventos;
}

void EventoHistorico::setFecha(int f){
    fecha = f;
}

void EventoHistorico::addEvento(string event){
  eventos.push_back(event);
}

void EventoHistorico::eliminarElementos(){
  eventos.clear();
}
