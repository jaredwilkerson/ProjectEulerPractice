#ifndef _PROBLEMFOURTEST_H_
#define _PROBLEMFOURTEST_H_

#include <cppunit/extensions/HelperMacros.h>
#include "../ProblemFour.h"


class ProblemFourTest : public CPPUNIT_NS::TestFixture {
	CPPUNIT_TEST_SUITE( ProblemFourTest );
	CPPUNIT_TEST( defaultTest );
	CPPUNIT_TEST_SUITE_END();

	public:
	void setUp();
	void tearDown();
	void defaultTest();

	private:
	ProblemFour* pf;
};

#endif 
