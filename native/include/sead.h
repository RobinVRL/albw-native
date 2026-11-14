/* sead (Nintendo's engine library) types used by the decompiled game code, written for this
 * project. Names follow sead's public reconstruction (open-ead/sead, used as a reference only);
 * layouts are the ones the game's code and data show. Real pointer types throughout; members
 * that are pointer words of game memory are ALBW_GP (gptr.h): 4 bytes in the x86-64 low-4GB
 * build as in the game, nothing on 32-bit. Function-pointer slots are gptr_t words, called
 * through GFN() (LLVM cannot call through a 4-byte function pointer). Fully native 64-bit
 * (native/64BIT.md) converts the game data to native layouts instead. */
#ifndef ALBW_SEAD_H
#define ALBW_SEAD_H

#include <stdint.h>
#include "gptr.h"

typedef int32_t s32;
typedef uint32_t u32;

/* sead::SafeStringBase<char>: vtable (virtual assureTerminationImpl_) + string pointer */
typedef struct sead_SafeString {
    const void *ALBW_GP vtbl;
    const char *ALBW_GP mStringTop;
} sead_SafeString;

/* sead::PtrArrayImpl: element count, capacity, pointer buffer */
typedef struct sead_PtrArrayImpl {
    s32 mPtrNum;
    s32 mPtrNumMax;
    void *ALBW_GP *ALBW_GP mPtrs;
} sead_PtrArrayImpl;

/* sead::RuntimeTypeInfo::Interface: polymorphic, single virtual isDerived(const Interface *) */
typedef struct sead_RuntimeTypeInfo_Interface {
    const struct sead_RuntimeTypeInfo_InterfaceVtbl *ALBW_GP vtbl;
} sead_RuntimeTypeInfo_Interface;

typedef int (*sead_RuntimeTypeInfo_IsDerivedFn)(const sead_RuntimeTypeInfo_Interface *self,
                                                const sead_RuntimeTypeInfo_Interface *other);
typedef struct sead_RuntimeTypeInfo_InterfaceVtbl {
    gptr_t isDerived; /* sead_RuntimeTypeInfo_IsDerivedFn: GFN(sead_RuntimeTypeInfo_IsDerivedFn, vt->isDerived) */
} sead_RuntimeTypeInfo_InterfaceVtbl;

#endif
