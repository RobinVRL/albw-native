// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0036174C(int param_1,int param_2,int param_3);
extern int *DAT_00192f18;
extern int *DAT_00192f1c;
extern undefined4 *DAT_00192f20;

// USA 00192E2C <- EU 00192E2C (Ghidra, non-matching)
// GLOBAL DAT_00192f18 int *
// GLOBAL DAT_00192f1c int *
// GLOBAL DAT_00192f20 undefined4 *

void func_00192E2C(int param_1)

{
  int *piVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_4c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_18 (*(undefined4 *)(albw_frame + 0x38))
  #define local_14 (*(float *)(albw_frame + 0x3c))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x40))
  piVar1 = DAT_00192f1c;
  if (*(char *)(param_1 + 0x444) == '\0') {
    if (*(char *)(param_1 + 0x445) != '\0') {
      if (*(short *)(param_1 + 0x2c) != 0 && *(short *)(param_1 + 0x2c) != 3) {
        *(undefined1 *)(param_1 + 0x447) = 1;
        local_4c = *DAT_00192f20;
        uStack_48 = DAT_00192f20[1];
        uStack_40 = DAT_00192f20[3];
        uStack_3c = DAT_00192f20[4];
        uStack_38 = DAT_00192f20[5];
        uStack_34 = DAT_00192f20[6];
        uStack_30 = DAT_00192f20[7];
        local_2c = ALBW_AS_F32(DAT_00192f20[8]);
        uStack_28 = DAT_00192f20[9];
        uStack_24 = DAT_00192f20[10];
        uStack_10 = *(undefined4 *)(param_1 + 0x3d8);
        local_18 = *(undefined4 *)(param_1 + 0x3d0);
        local_14 = *(float *)(param_1 + 0x438) + local_2c;
        local_44 = *(undefined4 *)(*(int *)(*piVar1 + 0x18) + 0x1a8);
        (**(code **)(**(int **)(param_1 + 0x43c) + 0x34))
                  (*(int **)(param_1 + 0x43c),&local_18,&local_4c,0);
      }
      *(undefined1 *)(param_1 + 0x445) = 0;
      return;
    }
  }
  else {
    iVar2 = func_0036174C(*DAT_00192f18,1,param_1 + 0x458);
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 0x444) = 0;
    }
  }
  return;
}

