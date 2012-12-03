/*
 * CByteSwap.h
 * MacOSX realization of ByteSwap
 *
 *  Created on: Jul 31, 2012
 *      Author: gregorytkach
 */

#include "playerCompileConfig.h"

#ifdef COMPILECONFIGMACOSX_H_

#include "core/math/SharedConverter.h"
#include "utils/ByteSwap.h"
#include <libkern/OSByteOrder.h>

#define bswap_16(X) OSReadSwapInt16(&X,0)
#define bswap_32(X) OSReadSwapInt32(&X,0)

namespace irrgame
{
	namespace utils
	{
		u16 ByteSwap::byteswap(u16 num)
		{
			return bswap_16(num);
		}

		s16 ByteSwap::byteswap(s16 num)
		{
			return bswap_16(num);
		}

		u32 ByteSwap::byteswap(u32 num)
		{
			return bswap_32(num);
		}

		s32 ByteSwap::byteswap(s32 num)
		{
			return bswap_32(num);
		}

		f32 ByteSwap::byteswap(f32 num)
		{
			u32 tmp = core::SharedConverter::getInstance().convertToUInt(num);
			tmp = bswap_32(tmp);
			return (core::SharedConverter::getInstance().convertToFloat(tmp));
		}

		// prevent accidental byte swapping of chars
		u8 ByteSwap::byteswap(u8 num)
		{
			return num;
		}

		c8 ByteSwap::byteswap(c8 num)
		{
			return num;
		}
	}
}

#endif /* COMPILECONFIGMACOSX_H_ */