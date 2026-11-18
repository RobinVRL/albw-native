/* compilefix: func_006072C8, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/006/func_006072C8.c): an actor profile creator printed as
 * `void`; the ARM returns the new object (tools/void_creator_fix.py, BOOT_LOG 158). */
#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060731c;
extern int DAT_00607320;
extern float DAT_00607324;
extern int DAT_00607328;

// USA 006072C8 <- EU 006072A0 (Ghidra, non-matching)
// GLOBAL DAT_0060731c undefined4
// GLOBAL DAT_00607320 int
// GLOBAL DAT_00607324 float
// GLOBAL DAT_00607328 int

void *func_006072C8(uint *param_1)
{
  void *albw_ret = 0;
  float fVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_0060731c);
  albw_ret = (void *)puVar2;   /* the ARM returns the new object in r0 */
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_00150E40(puVar2,param_1);
    fVar1 = DAT_00607324;
    iVar4 = DAT_00607320 + 0x54;
    *piVar3 = DAT_00607320;
    piVar3[200] = iVar4;
    *(undefined1 *)(piVar3 + 0x103) = 0;
    iVar4 = DAT_00607328;
    fVar5 = (float)VectorSignedToFloat((int)(short)piVar3[0xb],(byte)(in_fpscr >> 0x15) & 3);
    piVar3[0x104] = (int)ALBW_AS_U32((fVar5 * fVar1));
    piVar3[0x105] = iVar4;
    fVar5 = (float)VectorSignedToFloat((int)*(short *)((int)piVar3 + 0x2e),
                                       (byte)(in_fpscr >> 0x15) & 3);
    piVar3[0x106] = (int)ALBW_AS_U32((fVar5 * fVar1));
    *(undefined1 *)(piVar3 + 0x103) = 1;
  }
  return albw_ret;
  return albw_ret;
}
