# Alevi POS

Minimarket POS (Point Of Sales) software written in C++ with Qt Framework. The main target of Alevi POS is minimarket and able to run on Raspberry Pi.

## Feature
* Networked (uses tcp socket)
* Multi prices
* Item categories
* Suppliers
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
* And many more

## Compile

### Linux

Clone the project to your local computer.

On Ubuntu, install the required dependencies:

```bash
sudo apt-get install build-essential libcups2-dev
sudo apt-get install qt5-default libqt5sql5-mysql libqt5sql5-sqlite libqt5websockets5-dev libqt5printsupport5 libqt5webkit5-dev libcups2-dev sqlite3
sudo apt install qtbase5-dev qtbase5-private-dev
sudo apt install libqt5serialport5-dev
```

Clone the project and build:

```bash
# Clone the repository
git clone https://github.com/lahirunirmalx/sultan.git
cd sultan

# Checkout the alevi branch
git checkout alevi

# Create build directory
mkdir build
cd build

# Run qmake (debug build)
qmake CONFIG+=debug ../sultan.pro

# Or for release build with single binary
qmake CONFIG+=release CONFIG+=SINGLEBIN ../sultan.pro

# Build
make -j4

# Add execute permission
chmod +x bin/Alevi.sh

# Run the app
bin/Alevi.sh
```

### Single Binary Compile

By default the project will compile separated libraries (libdb, libserver, libgui, libprint). This setup is for development purposes because it is easier to track the files. 

For release, the project can be compiled into a single binary file (Alevi only, no shared libraries). This can be achieved by passing the SINGLEBIN option:

```bash
qmake CONFIG+=release CONFIG+=SINGLEBIN ../sultan.pro
```

When using Qt Creator, go to Project → Build Steps and add additional arguments on the qmake step:
```
CONFIG+=SINGLEBIN
```

### qmake Available Flags

* `SINGLEBIN` : Compile as single binary (no shared libraries)
* `USE_EMBED_BROWSER` : Use internal browser (QWebView or QWebEngine)
* `USE_WEBENGINE` : Use QWebEngine instead of QWebView (requires USE_EMBED_BROWSER)
* `NO_PRINTER_SPOOL` : Disable printer spool (winspool / cups)
* `NO_PRINTER_DEVICE` : Disable printer device lp (on Linux usually /dev/lp or /dev/usb/lp0)
* `USE_LIBUSB` : Enable printer using libusb (direct USB communication, no driver needed on Linux)

## Third Party Library
* Reading and writing Xlsx files using [QXlsx](https://github.com/QtExcel/QXlsx)

## License
GPL v3. See [LICENSE](LICENSE)

## Contributing
Any contributions are welcome!

## Note
Please consider giving a star if you find this project useful.
