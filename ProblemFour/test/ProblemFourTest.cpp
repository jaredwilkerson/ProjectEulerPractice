
#include <cppunit/config/SourcePrefix.h>
#include "ProblemFourTest.h"


CPPUNIT_TEST_SUITE_REGISTRATION( ProblemFourTest );

void ProblemFourTest::setUp(){
	pf = new ProblemFour();
}

void ProblemFourTest::tearDown(){
	delete pf;
}

/**
 * A palindromic number reads the same both ways.
 * The largest palindrome made from the product of
 * two 2-digit numbers is 9009 = 91 99.
 */

void ProblemFourTest::vectorizeTest(){
	std::vector<int> testVec = std::vector<int>();
	testVec = pf->vectorizeCanidate( 1234 );

	CPPUNIT_ASSERT( 4 == testVec.size() );
	CPPUNIT_ASSERT( 4 == testVec[0] &&
		        3 == testVec[1] &&
			2 == testVec[2] &&
			1 == testVec[3] );		
}
void ProblemFourTest::checkPalTest(){
	CPPUNIT_ASSERT( pf->checkPal( 99 ));
	CPPUNIT_ASSERT( pf->checkPal(9009) );	
}
void ProblemFourTest::largestPalTest(){
	int largestPal = pf->largestPal(2);

	CPPUNIT_ASSERT( 9009 == largestPal );
}


