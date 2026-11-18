#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_002ACC68(undefined4 *param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0068C690(float *param_1);
extern int *DAT_002b8acc;
extern float DAT_002b8ad0;
extern undefined4 DAT_002b8ad4;

// USA 002B89F0 <- EU 002B89CC (Ghidra, non-matching)
// GLOBAL DAT_002b8acc int *
// GLOBAL DAT_002b8ad0 float
// GLOBAL DAT_002b8ad4 undefined4

void func_002B89F0(int param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define afStack_24 ((float *)(albw_frame + 0xc))
  bVar2 = false;
  if ((*(char *)(*DAT_002b8acc + 0x18) == '\a' && *(int *)(*DAT_002b8acc + 0x1c) == 3) &&
     ((int)ALBW_AS_U32(SQRT(*(float *)(param_1 + 0x3d0) * *(float *)(param_1 + 0x3d0) +
                *(float *)(param_1 + 0x3d8) * *(float *)(param_1 + 0x3d8))) < 0x41000000)) {
    bVar2 = true;
  }
  bVar1 = func_002ACC68((undefined4 *)(param_1 + 0x940));
  if (bVar1 || bVar2) {
    func_00115C70(afStack_24,(float *)(param_1 + 0x940),(float *)(param_1 + 0x3d0));
    uVar3 = func_0068C690(afStack_24);
    iVar4 = 0;
    uVar5 = DAT_002b8ad4;
    fparam_0 = DAT_002b8ad0;
    do {
      func_004D80A4(&local_30,uVar3,fparam_0);
      local_2c = uVar5;
      func_00115C54(&local_30,&local_30,(float *)(param_1 + 0x940));
      bVar2 = func_002ACC68(&local_30);
      if (!bVar2) {
        *(float *)(param_1 + 0x940) = local_30;
        *(undefined4 *)(param_1 + 0x944) = local_2c;
        *(undefined4 *)(param_1 + 0x948) = uStack_28;
        return;
      }
      iVar4 = iVar4 + 1;
      uVar3 = uVar3 + 0x20000000;
    } while (iVar4 < 8);
  }
  return;
}

