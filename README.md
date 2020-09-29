# Asteroids
This is my first game! When I was making this game, I learned how to use SFML library, multi-threads and why is using git important :)

# Requirement
My game works only on linux!!!

Why? Because I don't like windows, so I don't want my game on windows.

What about MacOS?

MacOS is not supported too, because... why not?

# Install
### Installing SFML and cmake
To play my game, you must install first SFML library and cmake.
##### In Arch-based distros:
`
sudo pacman -S sfml cmake
`
##### In Debian-based distros:
`
sudo apt-get install libsfml-dev cmake
`
### Building a game
I made a simple script to install (build) game, but if you want you can build it on your own.
##### Using a script:
`./install.sh`
##### And building on yourself:

`mkdir build/`

`cd build/`

`cmake ..`

`make`

And... that's all! You can play now!

# Controls
Now my game must be played with controler, but in the future I will add keyboard support.
Personally recommend to use a xbox-like controlers.


Rotate to left - LB

Rotete to right - RB

Shoot - A

Close a game - Start
