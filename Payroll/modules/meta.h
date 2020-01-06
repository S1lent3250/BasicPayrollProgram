//
// Created by Gleb Bair on 1/5/20.
//

#ifndef PAYROLL_META_H
#define PAYROLL_META_H

/* Just some simple messages that can be used instead of writing out the same thing over and over */
#ifndef PROMPTS
#define PROMPT_HOURS "Enter total hours worked: "
#define PROMPT_PAY_RATE "Enter your total pay-rate: $"
#define PROMPT_TAXES "Enter total tax deductibles (0 for no taxes): $"
#endif

/* Common error messages for this program */
#ifndef ERROR_MESSAGES
#define ERROR_HOURS_ENTRY "You have entered an invalid amount of hours, try again - Make sure its a number greater than 0 or 3"
#define ERROR_PAY_ENTRY "Invalid pay-rate, one cannot work for free or below $7.25"
#define ERROR_TAXES "Tax deductibles can b e $0.00 or above, but not below $0.00"
#define ERROR_STRING_ENTRY "Invalid string entry, please try again..."
#endif

#endif //PAYROLL_META_H
