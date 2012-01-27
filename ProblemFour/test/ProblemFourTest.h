#ifndef _PROBLEMFOURTEST_H_
#define _PROBLEMFOURTEST_H_

#include <cppunit/extensions/HelperMacros.h>
#include "../ProblemFour.h"


class ProblemFourTest : public CppUnit::TestFixture {
	CPPUNIT_TEST_SUITE( ProblemFourTest );
	CPPUNIT_TEST( vectorizeTest );
	CPPUNIT_TEST( checkPalTest );
	CPPUNIT_TEST( largestPalTest );
	CPPUNIT_TEST_SUITE_END();

	public:
	void setUp();
	void tearDown();
	void vectorizeTest();
	void checkPalTest();
	void largestPalTest();

	private:
	ProblemFour* pf;
};

#endif 
