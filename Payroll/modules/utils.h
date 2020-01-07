//
// Created by Gleb Bair on 1/4/20.
//

#ifndef PAYROLL_UTILS_H
#define PAYROLL_UTILS_H

/* Needed preprocessors */
#include <iostream>
#include <cstdbool>
#include <string>
#include "colors.h"
#include "meta.h"

/* Basic utils namespace */
namespace utils {
    /* Basic string validation */
    bool is_string_valid(std::string const& str, int __fp_len=0) {
        if (str.length() == __fp_len)
            return false;
        if (std::string(str).front() == '\\' || std::string(str).front() == '/')
            return false;
        return str.find("\\cmd") == std::string::npos;
    }

    /* Prints out the "Fail" status message */
    void print_status_error(std::string const& status) {
        if (is_string_valid(status)) {
            std::cout << MINUS << WS << status << RST << std::endl;
        } else { return; }
    }

    /* Prints out the "Everything is okay" message */
    void print_status_okay(std::string const& status) {
        if (is_string_valid(status)) {
            std::cout << PLUS << WS << status << RST << std::endl;
        } else {
            print_status_error(ERROR_STRING_ENTRY);
            return;
        }
    }

    // Displays double values
    void display_double_values(std::string const& value, double data) {
        if (is_string_valid(value)) {
            std::cout << GSB << "Double value for \"" << value << "\" is: " << data << std::endl;
        } else { return; }
    }

    // Displays integer values
    void display_integer_values(std::string const& value, int data) {
        if (is_string_valid(value)) {
            std::cout << GSB << "Integer value for \"" << value << "\" is: " << data << std::endl;
        } else {
            print_status_error(ERROR_STRING_ENTRY);
            return;
        }
    }

    // This displays the pay-roll results
    void display_results(double result, double pay, double taxes, int hours) {
        std::cout << "\n" << GSB << "[ Payroll Results ] ------" << RSTB << std::endl;
        std::cout << WSB << "- Total hours worked ............................. " << YSB << hours << RSTB << std::endl;
        std::cout << WSB << "- Total pay-rate ................................ $" << YSB << pay << RSTB << std::endl;
        std::cout << WSB << "- Total Tax Deductibles ......................... $" << YSB << taxes << RSTB << std::endl;
        std::cout << WSB << "- Total Payroll ................................. $" << YSB << result << RSTB << "\n" << std::endl;
    }
}

#endif //PAYROLL_UTILS_H
