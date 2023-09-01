#
# (C) Copyright 2023
# Andriyanto Halim andriyanto.halim@gmail.com
# pwm.h
#
/**
 * @brief Initialize PWM module.
 *
 * @return return True on success.
 */
bool pwm_init(void);

/**
 * @brief Update PWM duty cycle
 *
 * @param[in] duty
 *
 * @return return True on success.
 */
bool pwm_update_duty_cycle(float duty);

/**
 * @brief De-Initialize PWM module.
 *
 * @return return True on succes.
 */
void pwm_deinit(void);