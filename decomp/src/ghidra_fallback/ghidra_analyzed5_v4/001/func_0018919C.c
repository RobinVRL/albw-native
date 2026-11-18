#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00659544(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_00189230;
extern int DAT_00189234;
extern undefined4 DAT_00189238;

// USA 0018919C <- EU 0018919C (Ghidra, non-matching)
// GLOBAL DAT_00189230 undefined4
// GLOBAL DAT_00189234 int
// GLOBAL DAT_00189238 undefined4

undefined4 func_0018919C(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  iVar1 = DAT_00189234;
  if ((*(uint *)(param_1 + 0x39c) & 0x80) != 0) {
    if (*(char *)(param_1 + 0x500) != '\b') {
      uStack_14 = DAT_00189230;
      iStack_18 = DAT_00189234;
      func_00150A84((int *)param_1,&iStack_18,0);
      uStack_14 = DAT_00189238;
      iStack_18 = iVar1;
      func_00150A84((int *)param_1,&iStack_18,0);
    }
    return func_00659544((undefined4 *)(param_1 + 0x4fc),10);
  }
  return func_00659544((undefined4 *)(param_1 + 0x4fc),5);
}

