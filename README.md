### engine
C++ Game Engine

For window, need to setup sfml correctly by building and installing to system.
1. `git clone --branch 2.6.x https://github.com/SFML/SFML.git`
- the master branch is the working development branch for the SFML project considered unstable at the moment for SFML 3
- the 2.6.x branch is the nearly complete next minor version SFML 2.6 and should be stable

2. `cd SFML/`
3. `mkdir build && cd build/`
4. `cmake ..`
- make sure cmake is installed and available to use on your system
5. use `ccmake .` and turn on the settings for (optional) 
-- `SFML_BUILD_DOC`
-- `SFML_BUILD_EXAMPLES`
-- `SFML_BUILD_TEST_SUIT`
    and press `c` to configure/update `CMakeCache.txt` 
6. `make` (optional check that SFML compiles)
7. `sudo make install` 
- the SMFL components will be copied to install locations specified in the `CMakeCache.txt` file

