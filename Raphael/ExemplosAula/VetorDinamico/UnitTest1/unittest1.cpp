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
			Assert::AreEqual(num_elementos, vd->obterNumElementos());

		}
	};
}