#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00169678(int param_1,uint param_2,int *param_3);
extern int func_001BFE64(undefined4 *param_1,uint *param_2);
extern int func_001E3EB0(int param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_001E3FD8(int param_1);
extern int func_001E4018(int param_1,uint param_2);
extern int func_001E4090(int param_1,undefined4 param_2);
extern int func_001E40F4(int param_1,int param_2);
extern int func_001E4190(int param_1,float fparam_0);
extern void func_001E4378(int param_1);
extern int func_001E43F8(int param_1,float fparam_0);
extern int func_002BE9D4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_003249B4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0065B668(undefined4 *param_1,undefined1 param_2);
extern int DAT_0023f3ac;
extern float DAT_0023f3b0;
extern float DAT_0023f3b4;
extern undefined4 DAT_0023f3b8;
extern undefined DAT_0023f3bc;
extern int DAT_0023f3e8;
extern char s_DoorChurch_LockKey_00_0023f3d0[];

// USA 0023F1E4 <- EU 0023F1E4 (Ghidra, non-matching)
// GLOBAL DAT_0023f3ac int
// GLOBAL DAT_0023f3b0 float
// GLOBAL DAT_0023f3b4 float
// GLOBAL DAT_0023f3b8 undefined4
// GLOBAL DAT_0023f3bc undefined
// GLOBAL DAT_0023f3e8 int
// GLOBAL s_DoorChurch_LockKey_00_0023f3d0 string

int * func_0023F1E4(undefined4 *param_1,uint *param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  float fparam_0;
  ulonglong uVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  piVar2 = (int *)func_001BFE64(param_1,param_2);
  iVar4 = DAT_0023f3ac;
  piVar2[200] = DAT_0023f3ac + 0x5c;
  *piVar2 = iVar4;
  func_001E3FD8((int)piVar2);
  func_001E4018((int)piVar2,0);
  uVar6 = (ulonglong)(uint)ALBW_AS_U32(DAT_0023f3b0);
  func_001E3EB0((int)piVar2,DAT_0023f3b4,DAT_0023f3b0,DAT_0023f3b0);
  *(undefined2 *)(*(int *)(piVar2[0x121] + 0x18) + 0x28) = 0xe4;
  *(short *)(piVar2[0x121] + 0x2c) = (short)piVar2[0x15];
  puVar3 = (undefined4 *)func_0010BAB4(0x2cc);
  iVar4 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    local_28 = DAT_0023f3b8;
    local_24 = &DAT_0023f3bc;
    iVar4 = func_002BE9D4(puVar3,&local_28,0,0,1);
  }
  piVar2[0x130] = (int)s_DoorChurch_LockKey_00_0023f3d0;
  piVar2[0x131] = iVar4;
  func_001E40F4((int)piVar2,2);
  iVar4 = DAT_0023f3e8;
  uVar5 = 0;
  do {
    func_00169678((int)piVar2,uVar5,iVar4 + uVar5 * 8);
    fparam_0 = ALBW_AS_F32(uVar6);
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 2);
  func_001E4378((int)piVar2);
  if ((short)piVar2[0xb] == 1) {
    bVar1 = func_00588BF0((int)piVar2,0);
    if (bVar1) goto LAB_0023f368;
  }
  else {
    bVar1 = func_00588BF0((int)piVar2,0);
    if (!bVar1) {
LAB_0023f368:
      func_001E4090((int)piVar2,0);
      func_001E4190((int)piVar2,fparam_0);
      func_001E43F8((int)piVar2,fparam_0);
      func_0065B668(piVar2 + 0x126,3);
      return piVar2;
    }
  }
  func_001E4090((int)piVar2,1);
  func_001E4190((int)piVar2,fparam_0);
  func_001E43F8((int)piVar2,fparam_0);
  *(undefined1 *)(piVar2[0x121] + 0x44) = 0;
  func_003249B4((int)piVar2);
  func_0065B668(piVar2 + 0x126,1);
  return piVar2;
}

