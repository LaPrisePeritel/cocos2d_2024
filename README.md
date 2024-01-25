steps:

    run "python download-deps.py" in "\JuGame\cocos2d"
    run "cmake . -G"Visual Studio 17 2022" -Tv143 -A Win32" in "\JuGame"
    open the solution and run
    python 2.7 recommended (https://sourceforge.net/projects/portable-python/files/Portable%20Python%202.7/)

game:

    Click on play button to start the game
    In game, use any button to make the player fly and dodge the wall moving towards you or they will kill you
    Be carefull! ground and ceil also kills you

