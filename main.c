#include <stdio.h>
#include <stdlib.h>

void cargar_vec(int vec[], int dim);
void mostrar_vec(int vec[], int dim);
void maximo_vec(int vec[], int dim);
int minimo_vec(int vec[], int dim);
void ordenar(int vec[], int dim);
void buscar_vec(int vec[], int dim, int a_buscar);
void invertir_vec(int vector[], int dim);

int main()
{
    int vector[10], dim=10, pos, buscar_a=15;
    cargar_vec(vector,dim);
    mostrar_vec(vector,dim);
    maximo_vec(vector,dim);
    pos=minimo_vec(vector,dim);
    ordenar(vector,dim);
    mostrar_vec(vector,dim);
    buscar_vec(vector,dim,buscar_a);
    invertir_vec(vector,dim);

    return 0;
}
void cargar_vec(int vec[],int dim)
{
    int i;
    for(i=0; i<dim; i++)
    {
        printf("Ingrese un valor: ");
        scanf("%d", &vec[i]);
    }
}

void mostrar_vec(int vec[], int dim)
{
    int i;
    for(i=0; i<dim; i++)
        printf("\nEn la pos %d hay %d", i+1, vec[i]);
}

void maximo_vec(int vec[], int dim)
{
    int max_vec=vec[0],i;
    for(i=1; i<dim; i++)
    {
        if(max_vec<vec[i])
        {
            max_vec=vec[i];
        }
        printf("El maximo del vector es: %d", max_vec);
    }
    return;
}

int minimo_vec(int vec[], int dim)
{
    int i, pos_min=0;
    for(i=1; i<dim; i++)
    {
        if(vec[pos_min]<vec[i])
        {
            pos_min=i;
        }
        printf("El maximo del vector es: %d", vec[pos_min]);
    }
    return pos_min;
}

void ordenar(int vec[], int dim)
{
    int aux, i, j;
    for(i=0; i<dim-1; i++)
    {
        for(j=i+1; j<dim; j++)
        {
            if(vec[i]>vec[j])
            {
                aux=vec[i];
                vec[i]=vec[j];
                vec[j]=aux;
            }
        }
    }
}

void buscar_vec(int vec[], int dim, int a_buscar)
{
    int i=0;
    while(a_buscar!=vec[i])
    {
        i++;
    if(i==dim)
    {
        printf("No se encontro el valor buscado");
    }
        else
            printf("El valor buscado esta en la pos %d", i);
    }
}

void invertir_vec(int vec[], int dim)
{
    int i, aux;
    for(i=0;i<dim/2;i++)
    {
        aux=vec[i];
        vec[i]=vec[dim-1-i];
        vec[dim-1-i]=aux;
    }
    return;
}
