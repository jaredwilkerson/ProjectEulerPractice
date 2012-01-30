#include "ProblemFourTest.h"


CPPUNIT_TEST_SUITE_REGISTRATION( ProblemFiveTest );

void ProblemFiveTest::setUp(){
	pf = new ProblemFive();
}

void ProblemFiveTest::tearDown(){
	delete pf;
}


void ProblemFiveTest::primeFactorizeTest(){
	std::vector<int> testVec = std::vector<int>();
	testVec = pf->vectorizeCanidate( 1234 );

	CPPUNIT_ASSERT( 4 == testVec.size() );
	CPPUNIT_ASSERT( 4 == testVec[0] &&
		        3 == testVec[1] &&
			2 == testVec[2] &&
			1 == testVec[3] );		
}
