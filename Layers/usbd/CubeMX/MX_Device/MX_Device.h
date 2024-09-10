/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 30/07/2024 09:18:09
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated with a generator out of the
 *               STM32CubeMX project and its generated files (DO NOT EDIT!)
 ******************************************************************************/

#ifndef MX_DEVICE_H__
#define MX_DEVICE_H__

/* MX_Device.h version */
#define MX_DEVICE_VERSION                       0x01000000


/*------------------------------ I2C2           -----------------------------*/
#define MX_I2C2                                 1

/* Filter Settings */
#define MX_I2C2_ANF_ENABLE                      1
#define MX_I2C2_DNF                             0

/* Pins */

/* I2C2_SCL */
#define MX_I2C2_SCL_Pin                         PH4
#define MX_I2C2_SCL_GPIO_Pin                    GPIO_PIN_4
#define MX_I2C2_SCL_GPIOx                       GPIOH
#define MX_I2C2_SCL_GPIO_Mode                   GPIO_MODE_AF_OD
#define MX_I2C2_SCL_GPIO_PuPd                   GPIO_PULLUP
#define MX_I2C2_SCL_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_I2C2_SCL_GPIO_AF                     GPIO_AF4_I2C2

/* I2C2_SDA */
#define MX_I2C2_SDA_Pin                         PH5
#define MX_I2C2_SDA_GPIO_Pin                    GPIO_PIN_5
#define MX_I2C2_SDA_GPIOx                       GPIOH
#define MX_I2C2_SDA_GPIO_Mode                   GPIO_MODE_AF_OD
#define MX_I2C2_SDA_GPIO_PuPd                   GPIO_PULLUP
#define MX_I2C2_SDA_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_I2C2_SDA_GPIO_AF                     GPIO_AF4_I2C2

/*------------------------------ SDMMC1         -----------------------------*/
#define MX_SDMMC1                               1

/* Mode */
#define MX_SDMMC1_MODE_SD                       1

/* Pins */

/* SDMMC1_CK */
#define MX_SDMMC1_CK_Pin                        PC12
#define MX_SDMMC1_CK_GPIO_Pin                   GPIO_PIN_12
#define MX_SDMMC1_CK_GPIOx                      GPIOC
#define MX_SDMMC1_CK_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC1_CK_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_CK_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_CK_GPIO_AF                    GPIO_AF12_SDMMC1

/* SDMMC1_CMD */
#define MX_SDMMC1_CMD_Pin                       PD2
#define MX_SDMMC1_CMD_GPIO_Pin                  GPIO_PIN_2
#define MX_SDMMC1_CMD_GPIOx                     GPIOD
#define MX_SDMMC1_CMD_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SDMMC1_CMD_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC1_CMD_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_CMD_GPIO_AF                   GPIO_AF12_SDMMC1

/* SDMMC1_D0 */
#define MX_SDMMC1_D0_Pin                        PC8
#define MX_SDMMC1_D0_GPIO_Pin                   GPIO_PIN_8
#define MX_SDMMC1_D0_GPIOx                      GPIOC
#define MX_SDMMC1_D0_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC1_D0_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D0_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D0_GPIO_AF                    GPIO_AF12_SDMMC1

/* SDMMC1_D1 */
#define MX_SDMMC1_D1_Pin                        PC9
#define MX_SDMMC1_D1_GPIO_Pin                   GPIO_PIN_9
#define MX_SDMMC1_D1_GPIOx                      GPIOC
#define MX_SDMMC1_D1_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC1_D1_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D1_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D1_GPIO_AF                    GPIO_AF12_SDMMC1

/* SDMMC1_D2 */
#define MX_SDMMC1_D2_Pin                        PC10
#define MX_SDMMC1_D2_GPIO_Pin                   GPIO_PIN_10
#define MX_SDMMC1_D2_GPIOx                      GPIOC
#define MX_SDMMC1_D2_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC1_D2_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D2_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D2_GPIO_AF                    GPIO_AF12_SDMMC1

/* SDMMC1_D3 */
#define MX_SDMMC1_D3_Pin                        PC11
#define MX_SDMMC1_D3_GPIO_Pin                   GPIO_PIN_11
#define MX_SDMMC1_D3_GPIOx                      GPIOC
#define MX_SDMMC1_D3_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC1_D3_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC1_D3_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D3_GPIO_AF                    GPIO_AF12_SDMMC1

/*------------------------------ SPI4           -----------------------------*/
#define MX_SPI4                                 1

/* Pins */

/* SPI4_MISO */
#define MX_SPI4_MISO_Pin                        PE5
#define MX_SPI4_MISO_GPIO_Pin                   GPIO_PIN_5
#define MX_SPI4_MISO_GPIOx                      GPIOE
#define MX_SPI4_MISO_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI4_MISO_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI4_MISO_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_SPI4_MISO_GPIO_AF                    GPIO_AF5_SPI4

/* SPI4_MOSI */
#define MX_SPI4_MOSI_Pin                        PE6
#define MX_SPI4_MOSI_GPIO_Pin                   GPIO_PIN_6
#define MX_SPI4_MOSI_GPIOx                      GPIOE
#define MX_SPI4_MOSI_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI4_MOSI_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI4_MOSI_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_SPI4_MOSI_GPIO_AF                    GPIO_AF5_SPI4

/* SPI4_SCK */
#define MX_SPI4_SCK_Pin                         PE2
#define MX_SPI4_SCK_GPIO_Pin                    GPIO_PIN_2
#define MX_SPI4_SCK_GPIOx                       GPIOE
#define MX_SPI4_SCK_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_SPI4_SCK_GPIO_PuPd                   GPIO_NOPULL
#define MX_SPI4_SCK_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_SPI4_SCK_GPIO_AF                     GPIO_AF5_SPI4

/*------------------------------ USART1         -----------------------------*/
#define MX_USART1                               1

/* Virtual mode */
#define MX_USART1_VM                            VM_ASYNC
#define MX_USART1_VM_ASYNC                      1

/* Pins */

/* USART1_RX */
#define MX_USART1_RX_Pin                        PB15
#define MX_USART1_RX_GPIO_Pin                   GPIO_PIN_15
#define MX_USART1_RX_GPIOx                      GPIOB
#define MX_USART1_RX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART1_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART1_RX_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_USART1_RX_GPIO_AF                    GPIO_AF4_USART1

/* USART1_TX */
#define MX_USART1_TX_Pin                        PB14
#define MX_USART1_TX_GPIO_Pin                   GPIO_PIN_14
#define MX_USART1_TX_GPIOx                      GPIOB
#define MX_USART1_TX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART1_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART1_TX_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_USART1_TX_GPIO_AF                    GPIO_AF4_USART1

/*------------------------------ USB_OTG_HS     -----------------------------*/
#define MX_USB_OTG_HS                           1

/* Handle */
#define MX_USB_OTG_HS_HANDLE                    hpcd_USB_OTG_HS

/* Virtual mode */
#define MX_USB_OTG_HS_VM                        Device_Only_FS
#define MX_USB_OTG_HS_Device_Only_FS            1

/* Pins */

/* USB_OTG_HS_DM */
#define MX_USB_OTG_HS_DM_Pin                    PA11
#define MX_USB_OTG_HS_DM_GPIO_Pin               GPIO_PIN_11
#define MX_USB_OTG_HS_DM_GPIOx                  GPIOA
#define MX_USB_OTG_HS_DM_GPIO_Mode              GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_DM_GPIO_PuPd              GPIO_NOPULL
#define MX_USB_OTG_HS_DM_GPIO_Speed             GPIO_SPEED_FREQ_HIGH

/* USB_OTG_HS_DP */
#define MX_USB_OTG_HS_DP_Pin                    PA12
#define MX_USB_OTG_HS_DP_GPIO_Pin               GPIO_PIN_12
#define MX_USB_OTG_HS_DP_GPIOx                  GPIOA
#define MX_USB_OTG_HS_DP_GPIO_Mode              GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_DP_GPIO_PuPd              GPIO_NOPULL
#define MX_USB_OTG_HS_DP_GPIO_Speed             GPIO_SPEED_FREQ_HIGH

/* USB_OTG_HS_ID */
#define MX_USB_OTG_HS_ID_Pin                    PA10
#define MX_USB_OTG_HS_ID_GPIO_Pin               GPIO_PIN_10
#define MX_USB_OTG_HS_ID_GPIOx                  GPIOA
#define MX_USB_OTG_HS_ID_GPIO_Mode              GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ID_GPIO_PuPd              GPIO_NOPULL
#define MX_USB_OTG_HS_ID_GPIO_Speed             GPIO_SPEED_FREQ_LOW
#define MX_USB_OTG_HS_ID_GPIO_AF                GPIO_AF10_OTG1_HS

#endif  /* MX_DEVICE_H__ */
