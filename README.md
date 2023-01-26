# BootloaderMedium

## Brief
A frimware upgrade medium based on STM32373xx to upload frimware through bootloader to the host device STMF405. 

## Features / Acceptance Criteria

On STM32F373, implement the function of controlling software loaded into another MCU (STM32F405) using the built-in STM32 USART bootloader.
  1. Connect the pins of two STM32 necessary for the implementation of this function. 
  2. Write firmware for the STM32F373, which, when turned on, puts the STM32F405 into bootloader mode, checks the integrity of the firmware in the STM32F405 using the CRC16 algorithm, and in case of a successful check, starts the STM32F405. The checksum and firmware size are also stored in the FLASH memory of the STM32F405. Any development environment, C language.
> На STM32F373 реализовать функцию контроля ПО, загруженного в другой МК(STM32F405), используя встроенный USART загрузчик STM32. Т.е. нужно: 1) Соединить необходимые для реализации данной функции пины двух STM32.  2) Написать прошивку для STM32F373, которая при включении переводит STM32F405 в режим загрузчика, производит проверку целостности прошивки в STM32F405, используя алгоритм CRC16, и в случае успешной проверки выполняет старт STM32F405. Контрольная сумма и размер прошивки хранится также во FLASH памяти STM32F405. Среда разработки любая, язык Си.  

# Pins configratuion
![image](https://user-images.githubusercontent.com/53513242/214859591-9d7ec5c1-f8b4-4c53-92e1-6d56b6459885.png)

|Medium (F3)|Host (F4)|Role|
|-|-|-|
|PA8|BOOT0| Switching boot mode on host (Pulled-Down)|
|PA9( UART1 Tx )|BL Rx| Medium Frimware transmission line|
|PA10(( UART1 Rx )|BL Tx| Medium Frimware recive line|
