#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_004EAF8C(int param_1,int *param_2,int param_3);
extern undefined4 uRam0013dd00;
extern undefined4 uRam0013dd04;
extern int *piRam0013dd08;
extern int *piRam0013dd0c;
extern int DAT_004eb458;
extern char s_SE_OBJ_PL_THROW_004eb45c[];
extern char s_SE_PV_THROW_S_004eb46c[];

// USA 0013DC6C <- EU 0013DC6C (Ghidra, non-matching)
// GLOBAL DAT_004eb458 int
// GLOBAL UNK_0013dd00 undefined4
// GLOBAL UNK_0013dd04 undefined4
// GLOBAL UNK_0013dd08 int *
// GLOBAL UNK_0013dd0c int *
// GLOBAL s_SE_OBJ_PL_THROW_004eb45c string
// GLOBAL s_SE_PV_THROW_S_004eb46c string

undefined4 func_0013DC6C(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  #define pcStack_14 (*(char * *)(albw_frame + 0xc))
  func_004CF478(*(int *)(param_1 + 0x4f4),1);
  func_00151148(*(int *)(param_1 + 0x54c),1);
  uVar1 = uRam0013dd00;
  *(undefined4 *)(param_1 + 0x520) = 0x28;
  *(undefined4 *)(param_1 + 0x524) = uVar1;
  *(undefined4 *)(param_1 + 0x51c) = 0;
  uVar1 = uRam0013dd04;
  *(undefined4 *)(param_1 + 0x584) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x588) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x58c) = *(undefined4 *)(param_1 + 0x3d8);
  piVar2 = piRam0013dd08;
  *(undefined4 *)(param_1 + 0x590) = uVar1;
  piVar3 = piRam0013dd0c;
  *(undefined4 *)(param_1 + 0x594) = *(undefined4 *)(*(int *)(*piVar2 + 0x1c) + 4);
  iVar4 = DAT_004eb458;
  iVar5 = *piVar3;
  if (param_1 == 0) {
    param_1 = *(undefined4 *)(iVar5 + 0x58);
  }
  if ((int *)param_1 != (int *)0x0) {
    pcStack_14 = s_SE_OBJ_PL_THROW_004eb45c;
    iStack_18 = DAT_004eb458;
    func_00150A84((int *)param_1,&iStack_18,0);
  }
  pcStack_14 = s_SE_PV_THROW_S_004eb46c;
  iStack_18 = iVar4;
  return func_004EAF8C(iVar5,&iStack_18,0);
}

