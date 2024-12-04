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

bool venceuLinha(int velha[3][3]){
	for(int j = 0; j < 3; j++){
		if(velha[j][0] == 1 && velha[j][1] == 1 && velha[j][2] == 1){
			return true;
		}
	}
	return false;
}

bool venceuColuna(int velha[3][3]){
	for(int j = 0; j < 3; j++){
		if(velha[0][j] == 1 && velha[1][j] == 1 && velha[2][j] == 1){
			return true;
		}
	}
	return false;
}

bool venceuDiagonalPrincipal(int velha[3][3]){
	if(velha[0][0] == 1 && velha[1][1] == 1 && velha[2][2] == 1){
		return true;
	}
	return false;
}

bool venceuDiagonalSecundaria(int velha[3][3]){
	if(velha[0][2] == 1 && velha[1][1] == 1 && velha[2][0] == 1){
		return true;
	}
	return false;
}

bool vencedorX( int velha[3][3] ){
	if(venceuLinha(velha) == true || venceuColuna(velha) == true || 
		venceuDiagonalPrincipal(velha) == true || venceuDiagonalSecundaria(velha) == true){
			return true;
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






