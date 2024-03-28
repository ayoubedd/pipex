# pipex

## Table of Contents
- [Overview](#overview)
- [Requirements](#requirements)
- [Build](#build)
- [Usage](#usage)
    - [Example](#example)
- [Notes](#notes)
- [Lisence](#lisence)

## Overview

`pipex` is a eductional project which is about building a simple program which takes a set of commands and feed them a input file and redirects output of a command to next one till the last which its output is stored in a user specified file. it is a great project for those whiching to learning process creating/managment, unix pipes and file descriptors. 

For more informatins. Refer to subject file included in the subject directory.

## Requirements

All you need is a Unix machine (Linux, Macos, Freebsd, ...), C compiler and Make.

## Build

To build the program cd into `src` and run the following command:

```sh
make
```

This will result in a program called `pipex`.

## Usage

`pipex` is used like the following.

```
usage: ./pipex
		infile "cmd" "cmd" outfile
```

where `infile` stands for input file, `cmd` stand for command and its arguments and `outfile` stands for output file which will include the output from `stdout` of the last command.

### Example

To be able to run it properly. Run it like the following

```sh
./pipex /etc/passwd cat "grep root" out 
```

This will result in a file call `out` containing all lines containing the word root from the `/etc/passwd` file.

## Notes

- You can compile the project using bonus recipe to be able run a variable number of commands.
 - example: `./pipex /etc/passwd "grep bash" "grep root" cat out`

## Lisence

This project is licensed under MIT license. See the LICENSE file for details.
