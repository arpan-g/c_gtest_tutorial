#include <gtest/gtest.h>
#include "subtract.h"
extern "C" {


		
}

class subTests: public testing::Test{

void SetUp() {
		
	}

	void TearDown() {
	}
	
};

TEST_F(subTests,subtestcase){

int res = diff_2_num(2,2);

ASSERT_EQ(0,res);

	
}
