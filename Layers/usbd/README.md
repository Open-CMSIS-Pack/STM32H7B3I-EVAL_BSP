Board: STMicroelectronics [STM32H7B3I-EVAL](https://www.st.com/en/evaluation-tools/stm32h7b3i-eval.html)
------------------------------------------

Device: **STM32H7B3LIHxQ**
System Core Clock: **72 MHz**

This setup is configured using **STM32CubeMX**, an interactive tool provided by STMicroelectronics for device configuration.
Refer to ["Configure STM32 Devices with CubeMX"](https://github.com/Open-CMSIS-Pack/cmsis-toolbox/blob/main/docs/CubeMX.md) for additional information.

### System Configuration

| System resource   | Setting
|:------------------|:--------------------------------------
| Heap              | 1 kB (configured in the STM32CubeMX)
| Stack (MSP)       | 1 kB (configured in the STM32CubeMX)

### STDIO mapping

**STDIO** is routed to Virtual COM port on the ST-Link (using **USART1** peripheral)

### CMSIS-Driver mapping

| CMSIS-Driver      | Peripheral
|:------------------|:--------------------------------------
| Driver_GPIO0      | GPIO
| Driver_MCI1       | SDMMC1
| Driver_USBD0      | USB_OTG_FS
| Driver_USBH1      | USB_OTG_HS

### CMSIS-Driver Virtual I/O mapping

| CMSIS-Driver VIO  | Physical resource
|:------------------|:--------------------------------------
| vioBUTTON0        | Button USER (PC13)
| vioLED0           | LED1 GREEN  (PG13)

## Board configuration
**Board setup**
  - Insure that the **JP29** jumper is bridged in the **5V_ST_LINK** position
  - Insure that the **JP21** and **JP20** jumpers are closed (USART1_RX and USART1_TX to ST-LINK/V2-1)
  - Check that the Boot selection switch **SW1** is in the **0** / default position
  - Connect a **USB micro-B cable** between the **STLK** connector and your **Personal Computer**
