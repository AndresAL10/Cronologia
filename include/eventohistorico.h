/**
* @file eventohistorico.h
* @Author Andres Arco Lopez y Miguel Angel Cantarero
* @date 28/10/2016
* @brief fichero .h de la clase eventohistorico
*/

#ifndef EVENTO_HISTORICO
#define EVENTO_HISTORICO


#include <iostream>
#include <vector>
#include <string>

using namespace std;


class EventoHistorico{
  private:
      vector<string> eventos;
      int fecha;

  public:

/**
* @file eventohistorico.h
* @Author Andres Arco Lopez y Miguel Angel Cantarero
* @date 28/10/2016
* @brief fichero .h de la clase eventohistorico
*/
    EventoHistorico();

/*
* @brief Constructor sin parametros clase eventohistorico crea un evento event con una fecha f
* @param event primer evento que queremos añadir
* @param f fecha que queremos asignar
* @pre f debe ser mayor que 0
*/
    EventoHistorico(string event, int f);

/**
* @brief funcion para obtener la fecha de un eventohistorico
* @return devuelve el dato miembro fecha de nuestro evento
*/
    int getFecha();

/**
* @brief funcion para obtener todos los eventos de la clase
* @return devuelve un vector <string> con todos los eventos
*/
    vector <string> getEventos();

/**
* @brief funcion para cambiar la fecha de un eventohistorico
* @param f fecha que queremos asignar
* @pre f debe ser mayor que 0
*/
    void setFecha(int f);

/**
* @brief funcion que añade un evento al final de nuestro vector eventos
* @param event evento que queremos añadir
* @pre event debe de ser un string distinto de '\0'
*/
    void addEvento(string event);

/**
* @brief funcion que elimina todos los elementos del vector de string eventos
*/
    void eliminarElementos();
};

#endif
