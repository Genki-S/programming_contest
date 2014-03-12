#include <iostream>
#include <string>
#include <vector>
using namespace std;
static const double EPS = 1e-10;
#define FOR(i, b, e) for (int i = (b); i < (e); ++i)
#define REP(i, n) FOR(i, 0, n)
#define dump(x) cerr << " [L" << __LINE__ << "] " << #x << " = " << (x) << endl;
#define dumpv(x) cerr << " [L:" << __LINE__ << "] " << #x << " = "; REP(q, (x).size()) cerr << (x)[q] << " "; cerr << endl;
class $CLASSNAME$ {
	public:
	$RC$ $METHODNAME$($METHODPARMS$) {
		
	}
};
// BEGIN CUT HERE
$TESTCODE$
/*
$PROBLEMDESC$
*/
// END CUT HERE
