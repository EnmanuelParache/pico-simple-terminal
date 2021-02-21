# pico
Raspberry Pi Pico stuff

# Simple terminal
Example of a simple usb terminal

## Configura the project
### Create build directory
```bash
mkdir build
```
### Change to build directory and cmake the project
```bash
cd build && cmake .. -DPICO_SDK_PATH=${/path/to/pico-sdk}
```

## Build
```bash
cd make simple_terminal
```

## Write to pico
```bash
cp build/simple_terminal/simple_terminnal.uf2 /Volumes/RPI-RP2
```

## Connect to simple terminal using minicom
```bash
minicom -b 115200 -o -D /dev/tty.usbmodem0000000000001
```

## Try it out

### HELLO command
```text
Please insert a command > hello
What's your name? Enmanuel
Hello, Enmanuel!
```
### HELP command
```text
Please insert a command > help                                                  
                                                                                
Command Description                                                             
                                                                                
on      turn pico led on                                                        
off     turn pico's led off                                                     
help    asks your name and salute                                               
                                                                                
Note:   all commands are case insensitive :)  
```

# References
- [pico-examples](https://github.com/raspberrypi/pico-examples)
