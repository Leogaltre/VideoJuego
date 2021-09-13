/*
ProgramenC
Programador Leogaltre
VideoJuego sin interface Grafica 
Uso de CMD
Titulo del Videojuego 
DetecClueve
*/
#include <iostream>     //cout, cin 
#include <stdlib.h>     //system("cls"), system("pause")
#include <time.h>       //Random
#define o cout 
#define i cin 
	using namespace std;
//Métodos usados 
void Introduccion();
void MenuPrincipal();
void Opciones();
void PreguntaPers();
void PreguntaEsc();
void PreguntaArm();
void ESONO();
void ContinuarJuego();
//Mis variables globales 
		int MenuP;
		int MenuE;
		int MenuA;
  int Contador=1;
  int Random;
  int Continuar=0;
  int Escoger;
  int ESCPer=0;
  int ESCEsc=0;
  int ESCArm=0;

int main(){
	o<<endl<<"Bienvenido a ProgramenC By LEOGALTRE"<<endl;
	srand	(time(NULL));
	Random=1+rand()%(5); //o<<"Random es: "<<Random<<endl;
	do{
		Introduccion();
		MenuPrincipal();
	 ESONO();
	 ContinuarJuego();
	}while (Continuar==1);
	return 0;
}

void Introduccion(){//............................................1
	o<<"Erase una vez un pueblo lujoso donde vivian 5 prs"<<endl;
	o<<"En el cual la vida era peculiar, porque la personalidad"<<endl;
	o<<"de las personas era cuanto menos inesperada."<<endl;
	o<<"Hubo un asesinato en este pueblo y tu seras quien"<<endl;
	o<<"encuentre al responsable. "<<endl;
	o<<"Para ello deberas saber quien, en donde y con que arma"<<endl;
	o<<"cometieron ese siniestro."<<endl;
	o<<"Para encontrar al responsable tu podras preguntar 5 veces"<<endl;
	o<<"para saber informacion de que hicieron los personajes,"<<endl;
	o<<"quienes estuvieron en que lugares, que armas habia en esos"<<endl;
	o<<"lugares, finalizadas esas 5 preguntas se te preguntara"<<endl;
	o<<"tu conclusion de quien, en donde y con que arma cometio el"<<endl;
	o<<"                             SINIESTRO"<<endl;
	o<<""<<endl;
}

void MenuPrincipal(){//...........................................2
	do{
		Opciones();	
		switch (Escoger){
			case 1:
				PreguntaPers();
				o<<"Turno: "<<Contador<<""<<endl;
				break;
				
			case 2:
				PreguntaEsc();
				o<<"Turno: "<<Contador<<""<<endl;
				break;
				
			case 3:
				PreguntaArm();
				o<<"Turno: "<<Contador<<""<<endl;
				break;
				
			default:
			 	o<<"Carnal esa opcion no existe, usa una de las que hay!!"<<endl;
			 	o<<"Has perdido un turno, ten mas cuidado"<<endl;
			 	o<<"Turno: "<<Contador<<""<<endl;
			  	break;
		}
		Contador++;
	}while(Contador<=5);
}

void Opciones(){//................................................3
	o<<"Tus opciones de investigacion son"<<endl;
	o<<"1) Preguntar por una Persona"<<endl;
	o<<"2) Preguntar por un Lugar"<<endl;
	o<<"3) Preguntar por un Arma"<<endl;
	o<<"Donde quieres investigar: "<<endl;
	i>>Escoger;
	o<<""<<endl;
}

void PreguntaPers(){//............................................4
 system("cls");
	o<<"Personas"<<endl;
	o<<"1) El Kevin"<<endl;				//.....................Asesino de H2  
	o<<"2) El Brayan"<<endl;			//.....................Asesino de H3  
	o<<"3) El Tyson"<<endl;				//.....................Asesino de H1 
	o<<"4) La Britani"<<endl;  //.....................Asesino de H4
	o<<"5) Smitty Werben Man Jensen SWMJ"<<endl; //Asesino de H5
	o<<"De que Persona quieres saber: "<<endl;
	i>>MenuP;
	o<<""<<endl;
	switch(MenuP){
		case 1:
			switch(Random){
				case 1: //Historia de P1
					o<<"A Kevin le da anciedad y comienza a llorar"<<endl;
					o<<"diciendo que el no fue, huye llorando"<<endl;
					break;
					
				case 2: //Historia de P2
					o<<"Al cuestionar a Kevin comenzo a ponerse nerviso y algo palido"<<endl;
					o<<"pero dijo (nerviso) que el no sabia nada de lo sucedido"<<endl;
					o<<"Kevin es payaso y no tenia los integredientes suficientes "<<endl;
					o<<"para preparar un pastel"<<endl;
					break;
					
				case 3: //Historia de P3
					o<<"Kevin estaba muy cansado ese día asi que se quedo dormido"<<endl;
					o<<"y su madre lo cuido porque tenia covid"<<endl;	
					break;
					
				case 4: //Historia de P4
				 o<<"Kevin le da igual la vida y la muerte, porque ella no lo ama "<<endl;
					o<<"y a ti tampoco. El es mejor jugando en la CHAMPIONS"<<endl;
					break;
					
				case 5: //Historia de P5
					o<<"Kevin fue el asesinado"<<endl;
					break;
			}
			o<<"Elegiste a Kevin"<<endl;
			o<<""<<endl;
			break;
			
		case 2: 
			switch(Random){
				case 1: //Historia de P1
					o<<"Brayan no tiene idea que había sucedido eso"<<endl;
					o<<"El se aflije, muestra verdadesra tristeza"<<endl;
					o<<"Menciona que si el puede ayudar en algo se lo hagan saber"<<endl;
					break;
					
				case 2: //Historia de P2
					o<<"Brayan estaba en una junta Chola"<<endl;
					break;
					
				case 3: //Historia de P3
				 o<<"Cuando se le pregunto a Brayan por el SINIESTRO cerro la puerta"<<endl;
					o<<"muy fuerte y dijo que el no fue"<<endl;
					break;
					
				case 4: //Historia de P4
					o<<"El Brayan también apodado THIBAUT COURTOIS"<<endl;
					o<<"le bajo la novia a el Kevin, pero es no es tan malo"<<endl;
					o<<"como para asesinar a una persona"<<endl;
					break;
					
				case 5: //Historia de P5
				 o<<"Brayan estaba con Britani en el casino"<<endl;
					break;
			}
			o<<"Elegiste a Brayan"<<endl;
			o<<""<<endl;
			break;
			
		case 3:
			switch(Random){
				case 1: //Historia de P1
					o<<"Al cuestionar a Tyson comenzo a ponerse nerviso y algo palido"<<endl;
					o<<"pero dijo (nerviso) que el no sabia nada de lo sucedido"<<endl;
					break;
					
				case 2: //Historia de P2
					o<<"Tyson estaba en prision el ni de pex puede salir"<<endl;
					break;
					
				case 3: //Historia de P3
					o<<"Tyson habia salido con Britani en una CITA"<<endl;
					break;
					
				case 4: //Historia de P4
				 o<<"El Tyson estaba en una pelea con EVANDER HOLYFIELD"<<endl;
				 o<<"por lo que obviamente el no era"<<endl;
					break;
					
				case 5: //Historia de P5
				 o<<"El Tyson estaba en el BOSQUE ayudando a MASHA y el OSO"<<endl;
					break;
			}
			o<<"Elegiste a Tyson"<<endl;
			o<<""<<endl;
			break;
			
		case 4: 
			switch(Random){
				case 1: //Historia de P1
					o<<"Britani estaba matando MOSCAS con la Chancla de Acero"<<endl;
					break;
					
				case 2: //Historia de P2
					o<<"Britani acompañaba a El Brayan al barrio Cholo"<<endl;
					break;
					
				case 3: //Historia de P3
				 o<<"Britani fue a una CITA con Tyson"<<endl;
					break;
					
				case 4: //Historia de P4
					o<<"Britani se nego a responder todas las preguntas que se le hacian"<<endl;
					o<<"y tenia una actitud sospechoza"<<endl;
					break;
					
				case 5: //Historia de P5
				 o<<"Britani se fue con BARBIE a realizar sus Grabaciones"<<endl;
				 o<<"despues de su Cita con Brayan"<<endl;
					break;
			}
			o<<"Elegiste a Britani"<<endl;
			o<<""<<endl;
			break;
			
		case 5:
			switch(Random){
				case 1: //Historia de P1
					o<<"Smitty tiene una reputacion intachable ademas es estudiante"<<endl;
					o<<"del CETI Colomos por lo que no tiene vida social fuera de "<<endl;
					o<<"ello y es sangre O- por si les interesa"<<endl;
					break;
					
				case 2: //Historia de P2
					o<<"Smitty  estaba en una grabacion con"<<endl;
					o<<"BOB ESPONJA, BOB lo confirma"<<endl;
					break;
					
				case 3: //Historia de P3
					o<<"Smitty fue a jugar un partido con CR7 y ganaron la CHAMPIONS"<<endl;
					o<<"Por que el era el numero 1. CR7 Confirma la historia"<<endl;
					break;
					
				case 4: //Historia de P4
					o<<"Smitty no se encontraba ya que tenia un viaje de negocios"<<endl;
					o<<"desde hace una semana atras, por lo que aun no vuelve"<<endl;
					break;
					
				case 5: //Historia de P5
				 o<<"Smitty sabe tocar muy bien el Violin, por lo que toca en"<<endl;
					o<<"el Casino"<<endl;
					break;
			}
			o<<"Elegiste a Smitty Werben Man Jensen"<<endl;
			o<<""<<endl;
			break;
			
		default:
			 	o<<"Carnal esa opcion no existe, usa una de las que hay"<<endl;
			 	o<<"Perdiste un turno lo siento, ten mas cuidado"<<endl;
			 	o<<""<<endl;
			  	break;
	}
}

void PreguntaEsc(){//.............................................5
 system("cls");
	o<<"Localizaciones"<<endl;
	o<<"1) Casino"<<endl;               //Lugar H5
	o<<"2) Salon de Clases"<<endl;      //Lugar H1
	o<<"3) Barrio Cholo"<<endl;         //lugar H3
	o<<"4) El circo"<<endl;             //Lugar H2     
	o<<"5) El Jacuzzi"<<endl;           //Lugar H4        
	o<<"De que persona Localizacion saber: "<<endl;
	i>>MenuE;
	switch(MenuE){
		case 1:
			switch(Random){
				case 1: //Historia de P1
					o<<"En el Casino estaba cerrado a causa del "<<endl;
					o<<"Covicho / Covid-19 / Virus / Chip 5G"<<endl;
					break;
					
				case 2: //Historia de P2
					o<<"En el Casino no es, se feliz de nada"<<endl;
					break;
					
				case 3: //Historia de P3
					o<<"En el Casino no habían rastros del SINIESTRO"<<endl;
					break;
					
				case 4: //Historia de P4
				 o<<"En el Casino habia muchas prs por lo que nadie vio nada"<<endl;
					break;
					
				case 5: //Historia de P5
					o<<"En el Casino se encontraba Kevin, el cual tiene problemas "<<endl;
					o<<"con especificas frecuencias continuas de sonido, pero el "<<endl;
					o<<"decidio ignorar eso, asi que fue a el Casino"<<endl;
					break;
			}
			o<<"Elegiste a El Casino"<<endl;
			o<<""<<endl;
			break;
			
		case 2: 
			switch(Random){
				case 1: //Historia de P1
					o<<"En el Salon de Clases las sillas y las mesas "<<endl;
					o<<"estaban desordenadas, en el piso se apreciban"<<endl;
					o<<"diminutas manchas de Sangre"<<endl;
					break;
					
				case 2: //Historia de P2
					o<<"No habia clases por lo que El Salon de Clases estaba "<<endl;
					o<<"Cerrado"<<endl;
					break;
					
				case 3: //Historia de P3
					o<<"No hubo clases por el COVID, nadie estuvo ahi"<<endl;
					break;
					
				case 4: //Historia de P4
				 o<<"La maestra Britani se enfermo de COVID y era asintomatica"<<endl;
				 o<<"por lo que estaba aburrida asi que se fue a un Jacuzzi "<<endl;
					break;
					
				case 5: //Historia de P5
					o<<"Nadie esta en La escuela cuando hay vacaciones"<<endl;
					break;
			}
			o<<"Elegiste La Escuela"<<endl;
			o<<""<<endl;
			break;
			
		case 3:
			switch(Random){
				case 1: //Historia de P1
					o<<"No nadie haciendo dagas en El Barrio Cholo"<<endl;
					break;
					
				case 2: //Historia de P2
					o<<"El Barrio Cholo estaba siendo protegido por FRANKLIN"<<endl;
					o<<"de GTA5, por lo que nadie estaba ahi"<<endl;
					break;
					
				case 3: //Historia de P3
					o<<"En el Barrio Cholo, Brayan encontro a Tyson Saliendo"<<endl;
					o<<"Britani, al dia siguiente habia Sangre en el Suelo"<<endl;
					break;
					
				case 4: //Historia de P4
					o<<"El Barrio Cholo estaba cerrado, a causa de una remodelacion"<<endl; 
					break;
					
				case 5: //Historia de P5
				 o<<"Rara vez el Barrio Cholo estaba solo, pero hoy habia un"<<endl;
				 o<<"concierto importante en el Cacino"<<endl;
					break;
			}
			o<<"Elegiste El Barrio Cholo"<<endl;
			o<<""<<endl;
			break;
			
		case 4: 
			switch(Random){
				case 1: //Historia de P1
					o<<"Habia demasiada lluvia por lo que el circo no habrio ese dia"<<endl;
					break;
					
				case 2: //Historia de P2
				 o<<"En el suelo del Circo habia mantequilla derramada y"<<endl;
				 o<<"un calcetin roto y alargado, Sangre Seca"<<endl;
					break;
					
				case 3: //Historia de P3
				 o<<"Estaba clausurado por falta de seguridad"<<endl;
					break;
					
				case 4: //Historia de P4
					o<<"El circo tuvo mucho exito en taquillas por lo que se decidio"<<endl;
					o<<"irse hace 2 dias, antes del asesinato"<<endl;
					break;
					
				case 5: //Historia de P1
				 o<<"Los trabajadores de El Circo estaban todos en el Casino"<<endl;
					break;
			}
			o<<"Elegiste El Circo"<<endl;
			o<<""<<endl;
			break;
			
		case 5:
			switch(Random){
				case 1: //Historia de P1
					o<<"No habia agua por lo que el Jacuzzi no estaba"<<endl;
					o<<"en funcionamiento"<<endl;
					break;
					
				case 2: //Historia de P2
					o<<"El Jacuzzi estaba lleno de gente y la gente "<<endl;
					o<<"afirmaron no haber visto nada"<<endl;
					break;
					
				case 3: //Historia de P3
				 o<<"Alguien meo el Jacuzzi, por lo que todos los que estaban"<<endl;
				 o<<"se fueron"<<endl;
					break;
					
				case 4: //Historia de P4
				 o<<"En el Jacuzzi se encontro rastros de COVID y de sangre"<<endl;
				 o<<"y un cadaver de sexo M"<<endl;
					break;
					
				case 5: //Historia de P5
					o<<"El Jacuzzi fue cerrado por un evento importante en el Casino"<<endl;
					break;
			}
			o<<"Elegiste El Jacuzzi"<<endl;
			break;
			
		default:
			o<<"Carnal esa opcion no existe, usa una de las que hay"<<endl;
			o<<"Perdiste un turno lo siento, ten mas cuidado"<<endl;
			o<<""<<endl;
			break;
	}
}

void PreguntaArm(){//.............................................6
	system("cls");
	o<<"Armas"<<endl;
	o<<"1) Fierro Golpeador de parejas felices"<<endl;   //Arma H3
	o<<"2) La chancla de acero"<<endl;																			//Arma H4
	o<<"3) La calceta con mantequilla"<<endl;												//Arma H2
	o<<"4) El lapiz"<<endl;                              //Arma H1
	o<<"5) El violin asesino"<<endl;																					//Arma H5
	o<<"De que Arma quieres saber: "<<endl;
	i>>MenuA;
	switch(MenuA){
		case 1:
			switch(Random){
				case 1: //Historia de P1
					o<<"El Fierro Golpeador de Parejas Felices lo usaba GERMAN"<<endl;
					o<<"GARMENDIA para hacer un video de youtube"<<endl;
					break;
					
				case 2: //Historia de P2
				 o<<"El Fierro Golpeador de Parejas Felices estaba en el"<<endl;
					o<<"mismo luagr donde GERMAN GARMENDIA lo habia dejado"<<endl;
					break;
					
				case 3: //Historia de P3
				 o<<"El Fierro Golpeador de Parejas Felices estaba cubierto "<<endl;
				 o<<"de ROJO y lo encontraron en el Barrio Cholo "<<endl;
					break;
					
				case 4: //Historia de P4
					o<<"El Fierro Golpeador de Parejas Felices fue subastado dias"<<endl;
					o<<"antes del SINIESTRO y comprado por Smithin Beberman Manyensin"<<endl;
					break;
					
				case 5: //Historia de P5
					o<<"Desde que GERMAN GARMENDIA vendio su Fierro Golpeador de "<<endl;
					o<<"Parejas Felices personas lo usan para su proposito"<<endl;
					o<<"pero obviamente su proposito no es el asesinato"<<endl;
					break;
			}
			o<<"Elegiste El Fierro Golpeador de Parejas Felices"<<endl;
			o<<""<<endl;
			break;
			
		case 2: 
			switch(Random){
				case 1: //Historia de P1
					o<<"La Chancla de Acero la estaba usando britani para matar"<<endl;
					o<<"MOSCAS"<<endl;
					break;
					
				case 2: //Historia de P2
					o<<"La madre de TORY VEGA estaba usando esa Chancla de Acero"<<endl;
					break;
					
				case 3: //Historia de P3
					o<<"La Chancla de Acero estaba pintada de color rojo"<<endl;
					o<<"estaba en casa de Britani"<<endl;
					break;
					
				case 4: //Historia de P4
					o<<"La Chancla de Acero tenia rastros de Covid y tenia Sangre"<<endl;
					break;
					
				case 5: //Historia de P5
					o<<"La Chancla de Acero  es des-declarada como un arma por "<<endl;
					o<<"PEÑA NIETO por lo que lo declaran Heroe Nacional"<<endl;
					o<<"Esta declaracion se realizo 2 dias despues del SINIESTRO"<<endl;
					break;
			}
			o<<"Elegiste La Chancla de Acero"<<endl;
			o<<""<<endl;
			break;
			
		case 3:
			switch(Random){
				case 1: //Historia de P1
					o<<"La Calceta con Mantequilla estaba siendo usada por Kevin"<<endl;
					o<<"para entrenar con SAM POCKET de iCarly"<<endl;
					break;
					
				case 2: //Historia de P2
					o<<"La Calceta con Mantequilla estaba destrozada en el Circo"<<endl;
					break;
					
				case 3: //Historia de P3
					o<<"La Calceta con Matequilla estaba siendo usada por Kevin"<<endl;
					o<<"para entrenar con SAM POCKET de iCarly"<<endl;
					break;
					
				case 4: //Historia de P4
					o<<"La Calceta con Mantequilla estaba siendo usada por SAM"<<endl;
					o<<"POCKET de iCarly"<<endl;
					break;
					
				case 5: //Historia de P5
					o<<"La Calceta con Mantequilla se derritio porque la dejaron"<<endl;
					o<<"en el SOL"<<endl;
					break;
			}
			o<<"Elegiste La Calceta con Mantequilla"<<endl;
			o<<""<<endl;
			break;
			
		case 4: 
			switch(Random){
				case 1: //Historia de P1
					o<<"El lapiz estaba manchado de una tonalidad ROJA color"<<endl;
					o<<"sangre y es O-"<<endl;
					o<<""<<endl;
					break;
					
				case 2: //Historia de P2
					o<<"El lapiz estaba guardado en su estuche"<<endl;
					break;
					
				case 3: //Historia de P3
				 o<<"El lapiz lo estaba usando por JOHN WICK junto con PEPA PIG"<<endl;
					break;
					
				case 4: //Historia de P4
					o<<"El lapiz esta siendo usando por BOB el CONSTRUCTOR"<<endl;
					break;
					
				case 5: //Historia de P5
					o<<"El lapiz es usado como parte de la escenografia de"<<endl;
					o<<"JOHN WICK 5"<<endl;
					break;
			}
			o<<"Elegiste El Lapiz"<<endl;
			break;
			
		case 5:
			switch(Random){
				case 1: //Historia de P1
					o<<"El Brayan estaba practicando con el Violin junto"<<endl;
					o<<"con MIGUEL de COCO para dedicarle una cancion"<<endl;
					o<<"a su novia Britani"<<endl;
					break;
					
				case 2: //Historia de P2
					o<<"El Violin estaba en la tienda MAGICA DE LITTLE WITCH ACADEMY"<<endl;
					o<<"WITCH ACADEMY, nadie lo uso"<<endl;
					break;
					
				case 3: //Historia de P3
					o<<"El Violin lo estaba usando LINDSEY STIRLING"<<endl;
					o<<"para entrenar con SAM POCKET de iCarly"<<endl;
					break;
					
				case 4: //Historia de P4
				 o<<"ESTUART (El MINION) se robo un violin pensado que era "<<endl;
				 o<<"una guitarra. Por lo que el violin no es un arma suspechoza "<<endl;
				 
					break;
					
				case 5: //Historia de P5
					o<<"El Violin es el arma Homicida, de la manera mas extraña Posible"<<endl;
					break;
			}
			o<<"Elegiste El Violin"<<endl;
			break;
			
		default:
			o<<"Carnal esa opcion no existe, usa una de las que hay"<<endl;
			o<<"Perdiste un turno lo siento, ten mas cuidado"<<endl;
			o<<""<<endl;
			break;
	}
}

void ESONO(){//...................................................7
	Contador=1;
	system("pause");
	system("cls");
	o<<"Bien ahora tu nuestro investigador dinos"<<endl;
	o<<"Quien, En donde y Con que se cometio..."<<endl;
	o<<"             EL SINIESTRO              "<<endl;
	
	o<<"Se te recuerdan los pueblerinos"<<endl;
	o<<"1) El Kevin"<<endl;				//.....................Asesino de H2  
	o<<"2) El Brayan"<<endl;			//.....................Asesino de H3  
	o<<"3) El Tyson"<<endl;				//.....................Asesino de H1 
	o<<"4) La Britani"<<endl;  //.....................Asesino de H4
	o<<"5) Smitty Werben Man Jensen SWMJ"<<endl; //Asesino de H5
	
	o<<"Se te recuerdan las ubicaciones"<<endl;
	o<<"1) Casino"<<endl;               //Lugar H5
	o<<"2) Salon de Clases"<<endl;      //Lugar H1
	o<<"3) Barrio Cholo"<<endl;         //lugar H3
	o<<"4) El circo"<<endl;             //Lugar H2     
	o<<"5) El Jacuzzi"<<endl;           //Lugar H4   
	
	o<<"Se te recuerdan las Armas"<<endl;
	o<<"1) Fierro Golpeador de parejas felices"<<endl;   //Arma H3
	o<<"2) La chancla de acero"<<endl;																			//Arma H4
	o<<"3) La calceta con mantequilla"<<endl;												//Arma H2
	o<<"4) El lapiz"<<endl;                              //Arma H1
	o<<"5) El violin asesino"<<endl;																					//Arma H5
	
	o<<"Llego el momento de elegir: "<<endl;
	switch (Random){//Seleccion de Historia 
		case 1://................................................H1
			o<<"Quien de los Pueblerinos cometio el SINIESTRO: ";
	  i>>ESCPer;
	  if(ESCPer==3){
	  	o<<"Persona Correcta"<<endl;
			}
			else{
				o<<"Persona Incorrecta"<<endl;
			}
			o<<""<<endl;
			
	  o<<"En que Ubicacion del Pueblo se cometio el SINIESTRO: ";
	  i>>ESCEsc;
	  if(ESCEsc==2){
	  	o<<"Ubicacion Correcta"<<endl;
			}
			else{
				o<<"Ubicacion Incorrecta"<<endl;
			}
	  o<<""<<endl;
	  
	  o<<"Con que Arma se Cometio el SINIESTRO: ";
	  i>>ESCArm;
			if(ESCArm==4){
	  	o<<"Arma Correcta"<<endl;
			}
			else{
				o<<"Arma Incorrecta"<<endl;
			}
			o<<""<<endl;
			
			o<<"Tus Conclusiones Finales Fueron  => ";
			if(ESCPer==3 && ESCEsc==2 && ESCArm==4){
				o<<"Correctas"<<endl;
				o<<"Felicitaciones eres un gran Investigador"<<endl;
			}
			else{
				o<<"Incorrectas"<<endl;
				o<<"Lo lamento te has equivocado"<<endl;
				o<<"El responsable sigue Suelto"<<endl;
			}
			o<<""<<endl;
			break;
			
		case 2://................................................H2
			o<<"Quien de los Pueblerinos cometio el SINIESTRO: ";
	  i>>ESCPer;
	  if(ESCPer==1){
	  	o<<"Persona Correcta"<<endl;
			}
			else{
				o<<"Persona Incorrecta"<<endl;
			}
			o<<""<<endl;
			
	  o<<"En que Ubicacion del Pueblo se cometio el SINIESTRO: ";
	  i>>ESCEsc;
	  if(ESCEsc==4){
	  	o<<"Ubicacion Correcta"<<endl;
			}
			else{
				o<<"Ubicacion Incorrecta"<<endl;
			}
			o<<""<<endl;
	  
	  o<<"Con que Arma se Cometio el SINIESTRO: ";
	  i>>ESCArm;
			if(ESCArm==3){
	  	o<<"Arma Correcta"<<endl;
			}
			else{
				o<<"Arma Incorrecta"<<endl;
			}
			o<<""<<endl;
			
			o<<"Tus Conclusiones Finales Fueron  => ";
			if(ESCPer==1 && ESCEsc==4 && ESCArm==3){
				o<<"Correctas"<<endl;
				o<<"Felicitaciones eres un gran Investigador"<<endl;
			}
			else{
				o<<"Incorrectas"<<endl;
				o<<"Lo lamento te has equivocado"<<endl;
				o<<"El responsable sigue Suelto"<<endl;
			}
			o<<""<<endl;
			break;
			
		case 3://................................................H3
			o<<"Quien de los Pueblerinos cometio el SINIESTRO: ";
	  i>>ESCPer;
	  if(ESCPer==2){
	  	o<<"Persona Correcta"<<endl;
			}
			else{
				o<<"Persona Incorrecta"<<endl;
			}
			o<<""<<endl;
			
	  o<<"En que Ubicacion del Pueblo se cometio el SINIESTRO: ";
	  i>>ESCEsc;
	  if(ESCEsc==3){
	  	o<<"Ubicacion Correcta"<<endl;
			}
			else{
				o<<"Ubicacion Incorrecta"<<endl;
			}
	  o<<""<<endl;
	  
	  o<<"Con que Arma se Cometio el SINIESTRO: ";
	  i>>ESCArm;
			if(ESCArm==1){
	  	o<<"Arma Correcta"<<endl;
			}
			else{
				o<<"Arma Incorrecta"<<endl;
			}
			o<<""<<endl;
			
			o<<"Tus Conclusiones Finales Fueron  => ";
			if(ESCPer==2 && ESCEsc==3 && ESCArm==1){
				o<<"Correctas"<<endl;
				o<<"Felicitaciones eres un gran Investigador"<<endl;
			}
			else{
				o<<"Incorrectas"<<endl;
				o<<"Lo lamento te has equivocado"<<endl;
				o<<"El responsable sigue Suelto"<<endl;
			}
			o<<""<<endl;
			break;
			
		case 4://................................................H4
			o<<"Quien de los Pueblerinos cometio el SINIESTRO: ";
	  i>>ESCPer;
	  if(ESCPer==4){
	  	o<<"Persona Correcta"<<endl;
			}
			else{
				o<<"Persona Incorrecta"<<endl;
			}
			o<<""<<endl;
			
	  o<<"En que Ubicacion del Pueblo se cometio el SINIESTRO: ";
	  i>>ESCEsc;
	  if(ESCEsc==5){
	  	o<<"Ubicacion Correcta"<<endl;
			}
			else{
				o<<"Ubicacion Incorrecta"<<endl;
			}
	  o<<""<<endl;
	  
	  o<<"Con que Arma se Cometio el SINIESTRO: ";
	  i>>ESCArm;
			if(ESCArm==2){
	  	o<<"Arma Correcta"<<endl;
			}
			else{
				o<<"Arma Incorrecta"<<endl;
			}
			o<<""<<endl;
			
			o<<"Tus Conclusiones Finales Fueron  => ";
			if(ESCPer==4 && ESCEsc==5 && ESCArm==2){
				o<<"Correctas"<<endl;
				o<<"Felicitaciones eres un gran Investigador"<<endl;
			}
			else{
				o<<"Incorrectas"<<endl;
				o<<"Lo lamento te has equivocado"<<endl;
				o<<"El responsable sigue Suelto"<<endl;
			}
			o<<""<<endl;
			break;
			
		case 5://................................................H5
			o<<"Quien de los Pueblerinos cometio el SINIESTRO: ";
	  i>>ESCPer;
	  if(ESCPer==5){
	  	o<<"Persona Correcta"<<endl;
			}
			else{
				o<<"Persona Incorrecta"<<endl;
			}
			o<<""<<endl;	  

	  o<<"En que Ubicacion del Pueblo se cometio el SINIESTRO: ";
	  i>>ESCEsc;
	  if(ESCEsc==1){
	  	o<<"Ubicacion Correcta"<<endl;
			}
			else{
				o<<"Ubicacion Incorrecta"<<endl;
			}
	  o<<""<<endl;
	  
	  o<<"Con que Arma se Cometio el SINIESTRO: ";
	  i>>ESCArm;
			if(ESCArm==5){
	  	o<<"Arma Correcta"<<endl;
			}
			else{
				o<<"Arma Incorrecta"<<endl;
			}
			o<<""<<endl;
			
			o<<"Tus Conclusiones Finales Fueron  => ";
			if(ESCPer==5 && ESCEsc==1 && ESCArm==5){
				o<<"Correctas"<<endl;
				o<<"Felicitaciones eres un gran Investigador"<<endl;
			}
			else{
				o<<"Incorrectas"<<endl;
				o<<"Lo lamento te has equivocado"<<endl;
				o<<"El responsable sigue Suelto"<<endl;
			}
			o<<""<<endl;
			break;
	}
}

void ContinuarJuego(){//..........................................8
	o<<"Quieres continuar el juego Si(1) No(0)?"<<endl;
	i>>Continuar;
	Random=1+rand()%(5);
	system("cls");
}
