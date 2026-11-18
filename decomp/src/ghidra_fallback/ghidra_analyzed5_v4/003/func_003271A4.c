#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00298160(int param_1);
extern int func_0058959C(int param_1);
extern int *DAT_00327250;
extern undefined4 *DAT_00327254;
extern int DAT_00327258;

// USA 003271A4 <- EU 00327180 (Ghidra, non-matching)
// GLOBAL DAT_00327250 int *
// GLOBAL DAT_00327254 undefined4 *
// GLOBAL DAT_00327258 int

void func_003271A4(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(undefined4 *)(albw_frame + 0x0))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x4))
  #define local_48 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x18))
  #define fStack_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x24))
  #define local_28 (*(undefined4 *)(albw_frame + 0x28))
  #define afStack_24 ((float *)(albw_frame + 0x2c))
  piVar1 = DAT_00327250;
  if (*(char *)(param_1 + 0x477) == '\x01') {
    local_50 = *DAT_00327254;
    uStack_4c = DAT_00327254[1];
    uStack_44 = DAT_00327254[3];
    uStack_40 = DAT_00327254[4];
    uStack_3c = DAT_00327254[5];
    uStack_38 = DAT_00327254[6];
    fStack_34 = ALBW_AS_F32(DAT_00327254[7]);
    local_30 = DAT_00327254[8];
    uStack_2c = DAT_00327254[9];
    local_28 = DAT_00327254[10];
    local_48 = *(undefined4 *)(*(int *)(*DAT_00327250 + 0x18) + 0x1a8);
    func_00115C54(afStack_24,(float *)(param_1 + 0x3d0),&fStack_34);
    bVar2 = func_0058959C(*piVar1);
    if (bVar2) {
      local_28 = local_28 & 0xffff0000;
      iVar3 = func_00298160(param_1);
      if (iVar3 == 0) {
        local_28 = local_28 & 0xffff;
      }
      else {
        local_28 = CONCAT22(1,(undefined2)local_28);
        *(undefined1 *)(*piVar1 + 0xe1) = 1;
      }
      local_48 = 0;
    }
    *(undefined2 *)(DAT_00327258 + param_1) = (*(undefined2 *)((char *)&local_28 + 2));
    iVar3 = (**(code **)(**(int **)(param_1 + 0x4a0) + 0x34))
                      (*(int **)(param_1 + 0x4a0),afStack_24,&local_50,0);
    if (iVar3 != 0) {
      *(undefined1 *)(param_1 + 0x477) = 2;
    }
  }
  return;
}

