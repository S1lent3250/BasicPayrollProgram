//
// Created by Gleb Bair on 1/5/20.
//

#ifndef PAYROLL_PAYROLL_H
#define PAYROLL_PAYROLL_H

/* Include needed preprocessors */
#include <iostream>
#include <string>
#include "colors.h"
#include "utils.h"
#include "meta.h"

/* Main calculator namespace */
namespace calc {
    /* Initialize the calculator "object" */
    class Calulcator {
        // Data fields - bare-bones variable initializers
        private:
            double result, pay, taxes;
            int hours;

        // Main calculator function
        public:
            void calculate_payroll(bool __show_values) {
                // Prompt the user to enter his or her total hours worked. The std::cin
                // will be used to get the and store the integer input for hours in the
                // hours variable which is private, but that doesn't matter much if it
                // is private, because this doubles as binary and open source.
                std::cout << YSB << PROMPT_HOURS << RSTB;
                std::cin >> hours;

                // If the __show_values boolean switch is set to true, then display the
                // value entered for the hours prompt, if not, then don't display the
                // value
                if (__show_values) {
                    utils::display_integer_values("Hours", hours);
                }

                // Now, while the user enters anything below 0 or a value that is equal
                // to 0 itself or anything below a 3, then continue to display the hours
                // prompt to the user until the correct value is entered. This is done for
                // all prompts
                while (hours < 0 || hours < 3) {
                    utils::print_status_error(ERROR_HOURS_ENTRY);
                    std::cout << YSB << PROMPT_HOURS << RSTB;
                    std::cin >> hours;
                }

                // Prompt the user to enter hir or her total pay-rate. Make sure that pay-rate
                // if above 0 and above $7.25 (minimum wage).
                std::cout << YSB << PROMPT_PAY_RATE << RSTB;
                std::cin >> pay;

                if (__show_values) {
                    utils::display_double_values("Pay-Rate", pay);
                }

                while (pay < 0.00 || pay < 7.25) {
                    utils::print_status_error(ERROR_PAY_ENTRY);
                    std::cout << YSB << PROMPT_PAY_RATE << RSTB;
                    std::cin >> pay;
                }

                // Prompt the user to enter his or her tax deductibles. The validation
                // is different for this one because taxes can be $0.00, but, they cannot
                // be a value BELOW $0.00.
                std::cout << YSB << PROMPT_TAXES << RSTB;
                std::cin >> taxes;

                if (__show_values) {
                    utils::display_double_values("Tax Deductibles", taxes);
                }

                while (taxes < 0.00) {
                    utils::print_status_error(ERROR_TAXES);
                    std::cout << YSB << PROMPT_TAXES << RSTB;
                    std::cin >> taxes;
                }

                // Now, set the result double value to match the information supplied
                // by the user above. If the user entered 0 or 0.00 for his or her taxes
                // then, the result variable should be set to result = pay * hours. If
                // the user has tax deductibles, the result variable should be set to
                // result = (pay * hours) - taxes
                if (taxes == 0.00) {
                    result = pay * hours;
                } else { result = (pay * hours) - taxes; }

                // Display the result banner here.
                
            }
    };
}

#endif //PAYROLL_PAYROLL_H
