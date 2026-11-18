#include "ghidra_types.h"

extern int func_0010FB48(int param_1);
extern int func_003C9880(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,int param_7);
extern int func_0056130C(int param_1);
extern int DAT_003c8fe4;
extern int DAT_003c8fe8;
extern undefined4 DAT_003c8fec;
extern int DAT_003c8ff0;

// USA 003C8F6C <- EU 003C8F48 (Ghidra, non-matching)
// GLOBAL DAT_003c8fe4 int
// GLOBAL DAT_003c8fe8 int
// GLOBAL DAT_003c8fec undefined4
// GLOBAL DAT_003c8ff0 int

int func_003C8F6C(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 ((int *)(albw_frame + 0x8))
  iVar1 = DAT_003c8fe4;
  if ((uint)param_3[2] < 0x201) {
    local_1c = 0;
    local_18[0] = func_0056130C(param_1);
    iVar1 = func_003C9880(local_18,&local_1c,*(undefined4 *)(param_1 + 8),
                          *(undefined4 *)(param_1 + 0xc),*param_3,param_3[1],param_3[2]);
    if (-1 < iVar1) {
      puVar2 = func_0010FB48(DAT_003c8fe8);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = DAT_003c8fec;
        puVar2[1] = local_1c;
      }
      *param_2 = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        software_interrupt(0x23);
        iVar1 = DAT_003c8ff0;
      }
      else {
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}

