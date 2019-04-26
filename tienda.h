#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "usuario.h"
#include "mochila.h"
#include "configuracion.h"

typedef struct{

    char item_ID[10];
    char descripcion[30];
    char tipo[20];
    int coste;
    int alcance;
    int porcentaje_d_e;             //porcentaje da�o o escudo

}objetos;

int nobjetos;

void cargar_objetos(objetos **obj);
void lista_objetos(objetos *obj);
void comprar_objetos(mochila **moch,objetos *obj,usuario **usua,int iuser);
void registrar_objetos(objetos **obj);
void borrar_objetos(objetos **obj);
void modificar_objetos(objetos **obj);
void guardar_objetos(objetos *obj);