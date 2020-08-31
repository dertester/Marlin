/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

#define REVERSE_TEMP_SENSOR_RANGE_20 1

// Pt100 with INA826 amp on Ultimaker v2.0 electronics
const temp_entry_t temptable_20[] PROGMEM = {
{ OV(250),0    },
{ OV(251),1    },
{ OV(258),10   },
{ OV(267),20   },
{ OV(275),30   },
{ OV(283),40   },
{ OV(292),50   },
{ OV(300),60   },
{ OV(308),70   },
{ OV(317),80   },
{ OV(325),90   },
{ OV(333),100  },
{ OV(342),110  },
{ OV(350),120  },
{ OV(358),130  },
{ OV(367),140  },
{ OV(375),150  },
{ OV(383),160  },
{ OV(392),170  },
{ OV(400),180  },
{ OV(409),190  },
{ OV(417),200  },
{ OV(425),210  },
{ OV(434),220  },
{ OV(442),230  },
{ OV(450),240  },
{ OV(459),250  },
{ OV(467),260  },
{ OV(475),270  },
{ OV(484),280  },
{ OV(492),290  },
{ OV(500),300  },
{ OV(509),310  },
{ OV(517),320  },
{ OV(525),330  },
{ OV(534),340  },
{ OV(542),350  },
{ OV(550),360  },
{ OV(559),370  },
{ OV(567),380  },
{ OV(575),390  },
{ OV(584),400  },
{ OV(667),500  },
{ OV(751),600  },
{ OV(834),700  },
{ OV(918),800  },
{ OV(1001),900 },
{ OV(1085),1000},
{ OV(1168),1100}
};
