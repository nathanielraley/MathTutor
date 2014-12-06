# README #

STC 2014 Project | NumberLand Arithmetic Tutor
Author: Nathaniel Raley | Date: 12/5/2014

### Contents ###

This repository contains source code and documentation for my
project in the course Scientific and Technical Computing, Fall 2014.
The program itself is an arithemetic tutor written in c++ and intended
primarily for use by students at the elementary school level.

To read more in detail about the purpose of the study, how the
program works, and what specific features it has (game mechanics),
check out the final report located in the docs/ directory. To see
screenshots taken during gameplay or to watch a video screencast of
the game in action, look in docs/pictures/. Extensive results are
included in the final report (titled FinalReport.pdf); please consult
this file or contact me if there are any questions.

The source code is in the src/ directory; the main program is
located in src/project.cpp. The larger functions are located in
src/functions.cpp, and the function prototypes used are in
src/header.h. Old code is located in src/src_old/ and was
included only for thoroughness. Also, src/gui contains my
attempts to build a graphical user interface for this program using
GTKMM libraries, but none of the signals are hooked up to the
present program. It too was included for thoroughness and to provide
a jumping-off point for later gui development.

The project/users directory contains all user data generated during
game play. For a given username, a textfile is maintained (or created
if one does not already exist) in project/users/ for each unique
user name. Data from users' gameplay is updated to these files every
time they answer a question, request a hint, etc.

### How to Build ###

To build the executable (which will appear in bin/), simply navigate
to the project/ directory where the Makefile is located and type
'make' into a terminal window. The object files are built in src/ and
the executable is built in bin/. To remove object files etc.
generated during the build, type 'make clean' in project/ directory.
To remove every 'make clean' removes and to remove the executable,
type 'make clobber' in the project/ directory. To run the program
directly, type 'make run'. The executable for this program is simply
titled "project" and is located in bin/.


Thanks! For questions, contact nathaniel dot raley at utexas dot edu


