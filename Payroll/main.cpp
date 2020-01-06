#include <iostream>
#include "modules/help.h"
#include "modules/payroll.h"

/*
 * A very simple payroll program written in C++. The user must supply this
 * program with either a binary 1 or 0. If the user supplies this program
 * with a binary 1, then the users input values will be displays after the
 * user successfully inputs them. If the user enters a binary 0, then the
 * entered values will not be displayed. As mentioned before, this is a very
 * simple module that is level 1 in the Trident Program.
 *
 * This program isn't perfect, but what program is? We are humans, we can't
 * be fully impressed by anything...So, why bother writing a FULLY decent
 * basic payroll program when you can add a "seg_fault" so that other
 * programmers can try to find what the **** is wrong with your program?
 * Some can catch it on their first glance, others have to ask...not me
 * please don't ask me...
 *
 * @author: S1lent
 * @version: 1.0
 */

int main(int argc, char *argv[]) {
    // Initialize the payroll calculator driver
    calc::Calulcator pay;

    try {
        if (argc == 0 || std::string(argv[1]) == "") {
            // Just print the program usage.
            help::print_basic_usage("./payroll [1|0]");
            return 1;
        }
        else {
            // -h help switch - this may or may not work, but, it's not my problem now...
            if (std::string(argv[1]) == "-h" || std::string(argv[1]) == "--help") {
                help::print_full_help("./payroll [1|0]", "1\t\tDisplay the values set by user\n0\t\tDo not display"
                                                         " values set by the user");
                return 0;
            }

            if (std::string(argv[1]) == "1" || std::string(argv[1]) == "true") {
                // Display the values supplied by the user
                pay.calculate_payroll(true);
                return 0;
            }
            else if (std::string(argv[1]) == "0" || std::string(argv[1]) == "false") {
                // Don't display the values supplied by the user
                pay.calculate_payroll(false);
                return 0;
            }
        }
    }
    catch (...) {
        // Print the full program usage here
        help::print_full_help("./payroll [1|0]", "1\t\tDisplay the values set by user\n0\t\tDo not display"
                                                 " values set by the user");
        return 1;
    }
}
