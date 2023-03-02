SFML Game Of Life and Variations


Algorithm:
We'll create a Cell class, that holds these methods and properties:
    - state
        - Boolean that holds whether the Cell is on or off.
    - position
        - Integer vector that holds the x,y position of the Cell.

Then, there'll be a board class, that'll be a wrapper for a 2-dimensional std::vector:
    - board
        - vector< vector<Cell> >


==== BLOG  ====
- 18/2/23 -
So technically, I started the project last night but wanted to start fresh this morning as I didn't really like the codeI wrote last night. I wrote some new code and got the Cell class working. Maybe I should test as I go this time.

- 2/3/23 -
Wow, it' s been a while! I've been a bit busy with assessment tasks and all the rest of it - but I finally found a spare hour on Thursday night to do some programming :) I'm doing some simple experimentation with different kinds of classes for boards and cells, in separate test folder. Oh yeah! My 32x16 RGB LED matrix came in the mail, so I'd really like to work on this project so I can get that done as well!

My whole ideal for the project has pretty much changed. My vision before was to simply rewrite my old Game of Life code, but now I'd like to make a C++ class that is a wrapper for the Game of Life for any purpose, such as the LED matrix or games. Maybe I'd even publicize it and add special functions like 3D, or even 4D Game of Life! (Hungry for those GitHub stars :p)

So I've now decided to go for a 2D vector array of *pointers* to Cell objects instead of the objects themselves, as the prior would be really weird in terms of memory allocation and C++ activities. After some due diligence in my pointer object testing, I'm ready to implement this (i.e rewrite the code for the 2nd time)
