/* sead (Nintendo's engine library) types used by the decompiled game code, written for this
 * project. Names follow sead's public reconstruction (open-ead/sead, used as a reference only);
 * layouts are the ones the game's code and data show. Real pointer types throughout, so the
 * same declarations work in the 64-bit build (the game data is converted to native layout
 * there instead of being reinterpreted). */
#ifndef ALBW_SEAD_H
#define ALBW_SEAD_H

#include <stdint.h>

typedef int32_t s32;
typedef uint32_t u32;

/* sead::SafeStringBase<char>: vtable (virtual assureTerminationImpl_) + string pointer */
typedef struct sead_SafeString {
    const void *vtbl;
    const char *mStringTop;
} sead_SafeString;

/* sead::PtrArrayImpl: element count, capacity, pointer buffer */
typedef struct sead_PtrArrayImpl {
    s32 mPtrNum;
    s32 mPtrNumMax;
    void **mPtrs;
} sead_PtrArrayImpl;

/* sead::RuntimeTypeInfo::Interface: polymorphic, single virtual isDerived(const Interface *) */
typedef struct sead_RuntimeTypeInfo_Interface {
    const struct sead_RuntimeTypeInfo_InterfaceVtbl *vtbl;
} sead_RuntimeTypeInfo_Interface;

typedef struct sead_RuntimeTypeInfo_InterfaceVtbl {
    int (*isDerived)(const sead_RuntimeTypeInfo_Interface *self, const sead_RuntimeTypeInfo_Interface *other);
} sead_RuntimeTypeInfo_InterfaceVtbl;

#endif
