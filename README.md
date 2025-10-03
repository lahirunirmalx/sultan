# Sultan POS
Minimarket POS (Point Of Sales) software writen in C++ with Qt Framework. The main target of Sultan POS is minimarket and able to run on Raspberry Pi.

## Feature
* Networked (uses tcp socket)
* Multi prices
* Item categories
* Supliers
* Multi user and permission
* Databases SQLite / MySQL
* Sales report
* Item sales report
* Money report
* Margin calculation using average
* Customer database
* Customer reward
* Customer credit
* Purchase and purchase return
* Cashier and sold return
* Stock Card
* Box / Package item
* Export / import database
* And many

## Compile
* Please check [Wiki Compile](https://github.com/apinprastya/sultan/wiki/Compile) 

 ### This can be work on  Linux

Clone the project to your local computer
On Ubuntu need to install :  

```sudo apt-get install build-essential libcups2-dev  ```

```sudo apt-get install build-essential qt5-default libqt5sql5-mysql libqt5sql5-sqlite libqt5websockets5-dev libqt5printsupport5 libqt5webkit5-dev libcups2-dev sqlite3 ```

```sudo apt install qtbase5-dev qtbase5-private-dev```

```sudo apt install libqt5serialport5-dev```

 Clone the project to your local computer
CD to root directory project and create a build directory

```mkdir build```

CD to build folder

```cd build```

run qmake

```qmake CONFIG+=debug ../sultan.pro```

run make

```make -j4```

add execute permission

```chmod +x bin/Sultan.sh```

run the app

```bin/Sultan.sh```

Single binary compile

By default the project will compile the project separated on each lib (libdb, libserver, libgui, libprint), this setup actually for development purpose because it is easier to track the files. When on release the project can be compile into only 1 file binary which is Sultan file only (no shared library). This can achieve by pass SINGLEBIN option to the config when calling the qmake.

```qmake CONFIG+=release CONFIG+=SINGLEBIN ../sultan.pro```

When using the Qt Creator, just go to project -> build steps and add additional arguments on qmake step
CONFIG+=SINGLEBIN

qmake available flag

 * SINGLEBIN : described above
 * USE_EMBED_BROWSER : this will use internal browser (QWebView or QWebEngine)
 * USE_WEBENGINE : this can be use when USE_EMBED_BROWSER is activated. Use QWebEngine instead of QWebView.
 * NO_PRINTER_SPOOL : disable printer spool (winspool printer / cups)
 * NO_PRINTER_DEVICE : disable printer device lp (on linux usually /dev/lp or /dev/usb/lp0)
 * USE_LIBUSB : enable printer using libusb (direct send the printer command to usb - no need usb driver on linux)


## Note
Please consider to give a star when clone this repository

## Third party library
* Reading and writing Xlsx file using [QXlsx](https://github.com/QtExcel/QXlsx)

## License
GPL. See [LICENSE](https://github.com/apinprastya/sultan/blob/master/LICENSE)

## Contribution
Any contribution are welcome
