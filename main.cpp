#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int x , y, a,b;
    a=(x*x)+(y*y)
    b=sqrt(a)
    
    cout<<"Bienvedido al programa"<<endl;
    cout<<"Por favor ingrese la coordenada x:";
    cin>> x;
    cout<<"Por favor ingrese la coordenada y:";
    cin>> y;
    if (x>=0 , y>=0)
    {
        cout<<"Las coordenadas se encuentran en el primer cuadrante" <<endl;
        if (y=x)
        {
            cout<<"Las coordenandas se encentra sobre la recta y=x";
        }
        if (y=2*x)
        {
            cout<<"Las coordenadas se encuentran sobre la recta y=2x";
        }
        if (x>y)
        {
            cout<<"Las coordenadas se encuentran por debajo de las rectas y=x y y=2x";
        }
    }
    if (x<=0 , y>=0)
    {
        cout<<"Las coordenadas se encuentran en el segundo cuadrante"<<endl;
        if (b>10)
        {
            cout<<"Su distancia al origen es mayor a 10";
        }
    }
    if (x<=0 , y<=0)
    {
        cout<<"Las coordenadas se encuentran en el tercer cuadrante"<<endl;
        if (x%3=0 , y%3=0)
        {
            cout<<"Es un punto especial";
        }
    }
    if (x>=0 , y<=0)
    {
        cout<<"Las coordenadas se encuentran en el cuarto cuaadrante"<<endl;
        if (abs(y)<abs(x))
        {
            cout<<"Las coordenadas se encuentran más cerca del eje x";
        }
        if (abs(x)<abs(y))
        {
            cout<<"Las coordenadas se encuentran más cerca del eje y";
        }
        if (x=0)
        {
            cout<<"Las coordenadas se encuentran sobre el eje y";
        }
        if (y=0)
        {
            cout<<"La coordenadas se encuentran sobre el eje x";
        }
    }
    return 0;
}