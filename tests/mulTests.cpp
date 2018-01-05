#include <gtest/gtest.h>
#include "multiplication.h"
extern "C" {


		
}

class mulTests: public testing::Test{

void SetUp() {
		
	}

	void TearDown() {
	}
	
};

TEST_F(mulTests,multestcase){

int res = product_2_int(2,2);

ASSERT_EQ(4,res);

	
}
