/*
 * Copyright (c) 2024 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 */
 
#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>

/* STEP 1.3 - Include the relevant headers for pwm*/


LOG_MODULE_REGISTER(Lesson4_Exercise1, LOG_LEVEL_INF);

/* STEP 2 - Define the desired PWM period and pulse */



/* STEP 3.1 - Get the node identifier for [] through its alias */


/* STEP 3.2 - Initialize and populate struct pwm_dt_spec */


int main(void)
{
    int err;

    /* STEP 3.3 - Check if the device is ready */

    
    /* STEP 4 - Control the LED with the control signal generated from the PWM */


    return 0;
}