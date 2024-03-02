//Excepciones 

//Tarea Moral #1

//Realizar un programa donde el usuario pueda crear su password
//de tal manera que la primera letra sea una 'A' y la ultima una 'Z' y ademas su 
//password debe tener mas de un caracter
//Por ejemplo "A123abcZ"===>Es correcto
#include <iostream>

using namespace std;

bool ejectutaTry(string password) {
	/*string xyz;
	xyz.size();
	xyz.substr();
	xyz.length(); */  //Esto son posibles metodos a utilizar
    if(password[0]=='A' && password[password.length()-1]=='Z' && password.length()>1){
        cout << "Password Correcto"<<endl;
        return true;
    }
    else{
        throw new string("Password Incorrecto");
    }
}

int main(){
    string password;
    try{
        cout<< "Ingrese su password: ";
        cin>>password;
        ejectutaTry(password);


    }
    catch(string* e){
        cout<<*e<<endl;
    }
    system("pause");
    return 0;

}