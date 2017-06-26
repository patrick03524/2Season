#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct Consignatario{
    int codigo;
    string razon_social;
    int RUC;
    string contacto;
    int telf1;
    int telf2;
    string direccion;
};
struct Productos{
    int codigo_product;
    string desc;
    int price;
};
const int num_users = 3; ///número de usuarios predeterminados
const int num_consig = 6; ///números de consignatarios totales
const int num_products = 10; ///números de productos totales
const int pre_consig=4; ///número de consignarios ya pre-definidos
int num_consig_act = pre_consig; ///copia de pre_consig que va a servir de contador para saber la cantidad actual de consignatarios
int op_main; ///contador del menu principal
int pre_product = 8; ///números de productos ya definidos
int num_product_act = pre_product; ///número de pre_products que
Consignatario Agenda[num_consig];  ///Aqui ingresan los datos pre-cargados va a servir de contador para saber la cantidad actual de productos
Productos Products[num_products];
string Razones[num_consig]={"Pablo","Ferreyros","Gloria","Yura"};
int Codigos[num_consig]={11,12,13,14};
int RUCs[num_consig]={147852369,159753486,715479324,478945522};
string Contactos[num_consig]={"a","b","c","d"};
int Telefonos[num_consig]={1,2,3,4};
int Telefonos2[num_consig]={5,6,7,8};
string Direcciones[num_consig]={"Selva Alegre","A.V Parra Hunter","Hunter","Paucarpata",};
int codes[num_products]={1,2,3,4,5,6,7,8};
string descs[num_products]={"a","b","c","d","e","f","g","h"};
int prices[num_products]={1,2,3,4,5,6,7,8};
string upcase(string s1) ///convierte strings a mayusculas
{
	string tmp=s1;
	for (unsigned int i=0; i < s1.size(); i++)
		tmp.at(i) = toupper(tmp.at(i));
	return tmp;
}
bool comprobar_lim_consig(){
    if(num_consig_act==6){
        return true;
    }
    return false;
}
bool condicion_Products(){
    if(num_product_act==10){
        return true;
    }
    return false;
}
int comprobar_codig(int user_codig){ ///comprueba el codigo en caso de no encontrarlo retorna -1
    for(int i = 0; i<num_consig_act; i++){
        if (user_codig == Agenda[i].codigo){
            return i;
            }
        }
    return -1;
}
int comprobar_razon(string user_razon){ ///comprueba la razon en caso de no encontrarlo retorna -1
    for(int i = 0; i<num_consig_act; i++){
        if (user_razon == Agenda[i].razon_social){
            return i;
            }
        }
    return -1;
}
void opciones(int op_main);
void show_menu(); ///pre-definicion de una funcion para implementarla en el codigo sin necesidad de que este en la cabecera
void main_menu();
void nuevos_Consignatarios(){ ///Primera funcion (Primer Problema)
    bool temp_cont1= comprobar_lim_consig();
    if(temp_cont1 == false){
        int codigo,RUC,telefono1,telefono2;
        string razon,contacto,direccion;
        bool temp_comp1 ;
        cout<<"Ingreso de Nuevo Consignatario"<<endl;
        cout<<"Razon : ";
        cin>>razon;
        cout<<endl;
        temp_comp1=false;
        for(int i=0;i<num_consig_act;i++){
            if(Razones[i]== razon){
                temp_comp1 = true;
            }
        }
        while (temp_comp1==true){
            system("cls");
            cout<<"Consignatario ya registrado, intentarlo de nuevo"<<endl;
            cout<<"Ingrese la Razon nuevamente : ";
            cin>>razon;
            cout<<endl;
            temp_comp1=false;
            for(int m=0;m<num_consig_act;m++){
            if(Agenda[m].razon_social==razon){
                temp_comp1 = true;
                }
            }
        }
        system("cls");
        cout<<"Codigo : ";
        cin>>codigo;
        cout<<endl;
        cout<<"RUC : ";
        cin>>RUC;
        cout<<endl;
        cout<<"Contacto : ";
        cin>>contacto;
        cout<<endl;
        cout<<"Telefono 1: ";
        cin>>telefono1;
        cout<<endl;
        cout<<"Telefono 2: ";
        cin>>telefono2;
        cout<<endl;
        cout<<"Direcci\242n : ";
        cin>>direccion;
        cout<<endl;
        Agenda[num_consig_act].codigo=codigo;
        Agenda[num_consig_act].razon_social=razon;
        Agenda[num_consig_act].RUC=RUC;
        Agenda[num_consig_act].contacto=contacto;
        Agenda[num_consig_act].telf1=telefono1;
        Agenda[num_consig_act].telf2=telefono2;
        Agenda[num_consig_act].direccion=direccion;
        num_consig_act++;
        cout<<"Consignatario registrado con exito"<<endl;
        system("pause");
        system("cls");
        show_menu();
        cout << "Elija una opcion: ";
        cin >> op_main;
        opciones(op_main);
        system("pause");
    }
    else{
        system("cls");
        cout <<"Agenda llena"<<endl;
        cout <<"Regresando al menu principal..."<<endl;
        system("pause");
        system("cls");
        show_menu();
        cout << "Elija una opcion: ";
        cin >> op_main;
        opciones(op_main);
        system("pause");
    }
}
void buscar_Consignatarios(){
    cout <<"\t1. Permite buscar por medio del codigo"<<endl;
    cout <<"\t2. Permite buscar por medio del Razon Social"<<endl;
    int opt_buscar;
    cout <<"Ingrese la Opcion : ";
    cin >> opt_buscar;
    if(opt_buscar == 1)
    {
        system("cls");
        int codig_buscar;
        cout <<"Ingrese el codigo : ";
        cin >> codig_buscar;
        cout <<endl;
        codig_buscar = comprobar_codig(codig_buscar);
        if(codig_buscar == -1){
            system("cls");
            cout <<"Consignatario no encontrado"<<endl;
            system("pause");
            system("cls");
            show_menu();
            cout << "Elija una opcion: ";
            cin >> op_main;
            opciones(op_main);
            system("pause");
            system("cls");
            show_menu();
            cout << "Elija una opcion: ";
            cin >> op_main;
            opciones(op_main);
            system("pause");
            }
            else{
                cout <<"Consignatario encontrado"<<endl;
                cout <<"El Codigo es: "<<Agenda[codig_buscar].codigo<<endl;
                cout <<"La Razon Social es : "<<Agenda[codig_buscar].razon_social<<endl;
                cout <<"R.U.C. : "<<Agenda[codig_buscar].RUC<<endl;
                cout <<"El contacto es : "<<Agenda[codig_buscar].contacto<<endl;
                cout <<"Los telefonos son:"<<endl;
                cout <<"\t"<<Agenda[codig_buscar].telf1<<endl;
                cout <<"\t"<<Agenda[codig_buscar].telf2<<endl;
                cout <<"La direccion es : "<<Agenda[codig_buscar].direccion<<endl;
                system("pause");
                system("cls");
                show_menu();
                cout << "Elija una opcion: ";
                cin >> op_main;
                opciones(op_main);
                system("pause");
            }
        }
        if (opt_buscar == 2)
        {
            system("cls");
            int num_razon_buscar;
            string razon_buscar;
            cout <<"Ingrese la razon social: ";
            cin >> razon_buscar;
            cout <<endl;
            num_razon_buscar = comprobar_razon(razon_buscar);
            if(num_razon_buscar == -1){
                system("cls");
                cout <<"Consignatario no encontrado"<<endl;
                system("pause");
                system("cls");
                show_menu();
                cout << "Elija una opcion: ";
                cin >> op_main;
                opciones(op_main);
                system("pause");
                system("cls");
                show_menu();
                cout << "Elija una opcion: ";
                cin >> op_main;
                opciones(op_main);
                system("pause");
            }
            else{
                cout <<"Consignatario encontrado"<<endl;
                cout <<"El Codigo es: "<<Agenda[num_razon_buscar].codigo<<endl;
                cout <<"La Razon Social es : "<<Agenda[num_razon_buscar].razon_social<<endl;
                cout <<"R.U.C. : "<<Agenda[num_razon_buscar].RUC<<endl;
                cout <<"El contacto es : "<<Agenda[num_razon_buscar].contacto<<endl;
                cout <<"Los telefonos son:"<<endl;
                cout <<"\t"<<Agenda[num_razon_buscar].telf1<<endl;
                cout <<"\t"<<Agenda[num_razon_buscar].telf2<<endl;
                cout <<"La direccion es : "<<Agenda[num_razon_buscar].direccion<<endl;
                system("pause");
                system("cls");
                show_menu();
                cout << "Elija una opcion: ";
                cin >> op_main;
                opciones(op_main);
                system("pause");
            }
        }
        else{
            system("cls");
            cout <<"Error al ingresar la opcion"<<endl;
            system("pause");
            show_menu();
            cout << "Elija una opcion: ";
            cin >> op_main;
            opciones(op_main);
            system("pause");
            system("cls");
        }
}
void modificar_Consignatarios(){
        system("cls");
        int codig_buscar;
        cout <<"Ingrese el codigo : ";
        cin >> codig_buscar;
        cout <<endl;
        codig_buscar = comprobar_codig(codig_buscar);
        if(codig_buscar == -1){
            system("cls");
            cout <<"Consignatario no encontrado"<<endl;
            system("pause");
            system("cls");
            show_menu();
            cout << "Elija una opcion: ";
            cin >> op_main;
            opciones(op_main);
            system("pause");
            system("cls");
            show_menu();
            cout << "Elija una opcion: ";
            cin >> op_main;
            opciones(op_main);
            system("pause");
        }
        else{
            cout <<"Consignatario encontrado"<<endl;
            string new_contacto, new_dirreccion;
            cout <<"Ingrese el nuevo contacto: ";
            cin >> new_contacto;
            cout << endl;
            cout <<"Ingrese la nueva direccion: " ;
            cin >> new_dirreccion;
            cout << endl;
            Agenda[codig_buscar].contacto = new_contacto;
            Agenda[codig_buscar].direccion = new_dirreccion;
            cout <<"El Codigo es: "<<Agenda[codig_buscar].codigo<<endl;
            cout <<"La Razon Social es : "<<Agenda[codig_buscar].razon_social<<endl;
            cout <<"R.U.C. : "<<Agenda[codig_buscar].RUC<<endl;
            cout <<"El contacto es : "<<Agenda[codig_buscar].contacto<<endl;
            cout <<"Los telefonos son:"<<endl;
            cout <<"\t"<<Agenda[codig_buscar].telf1<<endl;
            cout <<"\t"<<Agenda[codig_buscar].telf2<<endl;
            cout <<"La direccion es : "<<Agenda[codig_buscar].direccion<<endl;
            system("pause");
            system("cls");
            show_menu();
            cout << "Elija una opcion: ";
            cin >> op_main;
            opciones(op_main);
            system("pause");
        }
}
void nuevos_Productos(){
    bool temp_cont2= condicion_Products();
    if(temp_cont2 == false){
        int code,price;
        string desc;
        bool temp_comp2 ; ///variable que solo comprueba si el codigo ya está registrado
        cout<<"Ingreso de Nuevo Producto"<<endl;
        cout<<"Descripcion del producto : ";
        cin>>desc;
        cout<<endl;
        temp_comp2=false;
        for(int i=0;i<num_product_act;i++){
            if(descs[i]== desc){
                temp_comp2 = true;
            }
        }
        while (temp_comp2==true){
            system("cls");
            cout<<"Producto ya registrado, intentarlo de nuevo"<<endl;
            cout<<"Ingrese la Descripcion nuevamente : ";
            cin>>desc;
            cout<<endl;
            temp_comp2=false;
            for(int m=0;m<num_product_act;m++){
            if(Products[m].desc==desc){
                temp_comp2 = true;
                }
            }
        }
        system("cls");
        cout<<"Codigo : ";
        cin>>code;
        cout<<endl;
        cout<<"Descripcion : ";
        cin>>desc;
        cout<<endl;
        cout<<"Precio: ";
        cin>>price;
        cout<<endl;
        Products[num_product_act].codigo_product=code;
        Products[num_product_act].desc=desc;
        Products[num_product_act].price=price;
        num_product_act++;
        cout<<"Producto registrado con exito"<<endl;
        system("pause");
        system("cls");
        show_menu();
        cout << "Elija una opcion: ";
        cin >> op_main;
        opciones(op_main);
        system("pause");
    }
    else{
        system("cls");
        cout <<"Almacen Lleno"<<endl;
        cout <<"Regresando al menu principal..."<<endl;
        system("pause");
        system("cls");
        show_menu();
        cout << "Elija una opcion: ";
        cin >> op_main;
        opciones(op_main);
        system("pause");
    }
}
void list_Productos(){
    for (int i = 0; i<pre_product; i++){ ///imprime los productos por defecto
        cout <<i+1<<") Productos"<<endl;
        cout <<"El Codigo del producto es : "<<Products[i].codigo_product<<endl;
        cout <<"La descripcion del producto es : "<<upcase(Products[i].desc)<<endl;
        cout <<"El precio del producto  es : "<<Products[i].price<<endl;
        system("pause");
    }
    if(num_product_act>pre_product){
        for (int i= pre_product; i<num_product_act; i++){
            cout <<i+1<<") Productos"<<endl;
            cout <<"El Codigo del producto es : "<<Products[i].codigo_product<<endl;
            cout <<"La descripcion del producto es : "<<upcase(Products[i].desc)<<endl;
            cout <<"El precio del producto  es : "<<Products[i].price<<endl;
            system("pause");
        }
    }
    system("cls");
    show_menu();
    cout << "Elija una opcion: ";
    cin >> op_main;
    opciones(op_main);
    system("pause");
}
void list_Consignatarios(){
    for (int i = 0; i<pre_consig; i++){ ///imprime los consignatarios por defecto
        cout <<i+1<<") Consignatario"<<endl;
        cout <<"\tEl Codigo es: "<<Agenda[i].codigo<<endl;
        cout <<"\tLa Razon Social es : "<<upcase(Agenda[i].razon_social)<<endl;
        cout <<"\tR.U.C. : "<<Agenda[i].RUC<<endl;
        cout <<"\tEl contacto es : "<<upcase(Agenda[i].contacto)<<endl;
        cout <<"\tLos telefonos son:"<<endl;
        cout <<"\t\t"<<Agenda[i].telf1<<endl;
        cout <<"\t\t"<<Agenda[i].telf2<<endl;
        cout <<"\tLa direccion es : "<<upcase(Agenda[i].direccion)<<endl;
        system("pause");
    }
    if(num_consig_act>pre_consig){
        for (int i = pre_consig; i<num_consig_act; i++){
            cout <<i+1<<") Consignatario"<<endl;
            cout <<"\tEl Codigo es: "<<Agenda[i].codigo<<endl;
            cout <<"\tLa Razon Social es : "<<upcase(Agenda[i].razon_social)<<endl;
            cout <<"\tR.U.C. : "<<Agenda[i].RUC<<endl;
            cout <<"\tEl contacto es : "<<upcase(Agenda[i].contacto)<<endl;
            cout <<"\tLos telefonos son:"<<endl;
            cout <<"\t\t"<<Agenda[i].telf1<<endl;
            cout <<"\t\t"<<Agenda[i].telf2<<endl;
            cout <<"\tLa direccion es : "<<upcase(Agenda[i].direccion)<<endl;
            system("pause");
        }
    }
    system("cls");
    show_menu();
    cout << "Elija una opcion: ";
    cin >> op_main;
    opciones(op_main);
    system("pause");
}
void opciones(int op_main)
{
    switch(op_main)
    {
    case 1:
    {
        system("cls");
        cout << " 1. Nuevos Consignatarios" <<endl;
        nuevos_Consignatarios();
        break;
    }

    case 2:
    {
        system("cls");
        cout << " 2. Buscar Consignatarios" <<endl;
        buscar_Consignatarios();
        break;
    }
    case 3:
    {
        system("cls");
        cout << " 3. Modificar Consignatarios" << endl;
        modificar_Consignatarios();
        break;
    }
    case 4:
    {
        system("cls");
        cout << " 4. Nuevos Productos" << endl;
        nuevos_Productos();
        break;
    }
    case 5:
    {
        system("cls");
        cout << " 5. Lista de Productos" << endl;
        list_Productos();
        break;
    }
    case 6:
    {
        system("cls");
        cout << " 6. Lista de Consignatarios" << endl;
        list_Consignatarios();
        break;
    }
    case 7:
    {
        system("cls");
        cout << "7. Salir" << endl;
        cout << "Esta opcion termina el programa" << endl;
        cout << "Ingrese s para terminar el programa y n para volver al menu principal " << endl;
        cout << "Deseea salir?" << endl;
        char y;
        cin >> y;
        while (y!='s' && y!='n'){
            system("cls");
            cout << "Opcion no valida" << endl;
            cout << "Ingrese s para terminar el programa y n para volver al menu principal: " << endl;
            cin >> y;
        }
        if (y=='n'){
            system("cls");
            show_menu();
            cout << "Elija una opcion: ";
            cin >> op_main;
            opciones(op_main);
            system("pause");
        }
        else{
            system("cls");
            cout <<"Programa terminando..."<<endl;
            exit(0); //es 0 porque el main es una funcion int
            }
    }

    }

}
int comp_usuario(string input_user, string users[num_users]){ //funcion que devuelve el numero del usuario, en caso de no encontrarlo retorna -1
    for(int i = 0; i<num_users; i++){
        if(input_user == users[i]){
                return i;
        }
    return -1;
    }
}
void show_menu(){
    cout << " \t \t \t Sistema de Consignatarios " << endl;
    cout << "1. Nuevos Consignatarios" << endl << "2. Buscar Consignatarios" << endl << "3. Modificar Consignatarios" << endl;
    cout << "4. Nuevos Productos" << endl << "5. Lista de Productos" << endl << "6. Lista de Consignatarios" << endl;
    cout << "7. Salir" << endl;
}
void main_menu(){
    string usuario, contrasenha;
    string usuarios[6]={"usuario1","usuario2","usuario3","usuario4","usuario5","usuario6"};
    string contrasenhas[6]={"key1","key2","key3","key4","key5","key6"};
    int num_intentos=0;
    int it_user;
    bool entro=false;
    do{
        system("cls");
        cout << "\t\t\t Sistema de Reconocimiento de Usuarios "<<endl;
        cout<<" Usuario: ";
        cin >> usuario;
        cout<<" Contrasenha: ";
        cin >> contrasenha;
    it_user=comp_usuario(usuario,usuarios);
    if (it_user !=-1){
        if (contrasenha == contrasenhas[it_user]){
            entro=true;
            break;
        }
        else{
            num_intentos++;
            cout << "--------Comprobando Datos de Usuario--------" << endl;
            system("pause");
            cout<<" \t El Usuario y/o Contrasenha son incorrectos"<<endl;
            system("pause");
        }
    }
    else {
            cout << "--------Comprobando Datos de Usuario--------" << endl;
            system("pause");
            cout<<" \t El Usuario y/o Contrasenha son incorrectos"<<endl;
            system("pause");
            num_intentos++;
        }
    } while (entro == false && num_intentos<3);
    if (entro == false){
        system("cls");
        cout <<"Datos de Usuario Incorrectos" << endl;
        cout <<"Cerrando Programa..." << endl;
    } else {
        system("cls");
        cout << "--------Comprobando Datos de Usuario--------"<<endl;
        system("pause");
        cout << "Bienvenido "<< usuario<<endl;
        cout <<"Estamos encantados con su presencia"<<endl;
        system("pause");
        system("cls");
        show_menu();
        int op_temp;
        cout << "Elija una opcion: ";
        cin >> op_temp;
        opciones(op_temp);
        system("pause");
    }
}
int main()
{
    for(int i=0;i<pre_consig;i++){ ///Inicializa los Consignatarios
        Agenda[i].codigo=Codigos[i];
        Agenda[i].razon_social=Razones[i];
        Agenda[i].RUC=RUCs[i];
        Agenda[i].contacto=Contactos[i];
        Agenda[i].telf1=Telefonos[i];
        Agenda[i].telf2=Telefonos2[i];
        Agenda[i].direccion=Direcciones[i];
    }
    for(int i=0;i<pre_product;i++){ ///Inicializa los Productos
        Products[i].codigo_product=codes[i];
        Products[i].desc=descs[i];
        Products[i].price=prices[i];
    }
    system("color B0");
    main_menu();
}
