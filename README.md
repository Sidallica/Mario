# Mario
## CS50 Problem

Let’s recreate mario pyramids in C and Python, albeit in text, using hashes (#) for bricks, a la the below. Each hash is a bit taller than it is wide, so the pyramids themselves are also be taller than they are wide.

\   #  #
\  ##  ##
\ ###  ###
\####  ####
The program we’ll write will be called mario. And let’s allow the user to decide just how tall the pyramids should be by first prompting them for a positive integer between, say, 1 and 8, inclusive.

Here’s how the program might work if the user inputs 8 when prompted:

Height: 8
\       #  #
\      ##  ##
\     ###  ###
\    ####  ####
\   #####  #####
\  ######  ######
\ #######  #######
\########  ########

Here’s how the program might work if the user inputs 4 when prompted:

Height: 4
\   #  #
\  ##  ##
\ ###  ###
\####  ####

Here’s how the program might work if the user inputs 2 when prompted:

Height: 2
\ #  #
\##  ##

And here’s how the program might work if the user inputs 1 when prompted:

Height: 1
\#  #

If the user doesn’t, in fact, input a positive integer between 1 and 8, inclusive, when prompted, the program should re-prompt the user until they cooperate:

Height: -1
Height: 0
Height: 42
Height: 50
Height: 4
   \#  #
  \##  ##
 \###  ###
\####  ####

