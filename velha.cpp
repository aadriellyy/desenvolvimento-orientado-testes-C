/**
 * \file  velha.cpp
 */

 
#include "velha.hpp"

/** 
 * @brief verifica situacao do jogo da velha  
 * @author Programador 
 * @param  velha descreve o parametro
 * 
 *  Descrever o que a funcao faz
 */ 

bool vencedorX( int velha[3][3] ){
	for(int j; j < 3; j++){
		if(velha[j][0] == 1 && velha[j][1] == 1 && velha[j][2] == 1){
			return true;
		}
	}
	return false;
}

int VerificaVelha( int velha[3][3] )
{
	if(vencedorX(velha) == true){
		return 1;
	}
	else{
		return 0;
	}
}






