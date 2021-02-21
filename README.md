# pico
Raspberry Pi Pico stuff

# Simple terminal
Example of a simple usb terminal

## Prepare the project
```bash
cd build && cmake .. -DPICO_SDK_PATH=${/path/to/pico-sdk}
```

## Build
```bash
cd make simple_terminal
```

## Write to pico
```bash
cp build/simple_terminal/simple_terminnal.uf2
```

## Connect to simple terminal using minicom
```bash
minicom -b 115200 -o -D /dev/tty.usbmodem0000000000001
```

## Try out
```bash
Please insert a command > hello
What's your name? Enmanuel
Hello, Enmanuel!
```

# References
- [pico-examples](https://github.com/raspberrypi/pico-examples)