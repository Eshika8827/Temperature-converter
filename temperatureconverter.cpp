#include<iostream>
#include<locale>
using namespace std;
void CelsiusToFahrenheit(float c)
{
    float f = (c * 9/5) + 32;
    cout<<"Temperature in Fahrenheit: "<<f<<" °F"<<endl;
}
void FahrenheitToCelsius(float f)
{
    float c = (f - 32) * 5/9;
    cout<<"Temperature in Celsius: "<<c<<"°C"<<endl;
}
void CelsiusToKelvin(float c)
{
    float k = c + 273.15;
    cout<<"Temperature in kelvin: "<<k<<" K"<<endl; 
}
void KelvinToCelsius(float k)
{
    float c = k - 273.15;
    cout<<"Temperature in celsius: "<<c<<"°C"<<endl; 
}
int main()
{
    int choice;
    cin>>choice;
    float temp;
    
    switch(choice) {
        case 1:
         {cout<<"Enter the temperature in celsius: ";
         cin>>temp;
         CelsiusToFahrenheit(temp);
         break;}
        case 2:
        { cout<<"Enter the temperature in fahrenheit:";
         cin>>temp;
         FahrenheitToCelsius(temp);
         break;}
         case 3:
         {cout<<"Enter the temperature in celsius:";
         cin>>temp;
         CelsiusToKelvin(temp);
         break;}
         case 4:
         {cout<<"Enter the temperature in kelvin:";
         cin>>temp;
         KelvinToCelsius(temp);
         break;}
         default:
         cout<<"Invalid Choice!"<<endl;

    }
    return 0;
}