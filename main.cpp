/*
 * main.cpp
 *
 *  Created on: 18/05/2018
 *      Author: aet
 */

#include <iostream>
#include "student.h"

using namespace std;

int main(){
	Student student1;
	Student student2("Pedro");
	const Student student3("João", 30, 2017); //constant student that cannot be changed
	Student student4("João", 30);
	student1.setNumber(-1); //Não altera mantém o valor original da construção
	//cout << student1.number; //Erro: Não permite aceder a um membro privado de fora da classe
	//student1.number =10;
	cout << student1.getNumber();
	student2.setNumber(30); //Altera porque é um número válido, de acordo com a validação da função membro
	cout << student2.getNumber();
    //Student3.setNumber(10); //Porque dá erro?
	Student Student5("Pedro"); //outros parâmetros da função são os por omissão

	cout << "Please verify the order by which all stdudents are destroyed...";
	return 0;
}
