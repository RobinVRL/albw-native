/* USA 00689240 (EU 00689218): resource factory (sead::ResourceFactory create, vtable +0x1c of
 * the factory used by sead::ResourceMgr::load 0049A778): new(0xB4, heap, align) + ctor 0048FB4C
 * + name buffer + vtable. Ghidra typed it void; the ARM code returns the object in r0 (NULL when
 * the allocation fails: EU 00689228 beq to the pop with r0 = 0). On i386 the caller got it in
 * eax by accident; on x86-64 rax was 0 (BOOT_LOG64 stop 7: "Effect/JackAll.ptcl" not loaded,
 * NULL deref in 002E32DC). Rest is the Ghidra text. Confidence: high. */
#include "ghidra_types.h"

extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0048FB4C(undefined4 *param_1);
extern undefined4 DAT_00689290;
extern undefined4 DAT_00689294;

undefined4 *func_00689240(undefined4 param_1,int *param_2,undefined4 param_3)
{
  undefined4 uVar1;
  undefined4 *puVar2;

  puVar2 = (undefined4 *)func_0010CF28(0xb4,param_2,param_3);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)func_0048FB4C(puVar2);
    puVar2[10] = puVar2 + 0xc;
    puVar2[0xb] = 0x80;
    *(undefined1 *)(puVar2[10] + 0x7f) = 0;
    uVar1 = DAT_00689290;
    *(undefined1 *)puVar2[10] = 0;
    puVar2[9] = uVar1;
    *(undefined1 *)(puVar2 + 0x2c) = 7;
    *(undefined1 *)((int)puVar2 + 0xb1) = 0xff;
    *puVar2 = DAT_00689294;
  }
  return puVar2;
}
