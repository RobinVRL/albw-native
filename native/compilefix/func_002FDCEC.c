/* compilefix: func_002FDCEC, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/002/func_002FDCEC.c) with `this` restored in method calls (on a
 * stack object after its vtable store, or virtual slot 0) by tools/vtable_this_fix.py, BOOT_LOG 147. */
#include "ghidra_types.h"

extern int func_00120FBC(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,undefined4 param_5, int param_6,float *param_7);
extern int func_004CD4D4(int param_1);
extern int func_0051AA0C(int param_1);
extern int *DAT_002fdde8;
extern int *DAT_002fddec;
extern int *DAT_002fddf0;
extern float DAT_002fddf4;
extern undefined4 DAT_002fddf8;
extern undefined4 *DAT_002fddfc;

// USA 002FDCEC <- EU 002FDCC8 (Ghidra, non-matching)
// GLOBAL DAT_002fdde8 int *
// GLOBAL DAT_002fddec int *
// GLOBAL DAT_002fddf0 int *
// GLOBAL DAT_002fddf4 float
// GLOBAL DAT_002fddf8 undefined4
// GLOBAL DAT_002fddfc undefined4 *

undefined4 func_002FDCEC(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_14 (*(float *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(float *)(albw_frame + 0x14))
  if (*(undefined4 **)(param_1 + 0x14) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x14))(*(undefined4 **)(param_1 + 0x14));   /* this restored (vtable_this_fix) */
  }
  if ((*(char *)(param_1 + 0x7c) != '\0' && *(char *)(param_1 + 0x7c) != '\x05') &&
     (*DAT_002fdde8 != 0)) {
    func_004CD4D4(*DAT_002fdde8);
  }
  cVar1 = *(char *)(param_1 + 0x7c);
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  piVar2 = DAT_002fddec;
  if ((cVar1 == '\x01' || cVar1 == '\x02') || cVar1 == '\x03') {
    iVar3 = *DAT_002fddf0;
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 0x18);
    }
    if (iVar3 != 0 && iVar4 != 0) {
      local_14 = DAT_002fddf4;
      uStack_10 = DAT_002fddf8;
      local_c = DAT_002fddf4;
      func_00120FBC(iVar4,(undefined4 *)(param_1 + 0x30),(float *)(param_1 + 0x38),
                    (undefined4 *)(param_1 + 0x44),(uint)*(ushort *)DAT_002fddfc[1],
                    (uint)*(byte *)*DAT_002fddfc,&local_14);
    }
  }
  else if (cVar1 == '\x05') {
    *(ushort *)(*DAT_002fddec + 0x33e) = *(ushort *)(*DAT_002fddec + 0x33e) | 0x80;
    return func_0051AA0C(*piVar2);
  }
  return 0;
}

