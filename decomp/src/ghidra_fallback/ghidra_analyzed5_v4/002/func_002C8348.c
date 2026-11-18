#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004356B4(int *param_1);
extern int func_00491338(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern void func_004D7E0C(float *param_1,uint param_2,uint param_3);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern undefined4 DAT_002c848c;
extern undefined4 DAT_002c8490;
extern float DAT_002c8494;
extern undefined4 DAT_002c8498;
extern undefined4 DAT_002c849c;

// USA 002C8348 <- EU 002C8324 (Ghidra, non-matching)
// GLOBAL DAT_002c848c undefined4
// GLOBAL DAT_002c8490 undefined4
// GLOBAL DAT_002c8494 float
// GLOBAL DAT_002c8498 undefined4
// GLOBAL DAT_002c849c undefined4

undefined4 func_002C8348(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define fStack_40 (*(float *)(albw_frame + 0x0))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x8))
  #define afStack_34 ((float *)(albw_frame + 0xc))
  func_00169A80(*(int **)(param_1 + 0x480),param_2,param_3,param_4);
  piVar4 = (int *)(param_1 + 0x430);
  func_00168E9C(*(int **)(param_1 + 0x480),*(int *)(param_1 + 0x430),(int *)0x0);
  iVar2 = *piVar4;
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_004D7EB0((float *)(iVar2 + 0x80),*(uint *)(param_1 + 0x20),*(uint *)(param_1 + 1000),
                (float *)(param_1 + 0x3d0));
  func_004CEAF0(*piVar4);
  iVar2 = *piVar4;
  uVar3 = *(undefined4 *)(param_1 + 0x488);
  *(undefined4 *)(iVar2 + 0x74) = uVar3;
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar2 + 0x78) = uVar3;
  *(undefined4 *)(iVar2 + 0x7c) = uVar3;
  cVar1 = *(char *)(param_1 + 0x410);
  if ((cVar1 != '\0' && cVar1 != '\x02') && cVar1 != '\x03') {
    return func_004CF478(*(int *)(param_1 + 0x430),0);
  }
  func_004CF478(*(int *)(param_1 + 0x430),1);
  piVar4 = (int *)(param_1 + 0x47c);
  func_00491338((float *)(*(int *)(param_1 + 0x47c) + 100),*(uint *)(param_1 + 0x20),
                *(uint *)(param_1 + 1000),0);
  uStack_38 = DAT_002c849c;
  uVar3 = DAT_002c848c;
  iVar2 = *piVar4;
  *(undefined4 *)(iVar2 + 0x58) = DAT_002c8490;
  *(undefined4 *)(iVar2 + 0x5c) = uVar3;
  *(undefined4 *)(iVar2 + 0x60) = uVar3;
  fStack_40 = DAT_002c8494;
  uStack_3c = DAT_002c8498;
  func_004D7E0C(afStack_34,*(uint *)(param_1 + 0x20),*(uint *)(param_1 + 1000));
  func_00115CE4(&fStack_40,afStack_34,&fStack_40);
  func_00115C54(&fStack_40,&fStack_40,(float *)(param_1 + 0x3d0));
  iVar2 = *piVar4;
  *(float *)(iVar2 + 4) = fStack_40;
  *(undefined4 *)(iVar2 + 8) = uStack_3c;
  *(undefined4 *)(iVar2 + 0xc) = uStack_38;
  return func_004356B4((int *)*piVar4);
}

