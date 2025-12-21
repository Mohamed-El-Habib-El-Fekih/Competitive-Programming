#include "testlib.h"

using namespace std;

int main(int argc, char *argv[]) {
    registerValidation(argc, argv);

    inf.readToken("[a-z]{1,1000}", "s");
    inf.readEoln();
    inf.readToken("[a-z]{1,1000}", "s1");
    inf.readEoln();
    inf.readEof();
}