/* ************************************************************************
 *
 *   alternative 24x24 component symbols #2
 *   vertically aligned, vertical bit order flipped
 *   with bank/page-wise grouping
 *
 *   (c) 2015-2023 by Markus Reschke
 *   modified by indman@EEVblog
 *
 * ************************************************************************ */


/* ************************************************************************
 *   symbol data
 * ************************************************************************ */

#ifdef SYMBOLS_24X24_ALT2_VFP


/* source management */
#define SYMBOL_SET                 /* symbol set included */

/* symbol size */
#define SYMBOL_SIZE_X       24     /* width:  24 dots */
#define SYMBOL_SIZE_Y       24     /* height: 24 dots */

/* symbol data format */
#define SYMBOL_BYTES_N      72     /* 72 bytes per symbol */
#define SYMBOL_BYTES_X      24     /* 24 bytes in x direction */
#define SYMBOL_BYTES_Y       3     /* 3 bytes in y direction */


/*
 *  symbol bitmaps
 *  - format:
 *    - 72 bytes per symbol
 *    - first byte: first vertical line of top 8 rows (left to right)
 *    - first 24 bytes: all vertical lines of top 8 rows
 *      next 24 bytes: all vertical lines of next 8 rows
 *      last 24 bytes: all vertical lines of last 8 rows
 *    - bit #0: top / bit #7: bottom (vertically flipped)
 */

const uint8_t SymbolData[] PROGMEM = {
  0x00,0xE0,0xA0,0xA0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xC0,0x1C,0x22,
  0x22,0x94,0x40,0x20,0x1E,0x00,0x00,0x00,0x08,0x0B,0x0A,0x0A,0x09,0x08,0x08,0x08,
  0x08,0x08,0x08,0x08,0xFF,0xFF,0x14,0x22,0xC1,0xC0,0xE0,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x01,
  0x7D,0x55,0x45,0x02,0x7C,0x00,0x00,0x00,   /* BJT npn */

  0x00,0xC0,0x40,0x40,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x00,0xBE,
  0x2A,0x22,0x80,0x40,0x3E,0x00,0x00,0x00,0x10,0x17,0x15,0x15,0x12,0x10,0x10,0x10,
  0x10,0x10,0x10,0x10,0xFF,0xFF,0x28,0x47,0x87,0x07,0x04,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x38,0x44,
  0x44,0x29,0x02,0x04,0x78,0x00,0x00,0x00,   /* BJT pnp */

  0x00,0x00,0x00,0x00,0x00,0xC0,0xC0,0x00,0xC0,0xC0,0x80,0x80,0x80,0x80,0x80,0xBE,
  0xA2,0xA2,0x9C,0x80,0xFE,0x00,0x00,0x00,0x70,0x88,0xA8,0x60,0x00,0xFF,0xFF,0x00,
  0x9D,0x9D,0x08,0x08,0x1C,0x3E,0x08,0xF8,0x00,0x24,0x34,0xFF,0x34,0x24,0x00,0x00,
  0x02,0x02,0x02,0x02,0x02,0x03,0x03,0x00,0x03,0x03,0x01,0x01,0x01,0x01,0x01,0x49,
  0x55,0x55,0x25,0x01,0x7F,0x00,0x00,0x00,   /* MOSFET enh n-ch */

  0x40,0x40,0x40,0x40,0x40,0xC0,0xC0,0x00,0xC0,0xC0,0x80,0x80,0x80,0x80,0x80,0xA4,
  0xAA,0xAA,0x92,0x80,0xFE,0x00,0x00,0x00,0x0E,0x11,0x15,0x0C,0x00,0xFF,0xFF,0x00,
  0xB9,0xB9,0x10,0x10,0x7C,0x38,0x10,0x1F,0x00,0x24,0x34,0xFF,0x34,0x24,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x00,0x03,0x03,0x01,0x01,0x01,0x01,0x01,0x7D,
  0x45,0x45,0x39,0x01,0x7F,0x00,0x00,0x00,   /* MOSFET enh p-ch */

  0x00,0x00,0x00,0x00,0x00,0xC0,0xC0,0x00,0xC0,0xC0,0x80,0x80,0x80,0x80,0x80,0xBE,
  0xA2,0xA2,0x9C,0x80,0xFE,0x00,0x00,0x00,0x70,0x88,0xA8,0x60,0x00,0xFF,0xFF,0x00,
  0xFF,0xFF,0x08,0x08,0x1C,0x3E,0x08,0xF8,0x00,0x24,0x34,0xFF,0x34,0x24,0x00,0x00,
  0x02,0x02,0x02,0x02,0x02,0x03,0x03,0x00,0x03,0x03,0x01,0x01,0x01,0x01,0x01,0x49,
  0x55,0x55,0x25,0x01,0x7F,0x00,0x00,0x00,   /* MOSFET dep n-ch */

  0x40,0x40,0x40,0x40,0x40,0xC0,0xC0,0x00,0xC0,0xC0,0x80,0x80,0x80,0x80,0x80,0xA4,
  0xAA,0xAA,0x92,0x80,0xFE,0x00,0x00,0x00,0x0E,0x11,0x15,0x0C,0x00,0xFF,0xFF,0x00,
  0xFF,0xFF,0x10,0x10,0x7C,0x38,0x10,0x1F,0x00,0x24,0x34,0xFF,0x34,0x24,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x00,0x03,0x03,0x01,0x01,0x01,0x01,0x01,0x7D,
  0x45,0x45,0x39,0x01,0x7F,0x00,0x00,0x00,   /* MOSFET dep p-ch */

  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xC0,0x80,0xBE,
  0xA2,0xA2,0x9C,0x80,0xFE,0x00,0x00,0x00,0x38,0x44,0x54,0x30,0x00,0x00,0x00,0xE0,
  0xC0,0x80,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x0F,0x07,0x03,0x01,0x01,0x03,0x03,0x01,0x49,
  0x55,0x55,0x25,0x01,0x7F,0x00,0x00,0x00,   /* JFET n-ch */

  0x9C,0xA2,0xAA,0x98,0x80,0x80,0x80,0xC0,0xE0,0xF0,0x80,0x80,0xC0,0xC0,0x80,0xA4,
  0xAA,0xAA,0x92,0x80,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
  0x03,0x07,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x01,0x7D,
  0x45,0x45,0x39,0x01,0x7F,0x00,0x00,0x00,   /* JFET p-ch */

  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xC0,0x00,0xC0,0xC0,0x9C,0xA2,0xA2,0x94,
  0x80,0x78,0x70,0x70,0x4E,0x00,0x00,0x00,0x38,0x44,0x54,0x30,0x00,0x00,0x00,0xFF,
  0xFF,0x00,0xDD,0xDD,0x88,0x90,0xA0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x01,0x01,0x7C,0x54,0x54,0x00,
  0x09,0x0E,0x0E,0x0F,0x70,0x00,0x00,0x00,   /* IGBT enh n-ch */

  0x9C,0xA2,0xAA,0x98,0x80,0x80,0x80,0x80,0x80,0x00,0xC0,0xC0,0x80,0xBE,0xAA,0xAA,
  0x80,0x78,0x70,0x70,0x4E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,
  0xFF,0x00,0xDD,0xDD,0x88,0x90,0xA0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x01,0x39,0x44,0x44,0x28,0x00,
  0x09,0x0E,0x0E,0x0F,0x70,0x00,0x00,0x00,   /* IGBT enh p-ch */

  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x00,0x3C,0x0A,
  0x0A,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x40,0x40,0x00,0x00,0x00,0x81,0x83,
  0x87,0x8F,0x9F,0xBF,0xFF,0xBF,0x9F,0x8F,0x87,0x83,0x81,0x00,0x00,0x00,0x00,0x00,
  0x13,0x14,0x15,0x13,0x10,0x10,0x11,0x11,0x11,0x09,0x05,0x03,0x7F,0x01,0x39,0x45,
  0x45,0x29,0x01,0x00,0x00,0x00,0x00,0x00,   /* SCR */

  0x00,0x00,0x3C,0x8A,0x8A,0xBC,0x80,0xA4,0xB2,0xAA,0xA4,0x80,0xFE,0x80,0x80,0x80,
  0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x80,0x40,0x40,0x00,0x01,0x07,0x1F,0x7F,
  0xFF,0x7F,0x1F,0x07,0x81,0xE0,0xF8,0xFE,0xFF,0xFE,0xF8,0xE0,0x80,0x00,0x00,0x00,
  0x13,0x14,0x15,0x13,0x10,0x11,0x09,0x05,0x03,0x01,0x01,0x01,0x7F,0x01,0x79,0x15,
  0x15,0x79,0x01,0x49,0x7D,0x41,0x00,0x00,   /* Triac */

  0xC8,0x28,0xA8,0x88,0x08,0x08,0x08,0x08,0x10,0x20,0x40,0x80,0xFE,0x00,0x3C,0x0A,
  0x0A,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x02,0x02,0x01,0x00,0x00,0x81,0x83,
  0x87,0x8F,0x9F,0xBF,0xFF,0xBF,0x9F,0x8F,0x87,0x83,0x81,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x7F,0x01,0x39,0x45,
  0x45,0x29,0x01,0x00,0x00,0x00,0x00,0x00,   /* PUT */

  0xD0,0x50,0x50,0x10,0x20,0x40,0x80,0x80,0xC0,0x00,0x3E,0xAA,0xAA,0x14,0x00,0x24,
  0x32,0x2A,0x24,0x00,0xFE,0x00,0x00,0x00,0x07,0x05,0x05,0x00,0x00,0x02,0x03,0x03,
  0x03,0x04,0x08,0xFF,0xFF,0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7D,0x55,0x54,0x28,0x00,
  0x48,0x7C,0x40,0x00,0x7F,0x00,0x00,0x00    /* UJT n-type */
  
  #ifdef SYMBOLS_EXTRA
  ,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xF8,0x18,0xCC,0x2C,0x2C,0x0C,0x18,0xF8,
  0xE0,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x70,0x78,0x7C,0x0E,0xE7,0x13,0x08,0x04,0x03,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5C,0x5D,0x5D,0x41,0x79,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   /* question mark */

  0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x80,0x80,0x80,0x80,0x80,0xFE,0x80,0xBE,0x88,
  0x94,0xA2,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x81,0xC1,
  0xE1,0xF1,0xF9,0xFD,0xFF,0xFD,0xF9,0xF1,0xE1,0xC1,0x87,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x00,0x78,0x14,
  0x14,0x78,0x00,0x00,0x00,0x00,0x00,0x00,   /* Zener diode */

  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0xFE,0x80,0x80,0x80,
  0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x3C,0xBD,
  0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,0x3C,0x3C,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x7F,0x01,0x01,0x01,
  0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,   /* quartz crystal */

  0x00,0xC0,0x40,0x40,0x80,0x00,0xE0,0x20,0x20,0x70,0x50,0x50,0x50,0x50,0x70,0x24,
  0x2E,0x24,0x20,0xFE,0x00,0x00,0x00,0x00,0x00,0x17,0x14,0x14,0x13,0x10,0x1F,0x10,
  0x10,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x84,0x84,0x84,0x87,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x23,
  0x20,0x20,0x00,0x7F,0x00,0x00,0x00,0x00    /* OneWire device */
  #endif     
};



/*
 *  pin position lookup table
 *  - one byte per pin and 3 bytes (pins) for each symbol
 *  - cross reference for the Semi structure's pins:
 *
 *      BJT         FET         SCR         Triac       IGBT
 *  ------------------------------------------------------------------
 *  A   Base        Gate        Gate        Gate        Gate
 *  B   Collector   Drain       Anode       MT2         Collector
 *  C   Emitter     Source      Cathode     MT1         Emitter
 *
 *      PUT         UJT
 *  ------------------------------------------------------------------
 *  A   Gate        Emitter
 *  B   Anode       B2
 *  C   Cathode     B1
 */

const uint8_t PinTable[] PROGMEM = {
  PIN_LEFT | PIN_CENTER, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,   /* BJT npn */
  PIN_LEFT | PIN_CENTER, PIN_RIGHT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP,   /* BJT pnp */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,   /* MOSFET enh n-ch */
  PIN_LEFT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP,      /* MOSFET enh p-ch */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,   /* MOSFET dep n-ch */
  PIN_LEFT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP,      /* MOSFET dep p-ch */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,   /* JFET n-ch */
  PIN_LEFT | PIN_CENTER, PIN_RIGHT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP,   /* JFET p-ch */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,   /* IGBT enh n-ch */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP,   /* IGBT enh p-ch */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP | PIN_ALT_CENTER, PIN_RIGHT | PIN_BOTTOM | PIN_ALT_CENTER,   /* SCR */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP | PIN_ALT_CENTER, PIN_RIGHT | PIN_BOTTOM | PIN_ALT_CENTER,   /* Triac */
  PIN_LEFT | PIN_TOP, PIN_RIGHT | PIN_TOP | PIN_ALT_CENTER, PIN_RIGHT | PIN_BOTTOM | PIN_ALT_CENTER,      /* PUT */
  PIN_LEFT | PIN_TOP, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM       /* UJT n-type */
  #ifdef SYMBOLS_EXTRA
  ,
  PIN_NONE, PIN_NONE, PIN_NONE,                                         /* question mark */
  PIN_NONE, PIN_NONE, PIN_NONE,                                         /* Zener diode */
  PIN_NONE, PIN_NONE, PIN_NONE,                                         /* quartz crystal */
  PIN_LEFT | PIN_CENTER, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM    /* OneWire device */
  #endif
};


#endif

/* ************************************************************************
 *   EOF
 * ************************************************************************ */
