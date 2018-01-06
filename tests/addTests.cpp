#include <gtest/gtest.h>
#include "addition.h"
extern "C" {
	
extern int some_global_variable; 
		
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

TEST_F(addTests,globalVariableTestCase){

setting_a_global_variable(2);
ASSERT_EQ(2,some_global_variable);

	
}

