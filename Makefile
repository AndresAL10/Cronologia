AR= ar
CXX= g++
CXXFLAGS= -Wall -g -I ./$(INC)
LDFLAGS= -L ./$(LIB)
LDLIBS= -lbiblio

SRC = src
INC = include
OBJ = obj
BIN = bin
LIB= lib
CXX = g++
CPPFLAGS = -Wall -g  -I$(INC) -c


all: $(BIN)/pruebacronologia

# ************ Compilación de módulos ************

$(BIN)/pruebacronologia : $(OBJ)/pruebacronologia.o $(LIB)/libbiblio.a
		$(CXX) -o $(BIN)/pruebacronologia $(OBJ)/pruebacronologia.o $(LDFLAGS) $(LDLIBS)


$(OBJ)/eventohistorico.o : $(INC)/eventohistorico.h $(SRC)/eventohistorico.cpp
		$(CXX) -c $(CXXFLAGS) -o $(OBJ)/eventohistorico.o $(SRC)/eventohistorico.cpp

$(OBJ)/cronologia.o : $(INC)/cronologia.h $(INC)/eventohistorico.h $(SRC)/cronologia.cpp
		$(CXX) -c $(CXXFLAGS) -o $(OBJ)/cronologia.o $(SRC)/cronologia.cpp

$(OBJ)/pruebacronologia.o : $(INC)/eventohistorico.h $(INC)/cronologia.h $(SRC)/pruebacronologia.cpp
		$(CXX) -c $(CXXFLAGS) -o $(OBJ)/pruebacronologia.o $(SRC)/pruebacronologia.cpp

$(LIB)/libbiblio.a : $(OBJ)/eventohistorico.o $(OBJ)/cronologia.o
		ar rvs $(LIB)/libbiblio.a $(OBJ)/eventohistorico.o $(OBJ)/cronologia.o

# ************ Generación de documentación ******************
documentacion:
		doxygen doc/doxys/Doxyfile
# ************ Limpieza ************
clean :
	-rm $(OBJ)/* $(SRC)/*~ $(INC)/*~ ./*~

mrproper : clean
	-rm $(BIN)/* doc/html/*
