#include "ghidra_types.h"

extern int func_00122C78(int *param_1,undefined4 param_2,undefined4 param_3);
extern int func_001E30D0(undefined4 param_1,undefined4 param_2,uint *param_3,uint *param_4);
extern int func_0025F9FC(int param_1,int param_2);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_00520B48(int param_1);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int func_00661C18(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0029b874;
extern int *DAT_0029b878;
extern uint DAT_0029b87c;
extern int DAT_0029b898;
extern int *DAT_0029b89c;
extern undefined4 DAT_0029b8a0;
extern undefined4 DAT_0029b8a4;
extern int *DAT_0029b8a8;
extern char s_SE_S_START_FILE_SELECT_0029b880[];

// USA 0029B698 <- EU 0029B674 (Ghidra, non-matching)
// GLOBAL DAT_0029b874 int *
// GLOBAL DAT_0029b878 int *
// GLOBAL DAT_0029b87c uint
// GLOBAL DAT_0029b898 int
// GLOBAL DAT_0029b89c int *
// GLOBAL DAT_0029b8a0 undefined4
// GLOBAL DAT_0029b8a4 undefined4
// GLOBAL DAT_0029b8a8 int *
// GLOBAL s_SE_S_START_FILE_SELECT_0029b880 string

undefined4 func_0029B698(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 uVar5;
  uint *puVar6;
  int *piVar7;
  uint *puVar8;
  uint in_fpscr;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  iVar1 = func_00520B48(*DAT_0029b874);
  if ((iVar1 == 0) &&
     (((*(uint *)(*DAT_0029b878 + 0x4d0) & DAT_0029b87c) != 0 ||
      ((*(uint *)(*DAT_0029b878 + 0x4dc) & 2) != 0)))) {
    if (*(char *)(param_1 + 0xc0) < '\x02') {
      func_0025F9FC(*(int *)(param_1 + 0xec),1);
      func_00661C18((undefined4 *)(param_1 + 0xbc),2);
    }
    else if (*(char *)(param_1 + 0xc0) < '\x03') {
      local_1c = s_SE_S_START_FILE_SELECT_0029b880;
      local_20 = DAT_0029b898;
      func_00587F74(*DAT_0029b89c,&local_20,0);
      func_00661C18((undefined4 *)(param_1 + 0xbc),3);
    }
  }
  (**(code **)(**(int **)(param_1 + 0xec) + 0x60))(*(int **)(param_1 + 0xec));
  puVar8 = *(uint **)(param_1 + 0xd0);
  uVar2 = *(uint *)(*(int *)(param_1 + 0xd8) + *(char *)(param_1 + 0xc0) * 8 + 4);
  piVar4 = (int *)(*(int *)(param_1 + 0xd8) + *(char *)(param_1 + 0xc0) * 8);
  if ((uVar2 & 1) != 0) {
    piVar4 = (int *)(*piVar4 + *(int *)((int)puVar8 + ((int)uVar2 >> 1)));
  }
  (*(code *)*piVar4)();
  puVar6 = *(uint **)(param_1 + 0xcc);
  iVar1 = *(int *)(param_1 + 0xbc) + 1;
  *(int *)(param_1 + 0xbc) = iVar1;
  uVar5 = extraout_r1;
  if (puVar6 != (uint *)0x0) {
    fVar9 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210((int)puVar6,1,fVar9);
    uVar5 = extraout_r1_00;
  }
  if ('\0' < *(char *)(param_1 + 0xc0)) {
    uVar2 = (uint)*(byte *)(*(int *)(param_1 + 0x138) + 0xe8);
    uVar5 = DAT_0029b8a0;
    if (uVar2 == 0) {
      uVar5 = DAT_0029b8a4;
    }
    *(undefined4 *)(*(int *)(param_1 + 0xf4) + 0x90) = uVar5;
    func_00122C78(*(int **)(param_1 + 0xf4),uVar2,puVar6);
    iVar1 = *(int *)(param_1 + 0x138);
    puVar8 = *(uint **)(iVar1 + 0x18);
    uVar2 = *(uint *)(*(int *)(iVar1 + 0x20) + *(char *)(iVar1 + 8) * 8 + 4);
    piVar4 = (int *)(*(int *)(iVar1 + 0x20) + *(char *)(iVar1 + 8) * 8);
    piVar7 = (int *)((int)puVar8 + ((int)uVar2 >> 1));
    if ((uVar2 & 1) != 0) {
      piVar4 = (int *)(*piVar4 + *piVar7);
    }
    (*(code *)*piVar4)(piVar7);
    puVar6 = *(uint **)(iVar1 + 0x14);
    iVar3 = *(int *)(iVar1 + 4) + 1;
    *(int *)(iVar1 + 4) = iVar3;
    uVar5 = extraout_r1_01;
    if (puVar6 != (uint *)0x0) {
      fVar9 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210((int)puVar6,1,fVar9);
      uVar5 = extraout_r1_02;
    }
  }
  if (*(char *)(*(int *)(param_1 + 0xec) + 0x194) != '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0xf4) + 0x94) = 0;
    *(undefined1 *)(*DAT_0029b8a8 + 0x2c1b) = 0;
  }
  return func_001E30D0(param_1,uVar5,puVar6,puVar8);
}

