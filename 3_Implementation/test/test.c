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
  TEST_ASSERT_EQUAL(17.8, bmi(40,150));
  TEST_ASSERT_EQUAL(19.5, bmi(50,160));
//   TEST_ASSERT_EQUAL(1038461, bmi(200,70));
//   TEST_ASSERT_EQUAL(10384616, bmi(250,90));
  TEST_ASSERT_EQUAL(35.7, bmi(70,140));
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(15000, bmi(2000,50));
}

void test_bmr(void) {
  TEST_ASSERT_EQUAL(1173.5, bmr(40,140,25));
  TEST_ASSERT_EQUAL(1188, bmr(50,160,50));
//   TEST_ASSERT_EQUAL(2593743, bmr(200,70,46));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(100,bmr(2000,50,80));
}

void test_calorie_requirement(void) {
  TEST_ASSERT_EQUAL(0, calorie_requirement(1560,2));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(0, calorie_requirement(2000,3));
}


