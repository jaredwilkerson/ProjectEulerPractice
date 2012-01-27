#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestResult.h>
#include <cppunit/BriefTestProgressListener.h>

int main( int argc, char **argv)
{
	CppUnit::TextUi::TestRunner runner;

	// informs test-listener about testresults
	CppUnit::TestResult testresult;

	// register listener for collecting the test-results
	CppUnit::TestResultCollector collectedresults;
	testresult.addListener (&collectedresults);

	// register listener for per-test progress output
	CppUnit::BriefTestProgressListener progress;
	testresult.addListener (&progress);

	CppUnit::TestFactoryRegistry &registry = CppUnit::TestFactoryRegistry::getRegistry();
	runner.addTest( registry.makeTest() );

	runner.run( testresult );
	// output results in compiler-format
	CppUnit::CompilerOutputter compileroutputter (&collectedresults, std::cerr);
	compileroutputter.write ();
	return collectedresults.wasSuccessful();
}
