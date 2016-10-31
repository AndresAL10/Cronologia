/**
* @file cronologia.h
* @Author Andres Arco Lopez y Miguel Angel Cantarero
* @date 28/10/2016
* @brief fichero .h de la clase cronologia
*/

#ifndef __CRONOLOGIA
#define __CRONOLOGIA

#include "eventohistorico.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Cronologia {
  private:
    vector <EventoHistorico> crono;

  public:
/**
* @brief Constructor sin parametros clase cronologia, la inicializa con un evento vacio de fecha 0
*/
    Cronologia();

/**
* @brief Constructor con parametros de cronologia, la inicializa con un evento y una fecha determinadas
* @param event primer evento que queremos añadir
* @param f fecha que queremos asignar
* @pre f debe ser mayor que 0
*/
    Cronologia(int anio, string event);

/**
* @brief Añade un evento nuevo a nuestra cronologia, colocandolo al final del vector
* @param i posicion del vector en la que queremos añadir el evento
* @param event evento que queremos añadir
* @pre i debe ser mayor que 0
*/
    void addEventoCronologia(int i, string event);

/**
* @brief Obtiene los eventos con la misma fecha de la cronologia
* @param anio fecha de la que queremos obtener los eventos
* @return devuelve un vector del tipo string con un evento en cada posicion
* @pre anio debe ser mayor que 0
*/
    vector <string> GetEventos(int anio);

/**
* @brief sobrecarga del operador >> para leer una cronologia, cambiando la que le pasamos como parametro
* @param is flujo de entrada
* @param c cronologia que queremos leer
* @return devuelve el flujo de entrada
* @pre c debe ser una cronologia inicializada
*/
    friend std::istream& operator>> (istream& is, Cronologia& c);

 };

 #endif
