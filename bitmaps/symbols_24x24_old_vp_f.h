/* ************************************************************************
 *
 *   old 24x24 component symbols
 *   vertically aligned, horizontal bit order flipped
 *   with bank/page-wise grouping
 *
 *   (c) 2018-2023 by Markus Reschke
 *   Question mark, Zener diode quartz crystal and OneWire device
 *   by indman@EEVblog
 *
 * ************************************************************************ */


/* ************************************************************************
 *   symbol data
 * ************************************************************************ */

#ifdef SYMBOLS_24X24_OLD_VP_F


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
 *    - first byte: last vertical line of top 8 rows (right to left)
 *    - first 24 bytes: all vertical lines of top 8 rows
 *      next 24 bytes: all vertical lines of next 8 rows
 *      last 24 bytes: all vertical lines of last 8 rows
 *    - bit #0: bottom / bit #7: top
 */

const uint8_t SymbolData[] PROGMEM = {
  0x00,0x00,0x00,0x01,0x06,0x08,0xF8,0x14,0x12,0x21,0x20,0x20,0x20,0x23,0x13,0x10,
  0x08,0x08,0x06,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x83,0x00,0x00,0x00,0x00,
  0x03,0x01,0x82,0x44,0x28,0xFF,0xFF,0x10,0x10,0x10,0x10,0x93,0x7C,0x10,0x10,0x10,
  0x00,0x00,0x00,0x00,0xC0,0x20,0x3E,0x50,0x90,0x88,0x88,0x08,0x08,0x88,0x90,0x10,
  0x20,0x20,0xC0,0x00,0x00,0x00,0x00,0x00,   /* BJT npn */

  0x00,0x00,0x00,0x01,0x06,0x08,0xF8,0x14,0x12,0x21,0x23,0x20,0x20,0x23,0x13,0x10,
  0x08,0x08,0x06,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x83,0x00,0x00,0x00,0x00,
  0x80,0x81,0x82,0x44,0x28,0xFF,0xFF,0x10,0x10,0x10,0x10,0x93,0x7C,0x10,0x10,0x10,
  0x00,0x00,0x00,0x00,0xC0,0x20,0x3E,0x50,0x90,0x08,0x08,0x08,0x08,0x88,0x90,0x10,
  0x20,0x20,0xC0,0x00,0x00,0x00,0x00,0x00,   /* BJT pnp */

  0x00,0x00,0x00,0x01,0x06,0x08,0xFE,0x12,0x12,0x22,0x22,0x22,0x22,0x27,0x10,0x13,
  0x08,0x08,0x06,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x83,0x00,0x00,0x1F,0x10,
  0x10,0x7C,0x38,0x10,0x10,0x39,0x00,0xFF,0x00,0x00,0x00,0x83,0x7C,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xC0,0x20,0xFE,0x90,0x90,0x88,0x88,0x88,0x88,0xC8,0x10,0x90,
  0xA0,0xA0,0xC0,0x80,0x80,0x80,0x80,0x80,   /* MOSFET enh n-ch */

  0x00,0x00,0x00,0x01,0x06,0x08,0xFF,0x12,0x12,0x22,0x22,0x22,0x22,0x27,0x10,0x13,
  0x0A,0x0A,0x06,0x03,0x02,0x02,0x02,0x02,0x00,0x00,0x7C,0x83,0x00,0x00,0xF0,0x10,
  0x10,0x38,0x7C,0x10,0x10,0x39,0x00,0xFF,0x00,0x00,0x00,0x83,0x7C,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xC0,0x20,0xFE,0x90,0x90,0x88,0x88,0x88,0x88,0xC8,0x10,0x90,
  0x20,0x20,0xC0,0x00,0x00,0x00,0x00,0x00,   /* MOSFET enh p-ch */

  0x00,0x00,0x00,0x01,0x06,0x08,0xFE,0x12,0x12,0x22,0x22,0x22,0x22,0x27,0x10,0x13,
  0x08,0x08,0x06,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x83,0x00,0x00,0x1F,0x10,
  0x10,0x7C,0x38,0x10,0x10,0xFF,0x00,0xFF,0x00,0x00,0x00,0x83,0x7C,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xC0,0x20,0xFE,0x90,0x90,0x88,0x88,0x88,0x88,0xC8,0x10,0x90,
  0xA0,0xA0,0xC0,0x80,0x80,0x80,0x80,0x80,   /* MOSFET dep n-ch */

  0x00,0x00,0x00,0x01,0x06,0x08,0xFF,0x12,0x12,0x22,0x22,0x22,0x22,0x27,0x10,0x13,
  0x0A,0x0A,0x06,0x03,0x02,0x02,0x02,0x02,0x00,0x00,0x7C,0x83,0x00,0x00,0xF0,0x10,
  0x10,0x38,0x7C,0x10,0x10,0xFF,0x00,0xFF,0x00,0x00,0x00,0x83,0x7C,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xC0,0x20,0xFE,0x90,0x90,0x88,0x88,0x88,0x88,0xC8,0x10,0x90,
  0x20,0x20,0xC0,0x00,0x00,0x00,0x00,0x00,   /* MOSFET dep p-ch */

  0x00,0x00,0x00,0x01,0x06,0x08,0xFF,0x11,0x11,0x21,0x21,0x21,0x27,0x20,0x10,0x10,
  0x08,0x08,0x06,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x83,0x00,0x00,0x01,0x01,
  0x01,0x01,0x01,0x01,0xFF,0x01,0x03,0x07,0x01,0x01,0x01,0x83,0x7D,0x01,0x01,0x01,
  0x00,0x00,0x00,0x00,0xC0,0x20,0xFE,0x10,0x10,0x08,0x08,0x08,0xC8,0x08,0x90,0xD0,
  0x20,0x20,0xC0,0x00,0x00,0x00,0x00,0x00,   /* JFET n-ch */

  0x00,0x00,0x00,0x01,0x06,0x08,0xFF,0x11,0x11,0x21,0x21,0x21,0x27,0x21,0x17,0x13,
  0x09,0x09,0x07,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x7C,0x83,0x00,0x00,0x01,0x01,
  0x01,0x01,0x01,0x01,0xFF,0x00,0xC0,0x80,0x00,0x00,0x00,0x83,0x7C,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xC0,0x20,0xFE,0x10,0x10,0x08,0x08,0x08,0xC8,0x08,0x10,0x10,
  0x20,0x20,0xC0,0x00,0x00,0x00,0x00,0x00,   /* JFET p-ch */

  0x00,0x00,0x00,0x01,0x06,0x08,0xF8,0x14,0x12,0x21,0x20,0x20,0x20,0x23,0x10,0x11,
  0x08,0x08,0x06,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x83,0x00,0x00,0x00,0x00,
  0x03,0x01,0x82,0x44,0x28,0xFF,0x00,0xFF,0x10,0x10,0x10,0x93,0x7C,0x10,0x10,0x10,
  0x00,0x00,0x00,0x00,0xC0,0x20,0x3E,0x50,0x90,0x88,0x88,0x08,0x08,0x88,0x10,0x10,
  0x20,0x20,0xC0,0x00,0x00,0x00,0x00,0x00,   /* IGBT enh n-ch */

  0x00,0x00,0x00,0x01,0x06,0x08,0xF8,0x14,0x12,0x21,0x23,0x20,0x20,0x23,0x10,0x11,
  0x08,0x08,0x06,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x83,0x00,0x00,0x00,0x00,
  0x80,0x81,0x82,0x44,0x28,0xFF,0x00,0xFF,0x10,0x10,0x10,0x93,0x7C,0x10,0x10,0x10,
  0x00,0x00,0x00,0x00,0xC0,0x20,0x3E,0x50,0x90,0x08,0x08,0x08,0x08,0x88,0x10,0x10,
  0x20,0x20,0xC0,0x00,0x00,0x00,0x00,0x00,   /* IGBT enh p-ch */

  0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x07,0x07,0x07,0x07,0x7F,0x07,0x07,0x07,0x07,
  0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,
  0xC1,0xF1,0xFD,0xFF,0xFD,0xF1,0xC1,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x80,0x40,0x20,0x10,
  0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00,   /* SCR */

  0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x7F,0x01,0x01,0x01,0x01,
  0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0xF8,0xFE,0xFF,0xFE,
  0xF8,0xE0,0x80,0x00,0x01,0x07,0x1F,0x7F,0xFF,0x7F,0x1F,0x07,0x01,0x00,0x00,0x00,
  0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0xFF,0x80,0x80,0x80,0x80,
  0xC0,0xA0,0x90,0x88,0x88,0x08,0x08,0x08,   /* Triac */

  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x01,0x02,0x04,0x08,
  0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xE0,
  0xF8,0xFE,0xFF,0xFF,0xFF,0xFE,0xF8,0xE0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x20,0x20,0xA0,0xFE,0xA0,0x20,0x20,0x20,
  0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   /* PUT */

  0x00,0x00,0x00,0x01,0x06,0x08,0xFF,0x11,0x11,0x21,0x21,0x21,0x27,0x20,0x10,0x10,
  0x08,0x09,0x06,0x03,0x02,0x02,0x02,0x02,0x00,0x00,0x7C,0x83,0x00,0x00,0x01,0x01,
  0x01,0x01,0x01,0x01,0xFF,0x10,0xE0,0x60,0xA0,0x00,0x00,0x83,0x7C,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xC0,0x20,0xFE,0x10,0x10,0x08,0x08,0x08,0xC8,0x08,0x10,0x10,
  0x20,0x20,0xC0,0x00,0x00,0x00,0x00,0x00    /* UJT n-type */

  #ifdef SYMBOLS_EXTRA
  ,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x06,0x06,0x06,0x06,0x03,0x03,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,
  0xF8,0x1C,0x0E,0x07,0x03,0x01,0x00,0xE0,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xCE,0xCE,0xCE,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   /* question mark */

  0x00,0x00,0x00,0x00,0x00,0x00,0x44,0x28,0x10,0x7C,0x00,0x7F,0x00,0x00,0x00,0x00,
  0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE1,0x83,0x87,
  0x8F,0x9F,0xBF,0xFF,0xBF,0x9F,0x8F,0x87,0x83,0x81,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x28,0x28,0x1E,0x00,0xFE,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   /* Zener diode */

  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x3C,0xBD,0xBD,
  0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,0x3C,0x3C,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   /* quartz crystal */

  0x00,0x00,0x00,0x7F,0x04,0x24,0x74,0x24,0x04,0x0E,0x0A,0x0A,0x0A,0x0A,0x0E,0x04,
  0x04,0x07,0x00,0x00,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0xE0,0x20,0x20,0x20,0x20,
  0x20,0xFF,0x80,0x80,0x80,0x80,0x80,0xFF,0x04,0xFC,0x04,0xE4,0x14,0x14,0xF4,0x00,
  0x00,0x00,0x00,0xFE,0x80,0x82,0x82,0x82,0x80,0xE0,0x20,0x20,0x20,0x20,0x20,0xE0,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00    /* OneWire device */
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
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,   /* BJT npn */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP,   /* BJT pnp */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,   /* MOSFET enh n-ch */
  PIN_LEFT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP,      /* MOSFET enh p-ch */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,   /* MOSFET dep n-ch */
  PIN_LEFT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP,      /* MOSFET dep p-ch */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,   /* JFET n-ch */
  PIN_LEFT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP,      /* JFET p-ch */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,   /* IGBT enh n-ch */
  PIN_LEFT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP,      /* IGBT enh p-ch */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,   /* SCR */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,   /* Triac */
  PIN_LEFT | PIN_TOP, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,      /* PUT */
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
