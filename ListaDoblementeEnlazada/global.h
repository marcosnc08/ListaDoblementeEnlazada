#ifndef GLOBAL_H_INCLUDED
#define GLOBAL_H_INCLUDED
#define SIN_MEM     0
#define TODO_BIEN   1

typedef struct
{
    char nombre[30];
    int edad;
    long int dni;
}t_info;

typedef struct s_nodo
{
    t_info info;
    struct  s_nodo *sig;
    struct s_nodo *ant;
}t_nodo;

typedef t_nodo *t_lista;

#endif // GLOBAL_H_INCLUDED
