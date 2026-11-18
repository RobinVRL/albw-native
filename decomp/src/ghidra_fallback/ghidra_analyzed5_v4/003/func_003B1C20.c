#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_002B705C(int param_1);
extern int func_002B83E4(undefined4 param_1,int param_2);
extern int func_003ABB24(int *param_1,uint param_2,int param_3);
extern int func_003B147C(int *param_1,undefined4 param_2,undefined4 param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_003b1d90;
extern uint *DAT_003b1d94;
extern undefined4 *DAT_003b1d98;
extern undefined4 DAT_003b1d9c;

// USA 003B1C20 <- EU 003B1BFC (Ghidra, non-matching)
// GLOBAL DAT_003b1d90 int *
// GLOBAL DAT_003b1d94 uint *
// GLOBAL DAT_003b1d98 undefined4 *
// GLOBAL DAT_003b1d9c undefined4

undefined4 func_003B1C20(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((float *)(albw_frame + 0x0))
  #define local_18 (*(float *)(albw_frame + 0x8))
  piVar1 = (int *)func_0052FBA0(*DAT_003b1d90 + 0x3dbbc,param_1[0x24]);
  if (((*DAT_003b1d94 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_003b1d94), iVar2 != 0)) {
    *DAT_003b1d98 = DAT_003b1d9c;
  }
  if ((piVar1 == (int *)0x0) || (iVar2 = (**(code **)*piVar1)(piVar1,DAT_003b1d98), iVar2 == 0)) {
    piVar1 = (int *)0x0;
  }
  if ((((piVar1 == (int *)0x0) || ((char)piVar1[0x140] != '\0' && (char)piVar1[0x140] != '\x04')) ||
      (*(char *)((int)piVar1 + 0x4f1) != '\0')) ||
     (iVar2 = func_002B83E4(param_1[0x12],(int)piVar1), iVar2 != 0)) {
    piVar1 = *(int **)(param_1[0x12] + 0x93c);
    iVar2 = func_003ABB24(piVar1,1,1);
    if (iVar2 != 0) {
      func_003B147C((int *)piVar1[1],1,1);
    }
    param_1[0x24] = 0;
  }
  else {
    iVar2 = param_1[0x12];
    iVar3 = piVar1[0xf5];
    iVar4 = piVar1[0xf6];
    *(int *)(iVar2 + 0x97c) = piVar1[0xf4];
    *(int *)(iVar2 + 0x980) = iVar3;
    *(int *)(iVar2 + 0x984) = iVar4;
    func_002B705C(param_1[0x12]);
    func_00115C70(local_20,(float *)(piVar1 + 0xf4),(float *)(param_1[0x12] + 0x3d0));
    if ((int)ALBW_AS_U32(SQRT(local_20[0] * local_20[0] + local_18 * local_18)) < 0x3f800000) {
      (**(code **)(*piVar1 + 0x58))(piVar1,*(undefined4 *)(param_1[0x12] + 0x2cc));
      return (**(code **)(*param_1 + 0x138))(param_1,0xb,1);
    }
  }
  return 0;
}

