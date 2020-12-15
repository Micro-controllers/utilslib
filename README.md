# UTILSLIB

This library is destined to host a bunch of simple helper functions
to make life easier when developing a sketch.

The platformio implementation is based on (Creating Library)[https://docs.platformio.org/en/latest/librarymanager/creating.html]

## Howto implement a library

* create a new project from Platformio Home
* follow the directory structure  recommended
* create a library.json
* push it to github and voila!

### Note
To compile a library we need a file that implements both **setup()** and **loop()** so just keep the default main.cpp

## PrintSerial

A.k.a. **serialprint.h** is a wrapper around **Serial.print** to make it easy to format print just like printf. 