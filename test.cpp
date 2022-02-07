#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE ( "Sign testing", "[sign]") {
  REQUIRE( Sign(6) == 1 ); //testing + 
  REQUIRE( Sign(-1000) == -1 ); //testing -
  REQUIRE( Sign(0) == 0 ); //testing 0
  REQUIRE( Sign(1234892379248) == 1 ); //testing + 
  REQUIRE( Sign(-2039873628719) == -1 ); //testing -
}

TEST_CASE("RemoveTwos is computed", "[RemoveTwos]")
{
    REQUIRE( RemoveTwos(16) == 1);
    REQUIRE( RemoveTwos(7) == 7);
    REQUIRE( RemoveTwos(13) == 13);
    REQUIRE( RemoveTwos(26) == 13);
}
