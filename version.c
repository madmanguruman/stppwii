/*
 * Puzzles version numbering.
 */

#define STR1(x) #x
#define STR(x) STR1(x)

#if defined REVISION

char ver[] = "Revision: r" STR(REVISION);

#else

char ver[] = "Unknown version";

#endif

#if defined STPPC2X_VERSION

char stppc2x_ver[] = "STPPWii v" STR(STPPC2X_VERSION);

#else

char stppc2x_ver[] = "STPPWii";

#endif
