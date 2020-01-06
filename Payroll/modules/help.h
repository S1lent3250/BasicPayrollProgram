//
// Created by Gleb Bair on 1/4/20.
//

#ifndef PAYROLL_HELP_H
#define PAYROLL_HELP_H

/* Include needed preprocessors */
#include <iostream>
#include <string>
#include "utils.h"

/* Help namespace */
namespace help {
    /* This function prints the basic program usage */
    void print_basic_usage(std::string const& usage) {
        if (utils::is_string_valid(usage)) {
            if (std::string(usage).find("Usage") != std::string::npos) {
                std::cout << WSB << "  " << usage << RSTB << std::endl;
                return;
            }
            else {
                std::cout << WSB << "   Usage = " << usage << RSTB << std::endl;
                return;
            }
        }
        else {
            utils::print_status_error("Invalid usage detected, try again...");
            return;
        }
    }

    /* Print the full program help - figure THIS out lol - why doesn't it show the 'help' */
    void print_full_help(std::string const& usage, std::string const& help, double version=1.0) {
        if (utils::is_string_valid(usage)) {
            if (std::string(usage).find("Usage")) {
                if (version > 0) {
                    std::cout << WSB << usage << " - Version: " << version << RSTB << "\n" << std::endl;
                    // Validate the help portion of this function
                    if (utils::is_string_valid(help)) {
                        std::cout << YSB << help << RSTB << "\n" << std::endl;
                    } else { utils::print_status_error("Invalid \"help\" module..."); return; }
                } else { utils::print_status_error("Invalid version ID..."); return; }
            } else {
                if (version > 0) {
                    std::cout << WSB << "  Usage = " << usage << " - Version: " << version << RSTB << "\n" << std::endl;
                    // Validate the help portion of this function
                    if (utils::is_string_valid(help)) {
                        std::cout << YSB << help << RSTB << "\n" << std::endl;
                    } else { utils::print_status_error("Invalid \"help\" module..."); return; }
                } else { utils::print_status_error("Invalid version ID..."); return; }
            }
        } else {
            utils::print_status_error("Invalid usage details..."); return;
        }
    }
}

#endif //PAYROLL_HELP_H
