#include <gtest/gtest.h>
#include "division.h"
extern "C" {


		
}

class divTests: public testing::Test{

void SetUp() {
		
	}

	void TearDown() {
	}
	
};

TEST_F(divTests,divestcase){

int res = divide(2,2);

ASSERT_EQ(1,res);

	
}
