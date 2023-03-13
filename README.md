<!--
*** If you like this README,
*** it is available as a template in my repositories,
*** here is the link:
*** https://github.com/CM0use/README-TEMPLATE
-->

<h1 align="center">
  <a href="https://en.wikipedia.org/wiki/File:ROT13_table_with_example.svg"><img src="https://upload.wikimedia.org/wikipedia/commons/3/33/ROT13_table_with_example.svg" alt="ROT13 example"></a>
  <br>ROT13<br>
  <a href="https://shields.io/"><img src="https://img.shields.io/badge/Windows-0078d7?style=for-the-badge&logo=windows&logoColor=ffffff" alt="Windows"></a>
  <a href="https://shields.io/"><img src="https://img.shields.io/badge/mac%20OS-313131?style=for-the-badge&logo=macos&logoColor=d7d7d7" alt="macOS"></a>
  <a href="https://shields.io/"><img src="https://img.shields.io/badge/Linux-ffffff?style=for-the-badge&logo=linux&logoColor=000000" alt="Linux"></a>
  <br><a href="https://github.com/CM0use/ROT13/blob/main/LICENSE"><img src="https://img.shields.io/badge/License-GPLv3-4a6484?style=for-the-badge" alt="License GPLv3"></a>
</h1>

<h4 align="center">Simple letter substitution cipher that replaces a letter with the 13th letter after it in the alphabet.</h4>

<p align="center">
  <a href="#features">Features</a> •
  <a href="#requirements">Requirements</a> •
  <a href="#install--run">Install & Run</a> •
  <a href="#uninstall">Uninstall</a> •
  <a href="#contributing">Contributing</a> •
  <a href="#author">Author</a> •
  <a href="#license">License</a>
</p>

<div align="center">

![20220410_202916](https://user-images.githubusercontent.com/102839710/163682298-cc803e16-b178-4988-a22f-bf2731e021d6.gif)

</div>

## Features

* Encrypt/Decrypt any Latin alphabet text entry (aA-Zz)
* No installation necessary - just use the binary.
* Easy to modify.
* Multi-Platform
  - Windows, macOS and Linux.

## Requirements

* g++
* git (optional)

## Install & Run

To **clone** and **compile** this tool, you will need to have **git** and **g++** installed on your computer.<br>
From your command line:

```bash

git clone https://github.com/CM0use/ROT13.git
cd ROT13
g++ -O2 -std=c++2a src/main.cpp src/rot13.cpp -o rot13

```

Run on **macOS & Linux**:

```bash

./rot13 Hello There

```

Run on **Windows**:

```cmd

rot13.exe Hello There

```

## Uninstall

Just delete the folder you have cloned/downloaded from the repository.

## Contributing

**Any contribution you make will be greatly appreciated.**<br>
If you have any ideas/suggestions to improve the repository, make a fork of the repository and create a pull request.<br>
You can also <a href="https://github.com/CM0use/ROT13/issues">open the issue tracker</a> to report any improvements or bugs.<br>

## Author

You can contact me through the **email**: dilanuzcs@gmail.com, or through the **discord**: CM0use#7229

## License

**Distributed under the GNU General Public License v3.0**<br>
See accompanying file <a href="https://github.com/CM0use/ROT13/blob/main/LICENSE">LICENSE</a><br>
or copy at <a href="https://www.gnu.org/licenses/gpl-3.0.txt">GNU General Public License</a>
