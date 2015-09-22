/**
 * Unit Tests for Rando Test
**/

#include <gtest\gtest.h>
#include "rando.h"

/*  
	FUNCTIONS WE NEED TO TEST:

	bool shouldWorry(bool,bool,bool);
	bool isDivisbleBy(int,int);
	bool isPrime(int);
	int nearestToZero(int,int);
*/
 
class RandoTest : public ::testing::Test
{
	protected:
		RandoTest(){} //constructor runs before each test
		virtual ~RandoTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(RandoTest, allChildrenSmile)
{
	Rando rando;
	ASSERT_TRUE( rando.shouldWorry(true,true,true) );
}

TEST(RandoTest, IsPrime_PimeNum)
{
	Rando rando;
	ASSERT_TRUE(rando.isPrime(4));
}

TEST(RandoTest, IsPrime_NonPimeNum)
{
	Rando rando;
	ASSERT_FALSE(rando.isPrime(5));
}

TEST(RandoTest, IsPrime_Zero)
{
	Rando rando;
	ASSERT_FALSE(rando.isPrime(0));
}
