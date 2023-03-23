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
cd build && cmake .. -DCMAKE_BUILD_TYPE=Debug -DPICO_SDK_PATH=${/path/to/pico-sdk}
```

## Build the project
While on build directory run
```bash
make simple_terminal
```

## Write to pico
### On MacOS you can run
```bash
cp build/simple_terminal/simple_terminal.uf2 /Volumes/RPI-RP2
```
### On Windows WSL
Create a mounting directory
```bash
sudo mkdir /mnt/e
```
Assuming in Windows Pico drive is E:
```bash
sudo mount -t drvfs E: /mnt/e
```

Copy uf2 file to pico bootloader
```bash
cp build/simple_terminal/simple_terminal.uf2 /mnt/e
```

## Connect to simple terminal using minicom or PuTTY
```bash
minicom -b 115200 -o -D /dev/dev/tty.usbmodem14201
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
hello   asks your name and salute
help    Display this dialogue
                                                                                
Note:   all commands are case insensitive :)  
```

# References
- [pico-examples](https://github.com/raspberrypi/pico-examples)
