
/**
 * \file testa_velha.cpp
 */

#include "velha.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
  

TEST_CASE( "Testa vencedor O" ){
	int teste2[3][3] = {  {2, 2, 2},
						  {1, 0, 1},
						  {0, 1, 2} 	
					};
	REQUIRE( VerificaVelha(teste2) == 0 );
}

TEST_CASE( "Testa vencedor X") {
	int teste1[3][3]= {   { 2, 0, 1 }, 
	                      { 2, 0, 1 },
						  { 0, 2, 1 }
					  };
					  	  
    REQUIRE( VerificaVelha(teste1) == 1 );
} 

TEST_CASE( "Testa empate" ){
	int teste3[3][3] = {  {1, 2, 1},
						  {1, 1, 2},			  
						  {2, 1, 2} 
					};
	REQUIRE( VerificaVelha(teste3) == 2 );
}

TEST_CASE( "Testa em andamento" ){
	int teste4[3][3] = {  {0, 1, 2},
						  {0, 1, 0},			  
						  {1, 2, 0} 
					};
	REQUIRE( VerificaVelha(teste4) == 3 );
}


TEST_CASE( "Testa jogo impossível" ){
	int teste5[3][3] = {  {1, 1, 1},  
    					  {1, 0, 0}, 
                          {1, 2, 2}   
					};
	REQUIRE( VerificaVelha(teste5) == 4 );
}
 
