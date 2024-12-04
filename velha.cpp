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

bool venceuLinha(int velha[3][3], int jogador){
	for(int j = 0; j < 3; j++){
		if(velha[j][0] == jogador && velha[j][1] == jogador && velha[j][2] == jogador){
			return true;
		}
	}
	return false;
}

bool venceuColuna(int velha[3][3], int jogador){
	for(int j = 0; j < 3; j++){
		if(velha[0][j] == jogador && velha[1][j] == jogador && velha[2][j] == jogador){
			return true;
		}
	}
	return false;
}

bool venceuDiagonalPrincipal(int velha[3][3], int jogador){
	if(velha[0][0] == jogador && velha[1][1] == jogador && velha[2][2] == jogador){
		return true;
	}
	return false;
}

bool venceuDiagonalSecundaria(int velha[3][3], int jogador){
	if(velha[0][2] == jogador && velha[1][1] == jogador && velha[2][0] == jogador){
		return true;
	}
	return false;
}

bool vencedorX( int velha[3][3] ){
	if(venceuLinha(velha, 1) || venceuColuna(velha, 1) || 
		venceuDiagonalPrincipal(velha, 1) || venceuDiagonalSecundaria(velha, 1)){
			return true;
	}
	return false;

}

bool vencedorO( int velha[3][3] ){
	if(venceuLinha(velha, 2) || venceuColuna(velha, 2) || 
		venceuDiagonalPrincipal(velha, 2) || venceuDiagonalSecundaria(velha, 2) ){
		return true;
	}
	return false;
}

bool empate(int velha[3][3]){
	if(vencedorX(velha) || vencedorO(velha)){
		return false;
	}
	return true;
}

bool emAndamento(int velha[3][3]){
	int count = 0;
	int countX = 0;
	int countO = 0; 
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(velha[i][j] == 0){
				count ++;
			}
			else if(velha[i][j] == 1){
				countX ++;
			}
			else if(velha[i][j] == 2){
				countO ++;
			}
		}
	}

	if(count > countX && count > countO){
		return true;
	}
	return false;
}

bool jogoImpossivel(int velha[3][3] ){
	int countX = 0;
	int countO = 0; 
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(velha[i][j] == 1){
				countX ++;
			}
			else if(velha[i][j] == 2){
				countO ++;
			}
		}
	}
	int diferenca = countX - countO;
	if(diferenca > 1){
		return true;
	}
	else if(vencedorX(velha) && vencedorO(velha)){
		return true;
	}
	return false;
}

int VerificaVelha( int velha[3][3] )
{
	if(jogoImpossivel(velha)){
		return 4;
	}
	else if(emAndamento(velha)){
		return 3;
	}
	else if(empate(velha)){
		return 2;
	}
	else if(vencedorX(velha)){
		return 1;
	}
	else if(vencedorO(velha)){
		return 0;
	}
	
	return false;
}






