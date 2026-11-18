#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00659544(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_00189230;
extern int DAT_00189234;
extern undefined4 DAT_00189238;

// USA 001891A0 <- EU 001891A0 (Ghidra, non-matching)
// GLOBAL DAT_00189230 undefined4
// GLOBAL DAT_00189234 int
// GLOBAL DAT_00189238 undefined4

undefined4 func_001891A0(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  iVar1 = DAT_00189234;
  if ((param_1[0xe7] & 0x80U) != 0) {
    if ((char)param_1[0x140] != '\b') {
      local_14 = DAT_00189230;
      local_18 = DAT_00189234;
      func_00150A84(param_1,&local_18,0);
      local_14 = DAT_00189238;
      local_18 = iVar1;
      func_00150A84(param_1,&local_18,0);
    }
    return func_00659544(param_1 + 0x13f,10);
  }
  return func_00659544(param_1 + 0x13f,5);
}

