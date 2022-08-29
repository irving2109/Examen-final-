#include <iostream>

using namespace std;

class Carta{
	string nom, atributo;
	
	public:
		Carta(string,string);

		void cambiar(int jugador, string dec,string temp, string carta_jug1="Juez", string carta_jug2="Obispo", string carta_jug3="Rey", string carta_jug4="Reina", string carta_jug5="Bruja", string carta_jug6="Tahur"){
			cout<<"Con quien quieres cambiar tu carta?"<<endl;
			cin>>jugador;
			cout<<"Cambiaras o no tu carta?"<<endl;
			cin>>dec;
			if(dec == "si"){
    		switch(jugador){
    			case 2:
    				temp=carta_jug1;
    				carta_jug1=carta_jug2;
    				carta_jug2=temp;
    			case 3:
    				temp=carta_jug1;
    				carta_jug1=carta_jug3;
    				carta_jug3=temp;
    			case 4:
    				temp=carta_jug1;
    				carta_jug1=carta_jug4;
    				carta_jug4=temp;
    			case 5:
    				temp=carta_jug1;
    				carta_jug1=carta_jug5;
    				carta_jug5=temp;
    			case 6:
    				temp=carta_jug1;
    				carta_jug1=carta_jug6;
    				carta_jug6=temp;
			}
				
			}
			else{
				cout<<"Sigues teniendo tu carta"<<endl;
		}
	
}
		void mirar(){
			cout<<"Tu carta es el/la "<<nom<<". Esta carta tiene los siguiente atributos: "<<atributo<<endl;
		}
		
		void anunciar(string adv, string protesta){
			cout<<"Que carta crees que tienes?"<<endl;
			cin>>adv;
			cout<<"Alguien protesta?"<<endl;
			cin>>protesta;
			if(protesta == "si"){
				
			}
			else if(protesta == "no"){
				cout<<"este jugador activa su poder"<<endl;
			}
		}
};
Carta::Carta(string _nom, string _atributo){
	nom= _nom;
	atributo= _atributo;
}

/*class Calculadora{
	int mj1, mj2, mj3, mj4, mj5, mj6;
	public:
		void suma ();
		void resta ();
	
	
	void int suma (){
return mj1 + 1;

}	
	
void int suma (){
return mj2 + 1;

}		
	
	int suma (){
return mj3 + 1;

}	

int suma (){
return mj4 + 1;

}
	
int suma (){
return mj5 + 1;

}

int suma (){
return mj6 + 1;

}

int resta (){
return mj1 - 1; 

}	
	
int resta (){
return mj2 - 1;

}		
	
int resta (){
return mj3 - 1;

}	

int resta (){
return mj4 - 1;

}
	
int resta (){
return mj5 - 1;

}

int resta (){
return mj6 - 1;

}		
	
};
*/	
int main (){
	
	int mj1=6, mj2=6, mj3=6, mj4=6, mj5=6, mj6=6, decision = 0, mj=7;
	string temp, carta_jug1="Juez", carta_jug2="Obispo", carta_jug3="Rey", carta_jug4="Reina", carta_jug5="Bruja", carta_jug6="Tahur";
	Carta c=Carta("","");
	Carta reina=Carta("Reina","La Reina obtiene dos monedas de oro del Banco");
	Carta juez=Carta("Juez","El Juez se lleva todas las monedas (multas) colocadas sobre el Palacio de Justicia.");
	Carta obispo=Carta("Obispo","El Obispo coge dos monedas de oro al jugador más rico.");
	Carta rey=Carta("Rey","El rey obtiene tres monedas de oro del Banco.");
	Carta bruja=Carta("Bruja","La Bruja puede intercambiar toda su fortuna con la de otro jugador de su elección.");
	Carta tahur=Carta("Tahur","Si tiene 10 monedas de oro o más, el Tahúr gana la partida.");

do{      
cout<<"decisiones"<<endl;
cout<<"1-Intercambiar Cartas"<<endl;
cout<<"2-Mira tu carta"<<endl;
cout<<"3-Anuncia una carta"<<endl;
cout<<"Es el turno del jugador 1 que quieres hacer? "<<endl;
cin>>decision;
switch(decision){
    case 1:
    	c.cambiar(0,"","","Juez", "Obispo", "Rey", "Reina","Bruja", "Tahur");
    	cout<<"Has cambiado tu carta"<<endl;
	case 2:
		juez.mirar();
	//case 3:
		    //aqui va el comando de anuncia tu carta//
		}
		
cout<<"decisiones"<<endl;
 cout<<"1-Intercambiar Cartas"<<endl;
 cout<<"2-Mira tu carta"<<endl;
 cout<<"3-Anuncia una carta"<<endl;
 cout<<"Es el turno del jugador 2 que quieres hacer? "<<endl;
 cin>>decision;
 switch(decision){
    case 1:
    	c.cambiar(0, "","","Juez", "Obispo", "Rey", "Reina","Bruja", "Tahur");
    	cout<<"Has cambiado tu carta"<<endl;
			
	case 2:
		obispo.mirar();
		
	//case 3:
		    //aqui va el comando de anuncia tu carta//
		}
cout<<"decisiones"<<endl;
 cout<<"1-Intercambiar Cartas"<<endl;
 cout<<"2-Mira tu carta"<<endl;
 cout<<"3-Anuncia una carta"<<endl;
 cout<<"Es el turno del jugador 3 que quieres hacer? "<<endl;
 cin>>decision;
 switch(decision){
    case 1:
    	c.cambiar(0, "","","Juez", "Obispo", "Rey", "Reina","Bruja", "Tahur");
    	cout<<"Has cambiado tu carta"<<endl;
			
	case 2:
		rey.mirar();
		
	//case 3:
		    //aqui va el comando de anuncia tu carta//
		}
		
cout<<"decisiones"<<endl;
cout<<"1-Intercambiar Cartas"<<endl;
cout<<"2-Mira tu carta"<<endl;
cout<<"3-Anuncia una carta"<<endl;
cout<<"Es el turno del jugador 4 que quieres hacer? "<<endl;
cin>>decision;
 switch(decision){
    case 1:
    	c.cambiar(0, "","","Juez", "Obispo", "Rey", "Reina","Bruja", "Tahur");
    	cout<<"Has cambiado tu carta"<<endl;
			
	case 2:
		reina.mirar();
		
	//case 3:
		    //aqui va el comando de anuncia tu carta//
		}
		
cout<<"decisiones"<<endl;
 cout<<"1-Intercambiar Cartas"<<endl;
 cout<<"2-Mira tu carta"<<endl;
 cout<<"3-Anuncia una carta"<<endl;
 cout<<"Es el turno del jugador 5 que quieres hacer? "<<endl;
 cin>>decision;
 switch(decision){
    case 1:
    	c.cambiar(0, "","","Juez", "Obispo", "Rey", "Reina","Bruja", "Tahur");
    	cout<<"Has cambiado tu carta"<<endl;
			
	case 2:
		bruja.mirar();
		
	//case 3:
		    //aqui va el comando de anuncia tu carta//
		}
		
cout<<"decisiones"<<endl;
 cout<<"1-Intercambiar Cartas"<<endl;
 cout<<"2-Mira tu carta"<<endl;
 cout<<"3-Anuncia una carta"<<endl;
 cout<<"Es el turno del jugador 6 que quieres hacer? "<<endl;
 cin>>decision;
 switch(decision){
    case 1:
    	c.cambiar(0, "","","Juez", "Obispo", "Rey", "Reina","Bruja", "Tahur");
    	cout<<"Has cambiado tu carta"<<endl;
			
	case 2:
		tahur.mirar();
		
	//case 3:
		    //aqui va el comando de anuncia tu carta//
		}
}while(mj <=0 || mj >=13);
}

	
	
/*Referencias usadas
https://www.youtube.com/watch?v=SlwaAlyPi2s&t=724s	
https://youtu.be/tbVHbfIVxs4
https://www.youtube.com/watch?v=EXs_MCt5G64 */
