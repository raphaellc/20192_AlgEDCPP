#include "stdafx.h"
#include "CppUnitTest.h"
#include "../VetorDinamico/VetorDinamico.h"
#include "../VetorDinamico/VetorDinamico.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTestVDCriacao)
	{
		VetorDinamico * vd = new VetorDinamico();
	public:
		TEST_METHOD_INITIALIZE(init)
		{
			// method initialization code
		}
		
		TEST_METHOD(QtdElementosInit)

		{
			// TODO: insira seu código de teste aqui
			
			
			int num_elementos = 0;
			Assert::AreEqual(num_elementos,vd->obterNumElementos());

		}
		TEST_METHOD(TamanhoInit)
		{
			int tamanho_inicial = 5;
			Assert::AreEqual(tamanho_inicial, vd->obterTamanho());
		}
		

	};
	TEST_CLASS(VD_AdiçãoValoresAte5)
	{
		//Arrange
		VetorDinamico * vd = new VetorDinamico();
		TEST_METHOD_INITIALIZE(AddCincoValores)
		{
			//Act
			vd->adicionaValor(10);
			vd->adicionaValor(20);
			vd->adicionaValor(30);
			vd->adicionaValor(40);
			vd->adicionaValor(50);
		}
		TEST_METHOD(VD_NElementos)
		{
			//Assert
			int num_elementos = 5;
			Assert::AreEqual(num_elementos, vd->obterNumElementos());
		}
		TEST_METHOD(VD_TAMANHO)
		{
			//Assert
			int tam = 5;
			Assert::AreEqual(tam, vd->obterTamanho());
		}
	};
	TEST_CLASS(VD_AdiçãoValoresMaior5)
	{
		//Arrange
		VetorDinamico * vd = new VetorDinamico();
		TEST_METHOD_INITIALIZE(AddSeteValores)
		{
			//Arrange
			vd->adicionaValor(10);
			vd->adicionaValor(20);
			vd->adicionaValor(30);
			vd->adicionaValor(40);
			vd->adicionaValor(50);
			vd->adicionaValor(60);
			vd->adicionaValor(70);
		}
		TEST_METHOD(VD_NElementos)
		{
			//Assert
			int num_elementos = 7;
			Assert::AreEqual(num_elementos, vd->obterNumElementos());
		}
		TEST_METHOD(VD_TAMANHO)
		{
			//Assert
			int tam = 10;
			Assert::AreEqual(tam, vd->obterTamanho());
		}
	};
	TEST_CLASS(VD_RemocaoValores)
	{
		VetorDinamico * vd = new VetorDinamico();
		TEST_METHOD_INITIALIZE(InsereValores)
		{
			vd->adicionaValor(10);
			vd->adicionaValor(20);
			vd->adicionaValor(30);
			vd->adicionaValor(40);
			vd->adicionaValor(50);
			vd->adicionaValor(60);
			vd->adicionaValor(70);
			vd->adicionaValor(80);
		}
		TEST_METHOD(VD_RemoveUmValor)
		{
			int num_elementos = 7;
			//Act
			vd->removeValor(0);
			//Assert
			Assert::AreEqual(num_elementos, vd->obterNumElementos());
			//Assert::AreEqual(10, vd->removeValor(0));

		}
		TEST_METHOD(VD_RemoveUmValor1)
		{
			//Act
			//Assert::AreEqual(num_elementos, vd->obterNumElementos());
			Assert::AreEqual(20, vd->removeValor(1));
		}
		
	};
	TEST_CLASS(VD_realoca) {
		VetorDinamico * vd = new VetorDinamico();
		TEST_METHOD_INITIALIZE(InsereValores)
		{
			vd->adicionaValor(10);
			vd->adicionaValor(20);
			vd->adicionaValor(30);
			vd->adicionaValor(40);
			vd->adicionaValor(50);
			vd->adicionaValor(60);
			vd->adicionaValor(70);
			vd->adicionaValor(80);
		}
		TEST_METHOD(VD_ReduzTamanho)
		{
			int tam = 5;
			//Act
			vd->removeValor(0);
			vd->removeValor(1);
			vd->removeValor(6);
			vd->removeValor(5);
			//Assert
			Assert::AreEqual(tam, vd->obterTamanho());
		}
	};
	TEST_CLASS(VD_Quantidade)
	{
		VetorDinamico * vd = new VetorDinamico();
		TEST_METHOD_INITIALIZE(inicializaQuantidade)
		{
			vd->adicionaValor(10);
			vd->adicionaValor(20);
			vd->adicionaValor(30);
			vd->adicionaValor(40);
			vd->adicionaValor(50);
			vd->adicionaValor(60);
			vd->adicionaValor(70);
			vd->adicionaValor(80);
		}
		TEST_METHOD(quantidadeAdicao)
		{
			int elementos = 8;
			Assert::AreEqual(elementos, vd->obterNumElementos());
		}
		TEST_METHOD(VD_quantidadeRemocao)
		{
			int elementos = 4;
			//Act
			vd->removeValor(1);
			vd->removeValor(2);
			vd->removeValor(0);
			vd->removeValor(4);
			vd->removeValor(5);
			//Assert
			Assert::AreEqual(elementos, vd->obterNumElementos());
		}
	};
}