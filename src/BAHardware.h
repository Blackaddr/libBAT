/**************************************************************************//**
 *  @file
 *  @author Steve Lascos
 *  @company Blackaddr Audio
 *
 *  This file contains specific definitions for each Blackaddr Audio hardware
 *  board.
 *
 *  @copyright This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.*
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *****************************************************************************/

#ifndef SRC_BAHARDWARE_H_
#define SRC_BAHARDWARE_H_

/**************************************************************************//**
 * BAGuitar is a namespace/Library for Guitar processing from Blackaddr Audio.
 *****************************************************************************/
namespace BAGuitar {

// uncomment the line that corresponds to your hardware
#define TGA_PRO_REVA
//#define TGA_PRO_REVB // does not exist yet

#ifdef TGA_PRO_REVA

constexpr uint8_t USR_LED_ID = 16; ///< Teensy IO number for the user LED.

/**************************************************************************//**
 * GPIOs and Testpoints are accessed via enumerated class constants.
 *****************************************************************************/
enum class GPIO : uint8_t {
	GPIO0 = 2,
	GPIO1 = 3,
	GPIO2 = 4,
	GPIO3 = 6,

	GPIO4 = 12,
	GPIO5 = 32,
	GPIO6 = 27,
	GPIO7 = 28,

	TP1 = 34,
	TP2 = 33
};

/**************************************************************************//**
 * Optionally installed SPI RAM
 *****************************************************************************/
constexpr unsigned NUM_MEM_SLOTS = 2;
enum MemSelect : unsigned {
	MEM0 = 0, ///< SPI RAM MEM0
	MEM1 = 1  ///< SPI RAM MEM1
};
constexpr int MEM0_MAX_ADDR = 131071; ///< Max address size per chip
constexpr int MEM1_MAX_ADDR = 131071; ///< Max address size per chip

/**************************************************************************//**
 * General Purpose SPI Interfaces
 *****************************************************************************/
enum class SpiDeviceId {
	SPI_DEVICE0, ///< Arduino SPI device
	SPI_DEVICE1  ///< Arduino SPI1 device
};
constexpr int SPI_MAX_ADDR = 131071; ///< Max address size per chip


#else

#error "No hardware declared"

#endif

} // namespace BAGuitar


#endif /* SRC_BAHARDWARE_H_ */