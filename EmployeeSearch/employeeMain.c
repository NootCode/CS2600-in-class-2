#include <string.h>
#include <stdlib.h>
#include "employee.h"

int main(void){
    PtrToEmployee searchEmployeeByNumber(PtrToConstEmployee ptr, int tableSize, long targetNumber);
    PtrToEmployee searchEmployeeByName(PtrToConstEmployee ptr, int tableSize, char * targetName);
    PtrToEmployee searchEmployeeByPhoneNumber(PtrToConstEmployee ptr, int tableSize, char *targetPhoneNumber);
    PtrToEmployee searchEmployeeBySalary(PtrToConstEmployee ptr, int tableSize, double targetSalary);

    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;

    PtrToEmployee matchPtr;
    
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 10);
    if(matchPtr != NULL){
        printf("Employee ID 1045 is in the record %d\n", matchPtr - EmployeeTable);
    }else{
        printf("Employee ID 1045 is NOT found in the record\n");
    }

    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat");
    if(matchPtr != NULL){
        printf("Employee Tony Bobcat is in the record %d\n", matchPtr - EmployeeTable);
    }else{
        printf("Employee Tony Bobcat is NOT found in the record\n");
    }
    printf("\n"); 
    matchPtr = searchEmployeeByPhoneNumber(EmployeeTable, EmployeeTableEntries, "213-555-1212");
    if(matchPtr != NULL){
        printf("Phone Number 213-555-1212 is in the record %d\n", matchPtr - EmployeeTable);
    }else{
        printf("Phone Number 213-555-1212 is NOT found in the record\n");
    }

    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 8.78);
    if(matchPtr != NULL){
        printf("8.78 salary is in the record %d\n", matchPtr - EmployeeTable);
    }else{
        printf("8.78 salary is NOT found in the record\n");
    }
    printf("\n"); 
    matchPtr = searchEmployeeByPhoneNumber(EmployeeTable, EmployeeTableEntries, "909-666-1235");
    if(matchPtr != NULL){
        printf("Phone Number 909-666-1235 is in the record %d\n", matchPtr - EmployeeTable);
    }else{
        printf("Phone Number 909-666-1235 is NOT found in the record\n");
    }

    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 15);
    if(matchPtr != NULL){
        printf("15 salary is in the record %d\n", matchPtr - EmployeeTable);
    }else{
        printf("15 salary is NOT found in the record\n");
    }


    return EXIT_SUCCESS;
}