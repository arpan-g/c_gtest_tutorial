#include <gtest/gtest.h>
#include "addition.h"
extern "C" {


		
}

class addTests: public testing::Test{

void SetUp() {
		
	}

	void TearDown() {
	}
	
};

TEST_F(addTests,addtestcase){

int res = sum_2_int(2,2);

ASSERT_EQ(4,res);

	
}
