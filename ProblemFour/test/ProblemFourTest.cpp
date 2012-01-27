
#include <cppunit/config/SourcePrefix.h>
#include "ProblemFourTest.h"


CPPUNIT_TEST_SUITE_REGISTRATION( ProblemFourTest );

void ProblemFourTest::setUp(){
}

void ProblemFourTest::tearDown(){
	delete pf;
}

/**
 * A palindromic number reads the same both ways.
 * The largest palindrome made from the product of
 * two 2-digit numbers is 9009 = 91 99.
 */
void ProblemFourTest::defaultTest(){
	pf = new ProblemFour();
	int largestPal = pf->largestPal(2);
	CPPUNIT_ASSERT(9009 == largestPal);
}
