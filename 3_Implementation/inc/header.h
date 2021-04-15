/**
 * @file header.h
 * @author Asmita Kajrolkar (asmitakajrolkar@gmail.com)
 * @brief Functions to perform Fitness Calculation
 * Body Mass Index Calculation
 * Basal Metabolic Rate calculation
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef HEADER_H
#define HEADER_H
#include<stdio.h>
#include<stdlib.h>

/**
 * @brief Error values for fitness calculator operations
 * 
 */
//typedef enum error_t {
  //  ERROR_DIV_BY_ZERO = -2, /**< Division by 0 error */
    //ERROR_NULL_PTR = -1,    /**< Null pointer dereferncing error */
  //  SUCCESS = 0             /**< Compute operation is successful */
//}error_t;


long int bmi(long int weight, long int height);

long int bmr(long int weight, long int height, int age);

long int calorie_requirement(long int bmr1, int selection);


/**
 * @brief TODO Add the remaining functions
 * 
 */

#endif //HEADER_H
