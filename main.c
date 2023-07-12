#include <stdio.h>
#include "pico/stdlib.h"
#include "lib/include/ads1115.h"

// #define I2C_PORT i2c1
// #define I2C_FREQ 400000
// #define ADS1115_I2C_ADDR 0x48
// const uint8_t SDA_PIN = 6;
// const uint8_t SCL_PIN = 7;
// const uint LED_PIN = PICO_DEFAULT_LED_PIN;
// struct ads1115_adc adc;

   
// void blink(){

//     gpio_put(LED_PIN, 1);
//     printf("ON\n");
//     sleep_ms(500);
//     gpio_put(LED_PIN, 0);
//     printf("OFF\n");
//     sleep_ms(750);
// }
int main() {
    stdio_init_all();

    // Initialise I2C
    // i2c_init(I2C_PORT, I2C_FREQ);
    // gpio_set_function(SDA_PIN, GPIO_FUNC_I2C);
    // gpio_set_function(SCL_PIN, GPIO_FUNC_I2C);
    // gpio_pull_up(SDA_PIN);
    // gpio_pull_up(SCL_PIN);
    // gpio_init(LED_PIN);
    // gpio_set_dir(LED_PIN, GPIO_OUT);
    // // Initialise ADC
    // ads1115_init(I2C_PORT, ADS1115_I2C_ADDR, &adc);
    
    // // Modify the default configuration as needed. In this example the
    // // signal will be differential, measured between pins A0 and A3,
    // // and the full-scale voltage range is set to +/- 4.096 V.
    // ads1115_set_input_mux(ADS1115_MUX_DIFF_0_3, &adc);
    // ads1115_set_pga(ADS1115_PGA_4_096, &adc);
    // ads1115_set_data_rate(ADS1115_RATE_475_SPS, &adc);

    // // Write the configuration for this to have an effect.
    // ads1115_write_config(&adc);

    // // Data containers
    // float volts0, volts1;
    // uint16_t adc_value0, adc_value1, adc_value2, adc_value3;

    while (1) {

        printf("Hello World!\n");
        // Read a value, convert to volts, and print.
    //     ads1115_read_adc(&adc_value0, &adc);
    //     // ads1115_read_adc(&adc_value1, &adc);
    //     // volts0 = adc.readADC_SingleEnded(0);
    //     volts0 = ads1115_raw_to_volts(adc_value0, &adc);
    //     // volts1 = ads1115_raw_to_volts(adc_value1, &adc);
    //     // printf("ADC: %u  Voltage: %f\n", adc_value, volts);
    //     printf("Voltage_1: %3.1f\n",volts0);
    //     // printf("Voltage_2: %3.1f\n",volts1);
        sleep_ms(1000);
    //     blink();
    }
}