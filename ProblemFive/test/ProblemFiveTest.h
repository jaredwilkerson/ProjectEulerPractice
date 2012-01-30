#ifndef _PROBLEMFIVETEST_H_
#define _PROBLEMFIVETEST_H_

#include <cppunit/extensions/HelperMacros.h>
#include "../ProblemFive.h"


class ProblemFiveTest : public CppUnit::TestFixture {
	CPPUNIT_TEST_SUITE( ProblemFiveTest );
	CPPUNIT_TEST( primeFactorizeTest );
	CPPUNIT_TEST_SUITE_END();

	public:
	void setUp();
	void tearDown();
	void primeFactorizeTest();

	private:
	ProblemFive* pf;
};

#endif 
