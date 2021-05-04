/**********************************************************************
 * Copyright (c) 2018 Pieter Wuille, Greg Maxwell, Gleb Naumenko      *
 * Distributed under the MIT software license, see the accompanying   *
 * file LICENSE or http://www.opensource.org/licenses/mit-license.php.*
 **********************************************************************/

/* This file was substantially auto-generated by doc/gen_params.sage. */

#if !defined(DISABLE_FIELD_2) || !defined(DISABLE_FIELD_3) || !defined(DISABLE_FIELD_4) || !defined(DISABLE_FIELD_5) || !defined(DISABLE_FIELD_6) || !defined(DISABLE_FIELD_7) || !defined(DISABLE_FIELD_8)

#include <stdint.h>

#include "generic_common_impl.h"

#include "../lintrans.h"
#include "../sketch_impl.h"

#endif

#include "../sketch.h"

namespace {
#ifndef DISABLE_FIELD_2
// 2 bit field
typedef RecLinTrans<uint8_t, 2> StatTable2;
typedef RecLinTrans<uint8_t, 2> DynTable2;
constexpr StatTable2 SQR_TABLE_2({0x1, 0x3});
constexpr StatTable2 QRT_TABLE_2({0x2, 0});
typedef Field<uint8_t, 2, 3, StatTable2, DynTable2, &SQR_TABLE_2, &QRT_TABLE_2> Field2;
#endif

#ifndef DISABLE_FIELD_3
// 3 bit field
typedef RecLinTrans<uint8_t, 3> StatTable3;
typedef RecLinTrans<uint8_t, 3> DynTable3;
constexpr StatTable3 SQR_TABLE_3({0x1, 0x4, 0x6});
constexpr StatTable3 QRT_TABLE_3({0, 0x4, 0x6});
typedef Field<uint8_t, 3, 3, StatTable3, DynTable3, &SQR_TABLE_3, &QRT_TABLE_3> Field3;
#endif

#ifndef DISABLE_FIELD_4
// 4 bit field
typedef RecLinTrans<uint8_t, 4> StatTable4;
typedef RecLinTrans<uint8_t, 4> DynTable4;
constexpr StatTable4 SQR_TABLE_4({0x1, 0x4, 0x3, 0xc});
constexpr StatTable4 QRT_TABLE_4({0x6, 0xa, 0x8, 0});
typedef Field<uint8_t, 4, 3, StatTable4, DynTable4, &SQR_TABLE_4, &QRT_TABLE_4> Field4;
#endif

#ifndef DISABLE_FIELD_5
// 5 bit field
typedef RecLinTrans<uint8_t, 5> StatTable5;
typedef RecLinTrans<uint8_t, 3, 2> DynTable5;
constexpr StatTable5 SQR_TABLE_5({0x1, 0x4, 0x10, 0xa, 0xd});
constexpr StatTable5 QRT_TABLE_5({0x14, 0x8, 0xa, 0, 0xe});
typedef Field<uint8_t, 5, 5, StatTable5, DynTable5, &SQR_TABLE_5, &QRT_TABLE_5> Field5;
#endif

#ifndef DISABLE_FIELD_6
// 6 bit field
typedef RecLinTrans<uint8_t, 6> StatTable6;
typedef RecLinTrans<uint8_t, 3, 3> DynTable6;
constexpr StatTable6 SQR_TABLE_6({0x1, 0x4, 0x10, 0x3, 0xc, 0x30});
constexpr StatTable6 QRT_TABLE_6({0x3a, 0x26, 0x24, 0x14, 0x20, 0});
typedef Field<uint8_t, 6, 3, StatTable6, DynTable6, &SQR_TABLE_6, &QRT_TABLE_6> Field6;
#endif

#ifndef DISABLE_FIELD_7
// 7 bit field
typedef RecLinTrans<uint8_t, 4, 3> StatTable7;
typedef RecLinTrans<uint8_t, 4, 3> DynTable7;
constexpr StatTable7 SQR_TABLE_7({0x1, 0x4, 0x10, 0x40, 0x6, 0x18, 0x60});
constexpr StatTable7 QRT_TABLE_7({0, 0x14, 0x16, 0x72, 0x12, 0x40, 0x7a});
typedef Field<uint8_t, 7, 3, StatTable7, DynTable7, &SQR_TABLE_7, &QRT_TABLE_7> Field7;
#endif

#ifndef DISABLE_FIELD_8
// 8 bit field
typedef RecLinTrans<uint8_t, 4, 4> StatTable8;
typedef RecLinTrans<uint8_t, 4, 4> DynTable8;
constexpr StatTable8 SQR_TABLE_8({0x1, 0x4, 0x10, 0x40, 0x1b, 0x6c, 0xab, 0x9a});
constexpr StatTable8 QRT_TABLE_8({0xbc, 0x2a, 0x28, 0x86, 0x2c, 0xde, 0x8e, 0});
typedef Field<uint8_t, 8, 27, StatTable8, DynTable8, &SQR_TABLE_8, &QRT_TABLE_8> Field8;
#endif
}

Sketch* ConstructGeneric1Byte(int bits, int implementation)
{
    switch (bits) {
#ifndef DISABLE_FIELD_2
    case 2: return new SketchImpl<Field2>(implementation, 2);
#endif
#ifndef DISABLE_FIELD_3
    case 3: return new SketchImpl<Field3>(implementation, 3);
#endif
#ifndef DISABLE_FIELD_4
    case 4: return new SketchImpl<Field4>(implementation, 4);
#endif
#ifndef DISABLE_FIELD_5
    case 5: return new SketchImpl<Field5>(implementation, 5);
#endif
#ifndef DISABLE_FIELD_6
    case 6: return new SketchImpl<Field6>(implementation, 6);
#endif
#ifndef DISABLE_FIELD_7
    case 7: return new SketchImpl<Field7>(implementation, 7);
#endif
#ifndef DISABLE_FIELD_8
    case 8: return new SketchImpl<Field8>(implementation, 8);
#endif
    default: return nullptr;
    }
}
