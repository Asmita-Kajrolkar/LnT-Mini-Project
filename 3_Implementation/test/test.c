#include "unity.h"
#include "header.h"

/* Modify these two lines according to the project */
#define PROJECT_NAME "LnT-Mini-Project"

/* Prototypes for all the test functions */
void test_bmi(void);
void test_bmr(void);
void test_calorie_requirement(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_bmi);
  RUN_TEST(test_bmr);
  RUN_TEST(test_calorie_requirement);
 

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_bmi(void) {
  TEST_ASSERT_EQUAL(10384, bmi(150,40));
  TEST_ASSERT_EQUAL(103846, bmi(160,50));
  TEST_ASSERT_EQUAL(1038461, bmi(200,70));
  TEST_ASSERT_EQUAL(10384616, bmi(250,90));
  TEST_ASSERT_EQUAL(0, bmi(0,40));
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(15000, bmi(2000,50));
}

void test_bmr(void) {
  TEST_ASSERT_EQUAL(121306, bmr(150,40,25));
  TEST_ASSERT_EQUAL(0, bmr(160,50,50));
  TEST_ASSERT_EQUAL(2593743, bmr(200,70,46));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(100,bmr(2000,50,80));
}

void test_calorie_requirement(void) {
  TEST_ASSERT_EQUAL(0, calorie_requirement(1560,2));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(0, calorie_requirement(2000,6));
}


