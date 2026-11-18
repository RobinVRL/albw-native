#include "ghidra_types.h"

extern int func_0010FB48(int param_1);
extern int func_003C99A8(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8, undefined4 param_9,undefined4 param_10);
extern int func_0056130C(int param_1);
extern int DAT_003c9304;
extern int DAT_003c9308;
extern undefined4 DAT_003c930c;
extern int DAT_003c9310;

// USA 003C9278 <- EU 003C9254 (Ghidra, non-matching)
// GLOBAL DAT_003c9304 int
// GLOBAL DAT_003c9308 int
// GLOBAL DAT_003c930c undefined4
// GLOBAL DAT_003c9310 int

int func_003C9278(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 ((int *)(albw_frame + 0x10))
  iVar1 = DAT_003c9304;
  if ((uint)param_3[2] < 0x201) {
    local_24 = 0;
    local_20[0] = func_0056130C(param_1);
    iVar1 = func_003C99A8(local_20,&local_24,0,*(undefined4 *)(param_1 + 8),
                          *(undefined4 *)(param_1 + 0xc),*param_3,param_3[1],param_3[2],param_4,0);
    if (-1 < iVar1) {
      puVar2 = func_0010FB48(DAT_003c9308);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = DAT_003c930c;
        puVar2[1] = local_24;
      }
      *param_2 = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        software_interrupt(0x23);
        iVar1 = DAT_003c9310;
      }
      else {
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}

