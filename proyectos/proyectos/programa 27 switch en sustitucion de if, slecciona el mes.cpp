//Jorge Eduardo Vizcarra Mendoza 24041077//
#include <iostream>
#include <windows.h>
#include <time.h>
#include <stdio.h>
void ingresa(char cad1[100]);
void confirma(char cad1[100]);
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char cad1[100];
    ingresa(cad1); 
    confirma(cad1);
    return 0;
}
void ingresa(char cad1[100])
{
	cout<<"Ingresa una palabra: ";
	gets(cad1);
	int len=strlen(cad1);
}
void confirma(char cad1[])
{

    int len=strlen(cad1);
    for(int i=0;i<len;i++)
{
        cad1[i]=toupper(cad1[i]);
}
    for(int i=0;i<len;i++)
    {
        switch(cad1[i])
        {
        case 'S':
            cad1[i]='U';
            break;
        case 'U':
            cad1[i]='S';
            break;
        case 'F':
            cad1[i]='A';
            break;
        case 'A':
            cad1[i]='F';
            break;
        case 'M':
            cad1[i]='E';
            break;
        case 'E':
            cad1[i]='M';
            break;
        case 'L':
            cad1[i]='I';
            break;
        case 'I':
            cad1[i]='L';
            break;
        case 'C':
            cad1[i]='O';
            break;
        case 'O':
            cad1[i]='C';
            break;
        }
    }
    cout<<"La palabra es: "<<cad1<<"\n";
}