#include<string>
#include"VM.h"


#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"


TEST_CASE("testing the test function") {
    CHECK(test("test") == "test");
}

