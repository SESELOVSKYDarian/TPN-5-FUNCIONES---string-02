#include <iostream>
#include <string>
using namespace std;
string NombreJapones(string f);
int main()
{
    string nombre, nuevo;
    string k = "Konnichiwa ";
    string s = "-san";
    cout << "Ingresa el nombre: ";
    getline(cin, nombre);
    nuevo = k + NombreJapones(nombre) + s;
    cout << "El nombre japones es: " << nuevo << endl;
    return 0;
}

string NombreJapones(string f)
{
    for (int i = 0; i < f.size(); i++)
	{
	    if (i + 1 <= f.size() && f[i] != ' ' && f[i] != 'a' && f[i] != 'e' 
		&& f[i] != 'i' && f[i] != 'o' && f[i] != 'u' && f[i] != 'n' 
		&& f[i] != 'A' && f[i] != 'E' && f[i] != 'I' && f[i] != 'O' 
		&& f[i] != 'U' && f[i] != 'N' && f[i + 1] != 'a' && f[i + 1] != 'e' 
		&& f[i + 1] != 'i' && f[i + 1] != 'o' && f[i + 1] != 'u' 
		&& f[i + 1] != 'n' && f[i + 1] != 'A' && f[i + 1] != 'E' 
		&& f[i + 1] != 'I' && f[i + 1] != 'O' && f[i + 1] != 'U' 
		&& f[i + 1] != 'N')
        {
		    f.insert(i + 1, "u");
            i++;
    	}
    }
    return f;
}