#include "headers/Letreros.hpp"
#include <iostream>
#include <sstream>

std::string Letreros::titulo() {
  constexpr auto titulo = R"(
	.------..------..------..------..------..------..------..------..------.
	|B.--. ||L.--. ||A.--. ||C.--. ||K.--. ||J.--. ||A.--. ||C.--. ||K.--. |
	| :(): || :/\: || (\/) || :/\: || :/\: || :(): || (\/) || :/\: || :/\: |
	| ()() || (__) || :\/: || :\/: || :\/: || ()() || :\/: || :\/: || :\/: |
	| '--'B|| '--'L|| '--'A|| '--'C|| '--'K|| '--'J|| '--'A|| '--'C|| '--'K|
	`------'`------'`------'`------'`------'`------'`------'`------'`------'
		)";

  std::ostringstream stream;
  stream << titulo;
  return stream.str();
}

std::string Letreros::menu() {
  constexpr auto menu = R"(
		.--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--.  
	/ .. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \ 
	\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/ / 
		\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /  
		/ /\/ /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /`' /\/ /\  
	/ /\ \/`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'\ \/\ \ 
	\ \/\ \                                                    /\ \/ / 
		\/ /\ \                    M  E  N  U                    / /\/ /  
		/ /\/ /                                                  \ \/ /\  
	/ /\ \/                                                    \ \/\ \ 
	\ \/\ \           1. JUGAR BLACKJACK                        /\ \/ /  
		\/ /\ \        2. INSTRUCCIONES                          / /\/ /  
		/ /\/ /        3. SALIR                                  \ \/ /\  
	/ /\ \/                                                    \ \/\ \ 
	\ \/\ \.--..--..--..--..--..--..--..--..--..--..--..--..--./\ \/ / 
		\/ /\/ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ ../ /\/ /  
		/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\/ /\  
	/ /\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \/\ \ 
	\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `' / 
		`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'  
		)";
  std::ostringstream stream;
  stream << menu;
  return stream.str();
}

std::string Letreros::instrucciones() {
  system("clear");
  constexpr auto instrucciones = R"(
	                           I N S T R U C C I O N E S
	
	1. El objetivo es llegar a 21 puntos o acercarse lo más posible sin pasarse.
	2. Las cartas numéricas valen su valor nominal. Las figuras (J, Q, K) valen 
	   10 puntos cada una.
	3. El As puede valer 1 u 11, dependiendo de cuál sea más beneficioso.
	4. Comienza con dos cartas. Puedes pedir más cartas ("hit") o quedarte con 
	   las que tienes ("stand").
	5. Si tus cartas suman más de 21 puntos, pierdes automáticamente ("bust").
	6. Si decides "stand", el crupier revela sus cartas y toma cartas adicionales 
	   hasta llegar a al menos 17 puntos.
	7. Gana el que esté más cerca de 21 sin pasarse.

		                           ¡Buena suerte!
		)";
  std::ostringstream stream;
  stream << instrucciones;
  return stream.str();
}

std::string Letreros::ganar() {
  constexpr auto ganar = R"(
	 ____                        _         _ 
	/ ___| __ _ _ __   __ _ ___ | |____   | |
	| |  _ / _` | '_ \ / _` / __| __/ _ \ | |
	| |_| | (_| | | | | (_| \__ \ ||  __/ |_|
	 \____|\__,_|_| |_|\__,_|___/\__\___| (_)
		)";
  std::ostringstream stream;
  stream << ganar;
  return stream.str();
}

std::string Letreros::blackjack() {
  constexpr auto ganar = R"(
	 ____  _            _       _            _      _ 
	| __ )| | __ _  ___| | __  | | __ _  ___| | __ | |
	|  _ \| |/ _` |/ __| |/ /  | |/ _` |/ __| |/ / | |
	| |_) | | (_| | (__|   < |_| | (_| | (__|   <  |_|
	|____/|_|\__,_|\___|_|\_\___/ \__,_|\___|_|\_\ (_)
)";
  std::ostringstream stream;
  stream << ganar;
  return stream.str();
}

std::string Letreros::perder() {
  constexpr auto perder = R"(
	 ____  _              _           
	|  _ \(_) ___ _ __ __| | ___  ___ 
	| |_) | |/ _ \ '__/ _` |/ _ \/ __|
	|  __/| |  __/ | | (_| |  __/\__ \
	|_|   |_|\___|_|  \__,_|\___||___/ 
		)";
  std::ostringstream stream;
  stream << perder;
  return stream.str();
}

std::string Letreros::crupier_gana() {
  constexpr auto crupier_gana = R"(
		____                  _              ____                   
	 / ___|_ __ _   _ _ __ (_) ___ _ __   / ___| __ _ _ __   __ _ 
	| |   | '__| | | | '_ \| |/ _ \ '__| | |  _ / _` | '_ \ / _` |
	| |___| |  | |_| | |_) | |  __/ |    | |_| | (_| | | | | (_| |
	\____ |_|  \__,_ | .__/|_|\___|_|     \____|\__,_|_| |_|\__,_|
									 |_|                                          
	)";
  std::ostringstream stream;
  stream << crupier_gana;
  return stream.str();
}

std::string Letreros::empate() {
  constexpr auto empate = R"(
	 _____                       _       
	| ____|_ __ ___  _ __   __ _| |_ ___ 
	|  _| | '_ ` _ \| '_ \ / _` | __/ _ \
	| |___| | | | | | |_) | (_| | ||  __/
	|_____|_| |_| |_| .__/ \__,_|\__\___|
							    |_|                                    
		)";
  std::ostringstream stream;
  stream << empate;
  return stream.str();
}

std::string Letreros::gpj() {
  constexpr auto gpj = R"(
		___               _                          _                  
	/  _> _ _ ___ ___ <_>___ ___  ___  ___ _ _   | | _ _ ___ ___ _ _ 
	| <_/\ '_X_> / | '| <_> <_-< | . \/ . \ '_> _| || | / . <_> | '_>
	`____/_| <___\_|_.|_<___/__/ |  _/\___/_|   \__/`___\_. <___|_|  
															 |_|                    <___'        
		)";
  std::ostringstream stream;
  stream << gpj;
  return stream.str();
}